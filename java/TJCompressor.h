/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class TJCompressor */

#ifndef _Included_TJCompressor
#define _Included_TJCompressor
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     TJCompressor
 * Method:    init
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_TJCompressor_init
  (JNIEnv *, jobject);

/*
 * Class:     TJCompressor
 * Method:    destroy
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_TJCompressor_destroy
  (JNIEnv *, jobject);

/*
 * Class:     TJCompressor
 * Method:    compress
 * Signature: ([BIIII[BIII)J
 */
JNIEXPORT jlong JNICALL Java_TJCompressor_compress
  (JNIEnv *, jobject, jbyteArray, jint, jint, jint, jint, jbyteArray, jint, jint, jint);

#ifdef __cplusplus
}
#endif
#endif
