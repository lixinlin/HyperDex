// Copyright (c) 2011, Cornell University
// All rights reserved.
//
// Redistribution and use in source and binary forms, with or without
// modification, are permitted provided that the following conditions are met:
//
//     * Redistributions of source code must retain the above copyright notice,
//       this list of conditions and the following disclaimer.
//     * Redistributions in binary form must reproduce the above copyright
//       notice, this list of conditions and the following disclaimer in the
//       documentation and/or other materials provided with the distribution.
//     * Neither the name of HyperDex nor the names of its contributors may be
//       used to endorse or promote products derived from this software without
//       specific prior written permission.
//
// THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
// AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
// IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
// ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT OWNER OR CONTRIBUTORS BE
// LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
// CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF
// SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
// INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN
// CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
// ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
// POSSIBILITY OF SUCH DAMAGE.

#define __STDC_LIMIT_MACROS

// HyperspaceHashing
#include "bithacks.h"
#include "cfloat.h"
#include "hashes_internal.h"
#include "range_match.h"

// There are three ways in which comparisons can be made to check if a
// coordinate is within a range.
//
// Simple comparison:
//      If the mask specifies the full coordinate and we know that no
//      interlacing took place, we can just compare the hash against the
//      cfloat-mapped lower and upper bounds.
//
// Interlace-tolerant comparison:
//      If the mask specifies the full coordinate, and interlacing took
//      place, we need to first pull out which bits are from the
//      cfloat-mapped number.  For this form, the lower and upper bounds
//      are pre-interlaced so that the number extracted from the full
//      coordinate's hash is directly comparable to m_clower and
//      m_cupper.
//
// Partial-tolerant comparison:
//      If the mask does not specify a full coordinate, ordering-based
//      comparisons do not work.  In this case, the best we can do is
//      compare bits that are the same in the cloat-mapped lower and
//      upper ranges to the hash.

hyperspacehashing :: range_match :: range_match(unsigned int idx,
                                                unsigned int space,
                                                uint64_t lower,
                                                uint64_t upper)
    : m_idx(idx)
    , m_lower(lower)
    , m_upper(upper)
    , m_clower(cfloat(lower, space))
    , m_cupper(cfloat(upper, space))
    , m_crange_mask()
    , m_crange_hash()
{
    cfloat_range(m_clower, m_cupper, space, &m_crange_mask, &m_crange_hash);
}

bool
hyperspacehashing :: range_match :: matches(const mask::coordinate& coord) const
{
    // If we are dealing with the key
    if (m_idx == 0)
    {
        // Simple comparison
        if (coord.primary_mask == UINT32_MAX)
        {
            assert(m_clower == static_cast<uint32_t>(m_clower));
            assert(m_cupper == static_cast<uint32_t>(m_cupper));
            return (static_cast<uint32_t>(m_clower) <= coord.primary_hash) &&
                   (coord.primary_hash <= static_cast<uint32_t>(m_cupper));
        }
        // Partial-tolerant comparison
        else
        {
            assert(m_crange_mask == static_cast<uint32_t>(m_crange_mask));
            assert(m_crange_hash == static_cast<uint32_t>(m_crange_hash));
            uint32_t mask = coord.primary_mask & static_cast<uint32_t>(m_crange_mask);
            return (coord.primary_hash & mask) == (static_cast<uint32_t>(m_crange_hash) & mask);
        }
    }
    else
    {
        // Interlace-tolerant comparison
        if (coord.secondary_mask == UINT32_MAX)
        {
            assert(m_clower == static_cast<uint32_t>(m_clower));
            assert(m_cupper == static_cast<uint32_t>(m_cupper));
            assert(m_crange_mask == static_cast<uint32_t>(m_crange_mask));
            uint32_t hash = coord.secondary_hash & static_cast<uint32_t>(m_crange_mask);
            return (static_cast<uint32_t>(m_clower) <= hash) &&
                   (hash <= static_cast<uint32_t>(m_cupper));
        }
        // Partial-tolerant comparison
        else
        {
            assert(m_crange_mask == static_cast<uint32_t>(m_crange_mask));
            assert(m_crange_hash == static_cast<uint32_t>(m_crange_hash));
            uint32_t mask = coord.secondary_mask & static_cast<uint32_t>(m_crange_mask);
            return (coord.secondary_hash & mask) == (static_cast<uint32_t>(m_crange_hash) & mask);
        }
    }
}

bool
hyperspacehashing :: range_match :: matches(const prefix::coordinate& coord) const
{
    uint64_t prefix = lookup_msb_mask[coord.prefix];

    // Interlace-tolerant comparison
    if ((prefix & m_crange_mask) == m_crange_mask)
    {
        uint64_t hash = coord.point & m_crange_mask;
        return (m_clower <= hash) && (hash <= m_cupper);
    }
    // Partial-tolerant comparison
    else
    {
        uint64_t mask = prefix & m_crange_mask;
        return (coord.point & mask) == (m_crange_hash & mask);
    }
}

bool
hyperspacehashing :: range_match :: matches(const e::buffer& key,
                                            const std::vector<e::buffer>& value) const
{
    uint64_t hash;

    // If we are dealing with the key
    if (m_idx == 0)
    {
        hash = lendian(key);
    }
    else
    {
        hash = lendian(value[m_idx - 1]);
    }

    return (m_lower <= hash) && (hash <= m_upper);
}