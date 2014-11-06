/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class org_hyperdex_client_Client */

#ifndef _Included_org_hyperdex_client_Client
#define _Included_org_hyperdex_client_Client
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     org_hyperdex_client_Client
 * Method:    initialize
 * Signature: ()V
 */
JNIEXPORT HYPERDEX_API void JNICALL Java_org_hyperdex_client_Client_initialize
  (JNIEnv *, jclass);

/*
 * Class:     org_hyperdex_client_Client
 * Method:    terminate
 * Signature: ()V
 */
JNIEXPORT HYPERDEX_API void JNICALL Java_org_hyperdex_client_Client_terminate
  (JNIEnv *, jclass);

/*
 * Class:     org_hyperdex_client_Client
 * Method:    _create
 * Signature: (Ljava/lang/String;I)V
 */
JNIEXPORT HYPERDEX_API void JNICALL Java_org_hyperdex_client_Client__1create
  (JNIEnv *, jobject, jstring, jint);

/*
 * Class:     org_hyperdex_client_Client
 * Method:    _destroy
 * Signature: ()V
 */
JNIEXPORT HYPERDEX_API void JNICALL Java_org_hyperdex_client_Client__1destroy
  (JNIEnv *, jobject);

/*
 * Class:     org_hyperdex_client_Client
 * Method:    inner_loop
 * Signature: ()J
 */
JNIEXPORT HYPERDEX_API jlong JNICALL Java_org_hyperdex_client_Client_inner_1loop
  (JNIEnv *, jobject);

/*
 * Class:     org_hyperdex_client_Client
 * Method:    async_get
 * Signature: (Ljava/lang/String;Ljava/lang/Object;)Lorg/hyperdex/client/Deferred;
 */
JNIEXPORT HYPERDEX_API jobject JNICALL Java_org_hyperdex_client_Client_async_1get
  (JNIEnv *, jobject, jstring, jobject);

/*
 * Class:     org_hyperdex_client_Client
 * Method:    async_get_partial
 * Signature: (Ljava/lang/String;Ljava/lang/Object;Ljava/util/List;)Lorg/hyperdex/client/Deferred;
 */
JNIEXPORT HYPERDEX_API jobject JNICALL Java_org_hyperdex_client_Client_async_1get_1partial
  (JNIEnv *, jobject, jstring, jobject, jobject);

/*
 * Class:     org_hyperdex_client_Client
 * Method:    async_put
 * Signature: (Ljava/lang/String;Ljava/lang/Object;Ljava/util/Map;)Lorg/hyperdex/client/Deferred;
 */
JNIEXPORT HYPERDEX_API jobject JNICALL Java_org_hyperdex_client_Client_async_1put
  (JNIEnv *, jobject, jstring, jobject, jobject);

/*
 * Class:     org_hyperdex_client_Client
 * Method:    async_cond_put
 * Signature: (Ljava/lang/String;Ljava/lang/Object;Ljava/util/Map;Ljava/util/Map;)Lorg/hyperdex/client/Deferred;
 */
JNIEXPORT HYPERDEX_API jobject JNICALL Java_org_hyperdex_client_Client_async_1cond_1put
  (JNIEnv *, jobject, jstring, jobject, jobject, jobject);

/*
 * Class:     org_hyperdex_client_Client
 * Method:    async_put_if_not_exist
 * Signature: (Ljava/lang/String;Ljava/lang/Object;Ljava/util/Map;)Lorg/hyperdex/client/Deferred;
 */
JNIEXPORT HYPERDEX_API jobject JNICALL Java_org_hyperdex_client_Client_async_1put_1if_1not_1exist
  (JNIEnv *, jobject, jstring, jobject, jobject);

/*
 * Class:     org_hyperdex_client_Client
 * Method:    async_del
 * Signature: (Ljava/lang/String;Ljava/lang/Object;)Lorg/hyperdex/client/Deferred;
 */
JNIEXPORT HYPERDEX_API jobject JNICALL Java_org_hyperdex_client_Client_async_1del
  (JNIEnv *, jobject, jstring, jobject);

/*
 * Class:     org_hyperdex_client_Client
 * Method:    async_cond_del
 * Signature: (Ljava/lang/String;Ljava/lang/Object;Ljava/util/Map;)Lorg/hyperdex/client/Deferred;
 */
JNIEXPORT HYPERDEX_API jobject JNICALL Java_org_hyperdex_client_Client_async_1cond_1del
  (JNIEnv *, jobject, jstring, jobject, jobject);

/*
 * Class:     org_hyperdex_client_Client
 * Method:    async_atomic_add
 * Signature: (Ljava/lang/String;Ljava/lang/Object;Ljava/util/Map;)Lorg/hyperdex/client/Deferred;
 */
JNIEXPORT HYPERDEX_API jobject JNICALL Java_org_hyperdex_client_Client_async_1atomic_1add
  (JNIEnv *, jobject, jstring, jobject, jobject);

/*
 * Class:     org_hyperdex_client_Client
 * Method:    async_cond_atomic_add
 * Signature: (Ljava/lang/String;Ljava/lang/Object;Ljava/util/Map;Ljava/util/Map;)Lorg/hyperdex/client/Deferred;
 */
JNIEXPORT HYPERDEX_API jobject JNICALL Java_org_hyperdex_client_Client_async_1cond_1atomic_1add
  (JNIEnv *, jobject, jstring, jobject, jobject, jobject);

/*
 * Class:     org_hyperdex_client_Client
 * Method:    async_atomic_sub
 * Signature: (Ljava/lang/String;Ljava/lang/Object;Ljava/util/Map;)Lorg/hyperdex/client/Deferred;
 */
JNIEXPORT HYPERDEX_API jobject JNICALL Java_org_hyperdex_client_Client_async_1atomic_1sub
  (JNIEnv *, jobject, jstring, jobject, jobject);

/*
 * Class:     org_hyperdex_client_Client
 * Method:    async_cond_atomic_sub
 * Signature: (Ljava/lang/String;Ljava/lang/Object;Ljava/util/Map;Ljava/util/Map;)Lorg/hyperdex/client/Deferred;
 */
JNIEXPORT HYPERDEX_API jobject JNICALL Java_org_hyperdex_client_Client_async_1cond_1atomic_1sub
  (JNIEnv *, jobject, jstring, jobject, jobject, jobject);

/*
 * Class:     org_hyperdex_client_Client
 * Method:    async_atomic_mul
 * Signature: (Ljava/lang/String;Ljava/lang/Object;Ljava/util/Map;)Lorg/hyperdex/client/Deferred;
 */
JNIEXPORT HYPERDEX_API jobject JNICALL Java_org_hyperdex_client_Client_async_1atomic_1mul
  (JNIEnv *, jobject, jstring, jobject, jobject);

/*
 * Class:     org_hyperdex_client_Client
 * Method:    async_cond_atomic_mul
 * Signature: (Ljava/lang/String;Ljava/lang/Object;Ljava/util/Map;Ljava/util/Map;)Lorg/hyperdex/client/Deferred;
 */
JNIEXPORT HYPERDEX_API jobject JNICALL Java_org_hyperdex_client_Client_async_1cond_1atomic_1mul
  (JNIEnv *, jobject, jstring, jobject, jobject, jobject);

/*
 * Class:     org_hyperdex_client_Client
 * Method:    async_atomic_div
 * Signature: (Ljava/lang/String;Ljava/lang/Object;Ljava/util/Map;)Lorg/hyperdex/client/Deferred;
 */
JNIEXPORT HYPERDEX_API jobject JNICALL Java_org_hyperdex_client_Client_async_1atomic_1div
  (JNIEnv *, jobject, jstring, jobject, jobject);

/*
 * Class:     org_hyperdex_client_Client
 * Method:    async_cond_atomic_div
 * Signature: (Ljava/lang/String;Ljava/lang/Object;Ljava/util/Map;Ljava/util/Map;)Lorg/hyperdex/client/Deferred;
 */
JNIEXPORT HYPERDEX_API jobject JNICALL Java_org_hyperdex_client_Client_async_1cond_1atomic_1div
  (JNIEnv *, jobject, jstring, jobject, jobject, jobject);

/*
 * Class:     org_hyperdex_client_Client
 * Method:    async_atomic_mod
 * Signature: (Ljava/lang/String;Ljava/lang/Object;Ljava/util/Map;)Lorg/hyperdex/client/Deferred;
 */
JNIEXPORT HYPERDEX_API jobject JNICALL Java_org_hyperdex_client_Client_async_1atomic_1mod
  (JNIEnv *, jobject, jstring, jobject, jobject);

/*
 * Class:     org_hyperdex_client_Client
 * Method:    async_cond_atomic_mod
 * Signature: (Ljava/lang/String;Ljava/lang/Object;Ljava/util/Map;Ljava/util/Map;)Lorg/hyperdex/client/Deferred;
 */
JNIEXPORT HYPERDEX_API jobject JNICALL Java_org_hyperdex_client_Client_async_1cond_1atomic_1mod
  (JNIEnv *, jobject, jstring, jobject, jobject, jobject);

/*
 * Class:     org_hyperdex_client_Client
 * Method:    async_atomic_and
 * Signature: (Ljava/lang/String;Ljava/lang/Object;Ljava/util/Map;)Lorg/hyperdex/client/Deferred;
 */
JNIEXPORT HYPERDEX_API jobject JNICALL Java_org_hyperdex_client_Client_async_1atomic_1and
  (JNIEnv *, jobject, jstring, jobject, jobject);

/*
 * Class:     org_hyperdex_client_Client
 * Method:    async_cond_atomic_and
 * Signature: (Ljava/lang/String;Ljava/lang/Object;Ljava/util/Map;Ljava/util/Map;)Lorg/hyperdex/client/Deferred;
 */
JNIEXPORT HYPERDEX_API jobject JNICALL Java_org_hyperdex_client_Client_async_1cond_1atomic_1and
  (JNIEnv *, jobject, jstring, jobject, jobject, jobject);

/*
 * Class:     org_hyperdex_client_Client
 * Method:    async_atomic_or
 * Signature: (Ljava/lang/String;Ljava/lang/Object;Ljava/util/Map;)Lorg/hyperdex/client/Deferred;
 */
JNIEXPORT HYPERDEX_API jobject JNICALL Java_org_hyperdex_client_Client_async_1atomic_1or
  (JNIEnv *, jobject, jstring, jobject, jobject);

/*
 * Class:     org_hyperdex_client_Client
 * Method:    async_cond_atomic_or
 * Signature: (Ljava/lang/String;Ljava/lang/Object;Ljava/util/Map;Ljava/util/Map;)Lorg/hyperdex/client/Deferred;
 */
JNIEXPORT HYPERDEX_API jobject JNICALL Java_org_hyperdex_client_Client_async_1cond_1atomic_1or
  (JNIEnv *, jobject, jstring, jobject, jobject, jobject);

/*
 * Class:     org_hyperdex_client_Client
 * Method:    async_atomic_xor
 * Signature: (Ljava/lang/String;Ljava/lang/Object;Ljava/util/Map;)Lorg/hyperdex/client/Deferred;
 */
JNIEXPORT HYPERDEX_API jobject JNICALL Java_org_hyperdex_client_Client_async_1atomic_1xor
  (JNIEnv *, jobject, jstring, jobject, jobject);

/*
 * Class:     org_hyperdex_client_Client
 * Method:    async_cond_atomic_xor
 * Signature: (Ljava/lang/String;Ljava/lang/Object;Ljava/util/Map;Ljava/util/Map;)Lorg/hyperdex/client/Deferred;
 */
JNIEXPORT HYPERDEX_API jobject JNICALL Java_org_hyperdex_client_Client_async_1cond_1atomic_1xor
  (JNIEnv *, jobject, jstring, jobject, jobject, jobject);

/*
 * Class:     org_hyperdex_client_Client
 * Method:    async_atomic_min
 * Signature: (Ljava/lang/String;Ljava/lang/Object;Ljava/util/Map;)Lorg/hyperdex/client/Deferred;
 */
JNIEXPORT HYPERDEX_API jobject JNICALL Java_org_hyperdex_client_Client_async_1atomic_1min
  (JNIEnv *, jobject, jstring, jobject, jobject);

/*
 * Class:     org_hyperdex_client_Client
 * Method:    async_cond_atomic_min
 * Signature: (Ljava/lang/String;Ljava/lang/Object;Ljava/util/Map;Ljava/util/Map;)Lorg/hyperdex/client/Deferred;
 */
JNIEXPORT HYPERDEX_API jobject JNICALL Java_org_hyperdex_client_Client_async_1cond_1atomic_1min
  (JNIEnv *, jobject, jstring, jobject, jobject, jobject);

/*
 * Class:     org_hyperdex_client_Client
 * Method:    async_atomic_max
 * Signature: (Ljava/lang/String;Ljava/lang/Object;Ljava/util/Map;)Lorg/hyperdex/client/Deferred;
 */
JNIEXPORT HYPERDEX_API jobject JNICALL Java_org_hyperdex_client_Client_async_1atomic_1max
  (JNIEnv *, jobject, jstring, jobject, jobject);

/*
 * Class:     org_hyperdex_client_Client
 * Method:    async_cond_atomic_max
 * Signature: (Ljava/lang/String;Ljava/lang/Object;Ljava/util/Map;Ljava/util/Map;)Lorg/hyperdex/client/Deferred;
 */
JNIEXPORT HYPERDEX_API jobject JNICALL Java_org_hyperdex_client_Client_async_1cond_1atomic_1max
  (JNIEnv *, jobject, jstring, jobject, jobject, jobject);

/*
 * Class:     org_hyperdex_client_Client
 * Method:    async_string_prepend
 * Signature: (Ljava/lang/String;Ljava/lang/Object;Ljava/util/Map;)Lorg/hyperdex/client/Deferred;
 */
JNIEXPORT HYPERDEX_API jobject JNICALL Java_org_hyperdex_client_Client_async_1string_1prepend
  (JNIEnv *, jobject, jstring, jobject, jobject);

/*
 * Class:     org_hyperdex_client_Client
 * Method:    async_cond_string_prepend
 * Signature: (Ljava/lang/String;Ljava/lang/Object;Ljava/util/Map;Ljava/util/Map;)Lorg/hyperdex/client/Deferred;
 */
JNIEXPORT HYPERDEX_API jobject JNICALL Java_org_hyperdex_client_Client_async_1cond_1string_1prepend
  (JNIEnv *, jobject, jstring, jobject, jobject, jobject);

/*
 * Class:     org_hyperdex_client_Client
 * Method:    async_string_append
 * Signature: (Ljava/lang/String;Ljava/lang/Object;Ljava/util/Map;)Lorg/hyperdex/client/Deferred;
 */
JNIEXPORT HYPERDEX_API jobject JNICALL Java_org_hyperdex_client_Client_async_1string_1append
  (JNIEnv *, jobject, jstring, jobject, jobject);

/*
 * Class:     org_hyperdex_client_Client
 * Method:    async_cond_string_append
 * Signature: (Ljava/lang/String;Ljava/lang/Object;Ljava/util/Map;Ljava/util/Map;)Lorg/hyperdex/client/Deferred;
 */
JNIEXPORT HYPERDEX_API jobject JNICALL Java_org_hyperdex_client_Client_async_1cond_1string_1append
  (JNIEnv *, jobject, jstring, jobject, jobject, jobject);

/*
 * Class:     org_hyperdex_client_Client
 * Method:    async_list_lpush
 * Signature: (Ljava/lang/String;Ljava/lang/Object;Ljava/util/Map;)Lorg/hyperdex/client/Deferred;
 */
JNIEXPORT HYPERDEX_API jobject JNICALL Java_org_hyperdex_client_Client_async_1list_1lpush
  (JNIEnv *, jobject, jstring, jobject, jobject);

/*
 * Class:     org_hyperdex_client_Client
 * Method:    async_cond_list_lpush
 * Signature: (Ljava/lang/String;Ljava/lang/Object;Ljava/util/Map;Ljava/util/Map;)Lorg/hyperdex/client/Deferred;
 */
JNIEXPORT HYPERDEX_API jobject JNICALL Java_org_hyperdex_client_Client_async_1cond_1list_1lpush
  (JNIEnv *, jobject, jstring, jobject, jobject, jobject);

/*
 * Class:     org_hyperdex_client_Client
 * Method:    async_list_rpush
 * Signature: (Ljava/lang/String;Ljava/lang/Object;Ljava/util/Map;)Lorg/hyperdex/client/Deferred;
 */
JNIEXPORT HYPERDEX_API jobject JNICALL Java_org_hyperdex_client_Client_async_1list_1rpush
  (JNIEnv *, jobject, jstring, jobject, jobject);

/*
 * Class:     org_hyperdex_client_Client
 * Method:    async_cond_list_rpush
 * Signature: (Ljava/lang/String;Ljava/lang/Object;Ljava/util/Map;Ljava/util/Map;)Lorg/hyperdex/client/Deferred;
 */
JNIEXPORT HYPERDEX_API jobject JNICALL Java_org_hyperdex_client_Client_async_1cond_1list_1rpush
  (JNIEnv *, jobject, jstring, jobject, jobject, jobject);

/*
 * Class:     org_hyperdex_client_Client
 * Method:    async_set_add
 * Signature: (Ljava/lang/String;Ljava/lang/Object;Ljava/util/Map;)Lorg/hyperdex/client/Deferred;
 */
JNIEXPORT HYPERDEX_API jobject JNICALL Java_org_hyperdex_client_Client_async_1set_1add
  (JNIEnv *, jobject, jstring, jobject, jobject);

/*
 * Class:     org_hyperdex_client_Client
 * Method:    async_cond_set_add
 * Signature: (Ljava/lang/String;Ljava/lang/Object;Ljava/util/Map;Ljava/util/Map;)Lorg/hyperdex/client/Deferred;
 */
JNIEXPORT HYPERDEX_API jobject JNICALL Java_org_hyperdex_client_Client_async_1cond_1set_1add
  (JNIEnv *, jobject, jstring, jobject, jobject, jobject);

/*
 * Class:     org_hyperdex_client_Client
 * Method:    async_set_remove
 * Signature: (Ljava/lang/String;Ljava/lang/Object;Ljava/util/Map;)Lorg/hyperdex/client/Deferred;
 */
JNIEXPORT HYPERDEX_API jobject JNICALL Java_org_hyperdex_client_Client_async_1set_1remove
  (JNIEnv *, jobject, jstring, jobject, jobject);

/*
 * Class:     org_hyperdex_client_Client
 * Method:    async_cond_set_remove
 * Signature: (Ljava/lang/String;Ljava/lang/Object;Ljava/util/Map;Ljava/util/Map;)Lorg/hyperdex/client/Deferred;
 */
JNIEXPORT HYPERDEX_API jobject JNICALL Java_org_hyperdex_client_Client_async_1cond_1set_1remove
  (JNIEnv *, jobject, jstring, jobject, jobject, jobject);

/*
 * Class:     org_hyperdex_client_Client
 * Method:    async_set_intersect
 * Signature: (Ljava/lang/String;Ljava/lang/Object;Ljava/util/Map;)Lorg/hyperdex/client/Deferred;
 */
JNIEXPORT HYPERDEX_API jobject JNICALL Java_org_hyperdex_client_Client_async_1set_1intersect
  (JNIEnv *, jobject, jstring, jobject, jobject);

/*
 * Class:     org_hyperdex_client_Client
 * Method:    async_cond_set_intersect
 * Signature: (Ljava/lang/String;Ljava/lang/Object;Ljava/util/Map;Ljava/util/Map;)Lorg/hyperdex/client/Deferred;
 */
JNIEXPORT HYPERDEX_API jobject JNICALL Java_org_hyperdex_client_Client_async_1cond_1set_1intersect
  (JNIEnv *, jobject, jstring, jobject, jobject, jobject);

/*
 * Class:     org_hyperdex_client_Client
 * Method:    async_set_union
 * Signature: (Ljava/lang/String;Ljava/lang/Object;Ljava/util/Map;)Lorg/hyperdex/client/Deferred;
 */
JNIEXPORT HYPERDEX_API jobject JNICALL Java_org_hyperdex_client_Client_async_1set_1union
  (JNIEnv *, jobject, jstring, jobject, jobject);

/*
 * Class:     org_hyperdex_client_Client
 * Method:    async_cond_set_union
 * Signature: (Ljava/lang/String;Ljava/lang/Object;Ljava/util/Map;Ljava/util/Map;)Lorg/hyperdex/client/Deferred;
 */
JNIEXPORT HYPERDEX_API jobject JNICALL Java_org_hyperdex_client_Client_async_1cond_1set_1union
  (JNIEnv *, jobject, jstring, jobject, jobject, jobject);

/*
 * Class:     org_hyperdex_client_Client
 * Method:    async_map_add
 * Signature: (Ljava/lang/String;Ljava/lang/Object;Ljava/util/Map;)Lorg/hyperdex/client/Deferred;
 */
JNIEXPORT HYPERDEX_API jobject JNICALL Java_org_hyperdex_client_Client_async_1map_1add
  (JNIEnv *, jobject, jstring, jobject, jobject);

/*
 * Class:     org_hyperdex_client_Client
 * Method:    async_cond_map_add
 * Signature: (Ljava/lang/String;Ljava/lang/Object;Ljava/util/Map;Ljava/util/Map;)Lorg/hyperdex/client/Deferred;
 */
JNIEXPORT HYPERDEX_API jobject JNICALL Java_org_hyperdex_client_Client_async_1cond_1map_1add
  (JNIEnv *, jobject, jstring, jobject, jobject, jobject);

/*
 * Class:     org_hyperdex_client_Client
 * Method:    async_map_remove
 * Signature: (Ljava/lang/String;Ljava/lang/Object;Ljava/util/Map;)Lorg/hyperdex/client/Deferred;
 */
JNIEXPORT HYPERDEX_API jobject JNICALL Java_org_hyperdex_client_Client_async_1map_1remove
  (JNIEnv *, jobject, jstring, jobject, jobject);

/*
 * Class:     org_hyperdex_client_Client
 * Method:    async_cond_map_remove
 * Signature: (Ljava/lang/String;Ljava/lang/Object;Ljava/util/Map;Ljava/util/Map;)Lorg/hyperdex/client/Deferred;
 */
JNIEXPORT HYPERDEX_API jobject JNICALL Java_org_hyperdex_client_Client_async_1cond_1map_1remove
  (JNIEnv *, jobject, jstring, jobject, jobject, jobject);

/*
 * Class:     org_hyperdex_client_Client
 * Method:    async_document_atomic_sub
 * Signature: (Ljava/lang/String;Ljava/lang/Object;Ljava/lang/Object;)Lorg/hyperdex/client/Deferred;
 */
JNIEXPORT HYPERDEX_API jobject JNICALL Java_org_hyperdex_client_Client_async_1document_1atomic_1sub
  (JNIEnv *, jobject, jstring, jobject, jobject);

/*
 * Class:     org_hyperdex_client_Client
 * Method:    async_document_atomic_mul
 * Signature: (Ljava/lang/String;Ljava/lang/Object;Ljava/lang/Object;)Lorg/hyperdex/client/Deferred;
 */
JNIEXPORT HYPERDEX_API jobject JNICALL Java_org_hyperdex_client_Client_async_1document_1atomic_1mul
  (JNIEnv *, jobject, jstring, jobject, jobject);

/*
 * Class:     org_hyperdex_client_Client
 * Method:    async_document_atomic_div
 * Signature: (Ljava/lang/String;Ljava/lang/Object;Ljava/lang/Object;)Lorg/hyperdex/client/Deferred;
 */
JNIEXPORT HYPERDEX_API jobject JNICALL Java_org_hyperdex_client_Client_async_1document_1atomic_1div
  (JNIEnv *, jobject, jstring, jobject, jobject);

/*
 * Class:     org_hyperdex_client_Client
 * Method:    async_document_atomic_mod
 * Signature: (Ljava/lang/String;Ljava/lang/Object;Ljava/lang/Object;)Lorg/hyperdex/client/Deferred;
 */
JNIEXPORT HYPERDEX_API jobject JNICALL Java_org_hyperdex_client_Client_async_1document_1atomic_1mod
  (JNIEnv *, jobject, jstring, jobject, jobject);

/*
 * Class:     org_hyperdex_client_Client
 * Method:    async_document_atomic_xor
 * Signature: (Ljava/lang/String;Ljava/lang/Object;Ljava/lang/Object;)Lorg/hyperdex/client/Deferred;
 */
JNIEXPORT HYPERDEX_API jobject JNICALL Java_org_hyperdex_client_Client_async_1document_1atomic_1xor
  (JNIEnv *, jobject, jstring, jobject, jobject);

/*
 * Class:     org_hyperdex_client_Client
 * Method:    async_document_atomic_or
 * Signature: (Ljava/lang/String;Ljava/lang/Object;Ljava/lang/Object;)Lorg/hyperdex/client/Deferred;
 */
JNIEXPORT HYPERDEX_API jobject JNICALL Java_org_hyperdex_client_Client_async_1document_1atomic_1or
  (JNIEnv *, jobject, jstring, jobject, jobject);

/*
 * Class:     org_hyperdex_client_Client
 * Method:    async_document_atomic_min
 * Signature: (Ljava/lang/String;Ljava/lang/Object;Ljava/lang/Object;)Lorg/hyperdex/client/Deferred;
 */
JNIEXPORT HYPERDEX_API jobject JNICALL Java_org_hyperdex_client_Client_async_1document_1atomic_1min
  (JNIEnv *, jobject, jstring, jobject, jobject);

/*
 * Class:     org_hyperdex_client_Client
 * Method:    async_document_atomic_max
 * Signature: (Ljava/lang/String;Ljava/lang/Object;Ljava/lang/Object;)Lorg/hyperdex/client/Deferred;
 */
JNIEXPORT HYPERDEX_API jobject JNICALL Java_org_hyperdex_client_Client_async_1document_1atomic_1max
  (JNIEnv *, jobject, jstring, jobject, jobject);

/*
 * Class:     org_hyperdex_client_Client
 * Method:    async_document_string_prepend
 * Signature: (Ljava/lang/String;Ljava/lang/Object;Ljava/lang/Object;)Lorg/hyperdex/client/Deferred;
 */
JNIEXPORT HYPERDEX_API jobject JNICALL Java_org_hyperdex_client_Client_async_1document_1string_1prepend
  (JNIEnv *, jobject, jstring, jobject, jobject);

/*
 * Class:     org_hyperdex_client_Client
 * Method:    async_document_string_append
 * Signature: (Ljava/lang/String;Ljava/lang/Object;Ljava/lang/Object;)Lorg/hyperdex/client/Deferred;
 */
JNIEXPORT HYPERDEX_API jobject JNICALL Java_org_hyperdex_client_Client_async_1document_1string_1append
  (JNIEnv *, jobject, jstring, jobject, jobject);

/*
 * Class:     org_hyperdex_client_Client
 * Method:    async_document_rename
 * Signature: (Ljava/lang/String;Ljava/lang/Object;Ljava/lang/Object;)Lorg/hyperdex/client/Deferred;
 */
JNIEXPORT HYPERDEX_API jobject JNICALL Java_org_hyperdex_client_Client_async_1document_1rename
  (JNIEnv *, jobject, jstring, jobject, jobject);

/*
 * Class:     org_hyperdex_client_Client
 * Method:    async_document_unset
 * Signature: (Ljava/lang/String;Ljava/lang/Object;Ljava/lang/Object;)Lorg/hyperdex/client/Deferred;
 */
JNIEXPORT HYPERDEX_API jobject JNICALL Java_org_hyperdex_client_Client_async_1document_1unset
  (JNIEnv *, jobject, jstring, jobject, jobject);

/*
 * Class:     org_hyperdex_client_Client
 * Method:    async_map_atomic_add
 * Signature: (Ljava/lang/String;Ljava/lang/Object;Ljava/util/Map;)Lorg/hyperdex/client/Deferred;
 */
JNIEXPORT HYPERDEX_API jobject JNICALL Java_org_hyperdex_client_Client_async_1map_1atomic_1add
  (JNIEnv *, jobject, jstring, jobject, jobject);

/*
 * Class:     org_hyperdex_client_Client
 * Method:    async_cond_map_atomic_add
 * Signature: (Ljava/lang/String;Ljava/lang/Object;Ljava/util/Map;Ljava/util/Map;)Lorg/hyperdex/client/Deferred;
 */
JNIEXPORT HYPERDEX_API jobject JNICALL Java_org_hyperdex_client_Client_async_1cond_1map_1atomic_1add
  (JNIEnv *, jobject, jstring, jobject, jobject, jobject);

/*
 * Class:     org_hyperdex_client_Client
 * Method:    async_map_atomic_sub
 * Signature: (Ljava/lang/String;Ljava/lang/Object;Ljava/util/Map;)Lorg/hyperdex/client/Deferred;
 */
JNIEXPORT HYPERDEX_API jobject JNICALL Java_org_hyperdex_client_Client_async_1map_1atomic_1sub
  (JNIEnv *, jobject, jstring, jobject, jobject);

/*
 * Class:     org_hyperdex_client_Client
 * Method:    async_cond_map_atomic_sub
 * Signature: (Ljava/lang/String;Ljava/lang/Object;Ljava/util/Map;Ljava/util/Map;)Lorg/hyperdex/client/Deferred;
 */
JNIEXPORT HYPERDEX_API jobject JNICALL Java_org_hyperdex_client_Client_async_1cond_1map_1atomic_1sub
  (JNIEnv *, jobject, jstring, jobject, jobject, jobject);

/*
 * Class:     org_hyperdex_client_Client
 * Method:    async_map_atomic_mul
 * Signature: (Ljava/lang/String;Ljava/lang/Object;Ljava/util/Map;)Lorg/hyperdex/client/Deferred;
 */
JNIEXPORT HYPERDEX_API jobject JNICALL Java_org_hyperdex_client_Client_async_1map_1atomic_1mul
  (JNIEnv *, jobject, jstring, jobject, jobject);

/*
 * Class:     org_hyperdex_client_Client
 * Method:    async_cond_map_atomic_mul
 * Signature: (Ljava/lang/String;Ljava/lang/Object;Ljava/util/Map;Ljava/util/Map;)Lorg/hyperdex/client/Deferred;
 */
JNIEXPORT HYPERDEX_API jobject JNICALL Java_org_hyperdex_client_Client_async_1cond_1map_1atomic_1mul
  (JNIEnv *, jobject, jstring, jobject, jobject, jobject);

/*
 * Class:     org_hyperdex_client_Client
 * Method:    async_map_atomic_div
 * Signature: (Ljava/lang/String;Ljava/lang/Object;Ljava/util/Map;)Lorg/hyperdex/client/Deferred;
 */
JNIEXPORT HYPERDEX_API jobject JNICALL Java_org_hyperdex_client_Client_async_1map_1atomic_1div
  (JNIEnv *, jobject, jstring, jobject, jobject);

/*
 * Class:     org_hyperdex_client_Client
 * Method:    async_cond_map_atomic_div
 * Signature: (Ljava/lang/String;Ljava/lang/Object;Ljava/util/Map;Ljava/util/Map;)Lorg/hyperdex/client/Deferred;
 */
JNIEXPORT HYPERDEX_API jobject JNICALL Java_org_hyperdex_client_Client_async_1cond_1map_1atomic_1div
  (JNIEnv *, jobject, jstring, jobject, jobject, jobject);

/*
 * Class:     org_hyperdex_client_Client
 * Method:    async_map_atomic_mod
 * Signature: (Ljava/lang/String;Ljava/lang/Object;Ljava/util/Map;)Lorg/hyperdex/client/Deferred;
 */
JNIEXPORT HYPERDEX_API jobject JNICALL Java_org_hyperdex_client_Client_async_1map_1atomic_1mod
  (JNIEnv *, jobject, jstring, jobject, jobject);

/*
 * Class:     org_hyperdex_client_Client
 * Method:    async_cond_map_atomic_mod
 * Signature: (Ljava/lang/String;Ljava/lang/Object;Ljava/util/Map;Ljava/util/Map;)Lorg/hyperdex/client/Deferred;
 */
JNIEXPORT HYPERDEX_API jobject JNICALL Java_org_hyperdex_client_Client_async_1cond_1map_1atomic_1mod
  (JNIEnv *, jobject, jstring, jobject, jobject, jobject);

/*
 * Class:     org_hyperdex_client_Client
 * Method:    async_map_atomic_and
 * Signature: (Ljava/lang/String;Ljava/lang/Object;Ljava/util/Map;)Lorg/hyperdex/client/Deferred;
 */
JNIEXPORT HYPERDEX_API jobject JNICALL Java_org_hyperdex_client_Client_async_1map_1atomic_1and
  (JNIEnv *, jobject, jstring, jobject, jobject);

/*
 * Class:     org_hyperdex_client_Client
 * Method:    async_cond_map_atomic_and
 * Signature: (Ljava/lang/String;Ljava/lang/Object;Ljava/util/Map;Ljava/util/Map;)Lorg/hyperdex/client/Deferred;
 */
JNIEXPORT HYPERDEX_API jobject JNICALL Java_org_hyperdex_client_Client_async_1cond_1map_1atomic_1and
  (JNIEnv *, jobject, jstring, jobject, jobject, jobject);

/*
 * Class:     org_hyperdex_client_Client
 * Method:    async_map_atomic_or
 * Signature: (Ljava/lang/String;Ljava/lang/Object;Ljava/util/Map;)Lorg/hyperdex/client/Deferred;
 */
JNIEXPORT HYPERDEX_API jobject JNICALL Java_org_hyperdex_client_Client_async_1map_1atomic_1or
  (JNIEnv *, jobject, jstring, jobject, jobject);

/*
 * Class:     org_hyperdex_client_Client
 * Method:    async_cond_map_atomic_or
 * Signature: (Ljava/lang/String;Ljava/lang/Object;Ljava/util/Map;Ljava/util/Map;)Lorg/hyperdex/client/Deferred;
 */
JNIEXPORT HYPERDEX_API jobject JNICALL Java_org_hyperdex_client_Client_async_1cond_1map_1atomic_1or
  (JNIEnv *, jobject, jstring, jobject, jobject, jobject);

/*
 * Class:     org_hyperdex_client_Client
 * Method:    async_map_atomic_xor
 * Signature: (Ljava/lang/String;Ljava/lang/Object;Ljava/util/Map;)Lorg/hyperdex/client/Deferred;
 */
JNIEXPORT HYPERDEX_API jobject JNICALL Java_org_hyperdex_client_Client_async_1map_1atomic_1xor
  (JNIEnv *, jobject, jstring, jobject, jobject);

/*
 * Class:     org_hyperdex_client_Client
 * Method:    async_cond_map_atomic_xor
 * Signature: (Ljava/lang/String;Ljava/lang/Object;Ljava/util/Map;Ljava/util/Map;)Lorg/hyperdex/client/Deferred;
 */
JNIEXPORT HYPERDEX_API jobject JNICALL Java_org_hyperdex_client_Client_async_1cond_1map_1atomic_1xor
  (JNIEnv *, jobject, jstring, jobject, jobject, jobject);

/*
 * Class:     org_hyperdex_client_Client
 * Method:    async_map_string_prepend
 * Signature: (Ljava/lang/String;Ljava/lang/Object;Ljava/util/Map;)Lorg/hyperdex/client/Deferred;
 */
JNIEXPORT HYPERDEX_API jobject JNICALL Java_org_hyperdex_client_Client_async_1map_1string_1prepend
  (JNIEnv *, jobject, jstring, jobject, jobject);

/*
 * Class:     org_hyperdex_client_Client
 * Method:    async_cond_map_string_prepend
 * Signature: (Ljava/lang/String;Ljava/lang/Object;Ljava/util/Map;Ljava/util/Map;)Lorg/hyperdex/client/Deferred;
 */
JNIEXPORT HYPERDEX_API jobject JNICALL Java_org_hyperdex_client_Client_async_1cond_1map_1string_1prepend
  (JNIEnv *, jobject, jstring, jobject, jobject, jobject);

/*
 * Class:     org_hyperdex_client_Client
 * Method:    async_map_string_append
 * Signature: (Ljava/lang/String;Ljava/lang/Object;Ljava/util/Map;)Lorg/hyperdex/client/Deferred;
 */
JNIEXPORT HYPERDEX_API jobject JNICALL Java_org_hyperdex_client_Client_async_1map_1string_1append
  (JNIEnv *, jobject, jstring, jobject, jobject);

/*
 * Class:     org_hyperdex_client_Client
 * Method:    async_cond_map_string_append
 * Signature: (Ljava/lang/String;Ljava/lang/Object;Ljava/util/Map;Ljava/util/Map;)Lorg/hyperdex/client/Deferred;
 */
JNIEXPORT HYPERDEX_API jobject JNICALL Java_org_hyperdex_client_Client_async_1cond_1map_1string_1append
  (JNIEnv *, jobject, jstring, jobject, jobject, jobject);

/*
 * Class:     org_hyperdex_client_Client
 * Method:    async_map_atomic_min
 * Signature: (Ljava/lang/String;Ljava/lang/Object;Ljava/util/Map;)Lorg/hyperdex/client/Deferred;
 */
JNIEXPORT HYPERDEX_API jobject JNICALL Java_org_hyperdex_client_Client_async_1map_1atomic_1min
  (JNIEnv *, jobject, jstring, jobject, jobject);

/*
 * Class:     org_hyperdex_client_Client
 * Method:    async_cond_map_atomic_min
 * Signature: (Ljava/lang/String;Ljava/lang/Object;Ljava/util/Map;Ljava/util/Map;)Lorg/hyperdex/client/Deferred;
 */
JNIEXPORT HYPERDEX_API jobject JNICALL Java_org_hyperdex_client_Client_async_1cond_1map_1atomic_1min
  (JNIEnv *, jobject, jstring, jobject, jobject, jobject);

/*
 * Class:     org_hyperdex_client_Client
 * Method:    async_map_atomic_max
 * Signature: (Ljava/lang/String;Ljava/lang/Object;Ljava/util/Map;)Lorg/hyperdex/client/Deferred;
 */
JNIEXPORT HYPERDEX_API jobject JNICALL Java_org_hyperdex_client_Client_async_1map_1atomic_1max
  (JNIEnv *, jobject, jstring, jobject, jobject);

/*
 * Class:     org_hyperdex_client_Client
 * Method:    async_cond_map_atomic_max
 * Signature: (Ljava/lang/String;Ljava/lang/Object;Ljava/util/Map;Ljava/util/Map;)Lorg/hyperdex/client/Deferred;
 */
JNIEXPORT HYPERDEX_API jobject JNICALL Java_org_hyperdex_client_Client_async_1cond_1map_1atomic_1max
  (JNIEnv *, jobject, jstring, jobject, jobject, jobject);

/*
 * Class:     org_hyperdex_client_Client
 * Method:    search
 * Signature: (Ljava/lang/String;Ljava/util/Map;)Lorg/hyperdex/client/Iterator;
 */
JNIEXPORT HYPERDEX_API jobject JNICALL Java_org_hyperdex_client_Client_search
  (JNIEnv *, jobject, jstring, jobject);

/*
 * Class:     org_hyperdex_client_Client
 * Method:    async_search_describe
 * Signature: (Ljava/lang/String;Ljava/util/Map;)Lorg/hyperdex/client/Deferred;
 */
JNIEXPORT HYPERDEX_API jobject JNICALL Java_org_hyperdex_client_Client_async_1search_1describe
  (JNIEnv *, jobject, jstring, jobject);

/*
 * Class:     org_hyperdex_client_Client
 * Method:    sorted_search
 * Signature: (Ljava/lang/String;Ljava/util/Map;Ljava/lang/String;IZ)Lorg/hyperdex/client/Iterator;
 */
JNIEXPORT HYPERDEX_API jobject JNICALL Java_org_hyperdex_client_Client_sorted_1search
  (JNIEnv *, jobject, jstring, jobject, jstring, jint, jboolean);

/*
 * Class:     org_hyperdex_client_Client
 * Method:    async_group_del
 * Signature: (Ljava/lang/String;Ljava/util/Map;)Lorg/hyperdex/client/Deferred;
 */
JNIEXPORT HYPERDEX_API jobject JNICALL Java_org_hyperdex_client_Client_async_1group_1del
  (JNIEnv *, jobject, jstring, jobject);

/*
 * Class:     org_hyperdex_client_Client
 * Method:    async_count
 * Signature: (Ljava/lang/String;Ljava/util/Map;)Lorg/hyperdex/client/Deferred;
 */
JNIEXPORT HYPERDEX_API jobject JNICALL Java_org_hyperdex_client_Client_async_1count
  (JNIEnv *, jobject, jstring, jobject);

#ifdef __cplusplus
}
#endif
#endif
