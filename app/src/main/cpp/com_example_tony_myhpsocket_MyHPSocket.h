/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class com_example_tony_myhpsocket_MyHPSocket */

#ifndef _Included_com_example_tony_myhpsocket_MyHPSocket
#define _Included_com_example_tony_myhpsocket_MyHPSocket
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     com_example_tony_myhpsocket_MyHPSocket
 * Method:    version
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_com_example_tony_myhpsocket_MyHPSocket_version
  (JNIEnv *, jclass);

/*
 * Class:     com_example_tony_myhpsocket_MyHPSocket
 * Method:    connect
 * Signature: (Ljava/lang/String;I)I
 */
JNIEXPORT jint JNICALL Java_com_example_tony_myhpsocket_MyHPSocket_connect
  (JNIEnv *, jclass, jstring, jint);

/*
 * Class:     com_example_tony_myhpsocket_MyHPSocket
 * Method:    send
 * Signature: ([B)I
 */
JNIEXPORT jint JNICALL Java_com_example_tony_myhpsocket_MyHPSocket_send
  (JNIEnv *, jclass, jbyteArray);

/*
 * Class:     com_example_tony_myhpsocket_MyHPSocket
 * Method:    recv
 * Signature: ([B)I
 */
JNIEXPORT jint JNICALL Java_com_example_tony_myhpsocket_MyHPSocket_recv
  (JNIEnv *, jclass, jbyteArray);

/*
 * Class:     com_example_tony_myhpsocket_MyHPSocket
 * Method:    close
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_com_example_tony_myhpsocket_MyHPSocket_close
  (JNIEnv *, jclass);

#ifdef __cplusplus
}
#endif
#endif