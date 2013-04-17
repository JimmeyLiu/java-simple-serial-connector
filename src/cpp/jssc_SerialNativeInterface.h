/* jSSC (Java Simple Serial Connector) - serial port communication library.
 * � Alexey Sokolov (scream3r), 2010-2013.
 *
 * This file is part of jSSC.
 *
 * jSSC is free software: you can redistribute it and/or modify
 * it under the terms of the GNU Lesser General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * jSSC is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public License
 * along with jSSC.  If not, see <http://www.gnu.org/licenses/>.
 *
 * If you use jSSC in public project you can inform me about this by e-mail,
 * of course if you want it.
 *
 * e-mail: scream3r.org@gmail.com
 * web-site: http://scream3r.org | http://code.google.com/p/java-simple-serial-connector/
 */
/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class jssc_SerialNativeInterface */

#ifndef _Included_jssc_SerialNativeInterface
#define _Included_jssc_SerialNativeInterface
#ifdef __cplusplus
extern "C" {
#endif
#undef jssc_SerialNativeInterface_OS_LINUX
#define jssc_SerialNativeInterface_OS_LINUX 0L
#undef jssc_SerialNativeInterface_OS_WINDOWS
#define jssc_SerialNativeInterface_OS_WINDOWS 1L
#undef jssc_SerialNativeInterface_OS_SOLARIS
#define jssc_SerialNativeInterface_OS_SOLARIS 2L
#undef jssc_SerialNativeInterface_OS_MAC_OS_X
#define jssc_SerialNativeInterface_OS_MAC_OS_X 3L
/*
 * Class:     jssc_SerialNativeInterface
 * Method:    openPort
 * Signature: (Ljava/lang/String;ZZ)I
 */
JNIEXPORT jint JNICALL Java_jssc_SerialNativeInterface_openPort
  (JNIEnv *, jobject, jstring, jboolean, jboolean);

/*
 * Class:     jssc_SerialNativeInterface
 * Method:    setParams
 * Signature: (IIIIIZZ)Z
 */
JNIEXPORT jboolean JNICALL Java_jssc_SerialNativeInterface_setParams
  (JNIEnv *, jobject, jint, jint, jint, jint, jint, jboolean, jboolean);

/*
 * Class:     jssc_SerialNativeInterface
 * Method:    purgePort
 * Signature: (II)Z
 */
JNIEXPORT jboolean JNICALL Java_jssc_SerialNativeInterface_purgePort
  (JNIEnv *, jobject, jint, jint);

/*
 * Class:     jssc_SerialNativeInterface
 * Method:    closePort
 * Signature: (I)Z
 */
JNIEXPORT jboolean JNICALL Java_jssc_SerialNativeInterface_closePort
  (JNIEnv *, jobject, jint);

/*
 * Class:     jssc_SerialNativeInterface
 * Method:    setEventsMask
 * Signature: (II)Z
 */
JNIEXPORT jboolean JNICALL Java_jssc_SerialNativeInterface_setEventsMask
  (JNIEnv *, jobject, jint, jint);

/*
 * Class:     jssc_SerialNativeInterface
 * Method:    getEventsMask
 * Signature: (I)I
 */
JNIEXPORT jint JNICALL Java_jssc_SerialNativeInterface_getEventsMask
  (JNIEnv *, jobject, jint);

/*
 * Class:     jssc_SerialNativeInterface
 * Method:    waitEvents
 * Signature: (I)[[I
 */
JNIEXPORT jobjectArray JNICALL Java_jssc_SerialNativeInterface_waitEvents
  (JNIEnv *, jobject, jint);

/*
 * Class:     jssc_SerialNativeInterface
 * Method:    setRTS
 * Signature: (IZ)Z
 */
JNIEXPORT jboolean JNICALL Java_jssc_SerialNativeInterface_setRTS
  (JNIEnv *, jobject, jint, jboolean);

/*
 * Class:     jssc_SerialNativeInterface
 * Method:    setDTR
 * Signature: (IZ)Z
 */
JNIEXPORT jboolean JNICALL Java_jssc_SerialNativeInterface_setDTR
  (JNIEnv *, jobject, jint, jboolean);

/*
 * Class:     jssc_SerialNativeInterface
 * Method:    readBytes
 * Signature: (II)[B
 */
JNIEXPORT jbyteArray JNICALL Java_jssc_SerialNativeInterface_readBytes
  (JNIEnv *, jobject, jint, jint);

/*
 * Class:     jssc_SerialNativeInterface
 * Method:    writeBytes
 * Signature: (I[B)Z
 */
JNIEXPORT jboolean JNICALL Java_jssc_SerialNativeInterface_writeBytes
  (JNIEnv *, jobject, jint, jbyteArray);

/*
 * Class:     jssc_SerialNativeInterface
 * Method:    getBuffersBytesCount
 * Signature: (I)[I
 */
JNIEXPORT jintArray JNICALL Java_jssc_SerialNativeInterface_getBuffersBytesCount
  (JNIEnv *, jobject, jint);

/*
 * Class:     jssc_SerialNativeInterface
 * Method:    setFlowControlMode
 * Signature: (II)Z
 */
JNIEXPORT jboolean JNICALL Java_jssc_SerialNativeInterface_setFlowControlMode
  (JNIEnv *, jobject, jint, jint);

/*
 * Class:     jssc_SerialNativeInterface
 * Method:    getFlowControlMode
 * Signature: (I)I
 */
JNIEXPORT jint JNICALL Java_jssc_SerialNativeInterface_getFlowControlMode
  (JNIEnv *, jobject, jint);

/*
 * Class:     jssc_SerialNativeInterface
 * Method:    getSerialPortNames
 * Signature: ()[Ljava/lang/String;
 */
JNIEXPORT jobjectArray JNICALL Java_jssc_SerialNativeInterface_getSerialPortNames
  (JNIEnv *, jobject);

/*
 * Class:     jssc_SerialNativeInterface
 * Method:    getLinesStatus
 * Signature: (I)[I
 */
JNIEXPORT jintArray JNICALL Java_jssc_SerialNativeInterface_getLinesStatus
  (JNIEnv *, jobject, jint);

/*
 * Class:     jssc_SerialNativeInterface
 * Method:    sendBreak
 * Signature: (II)Z
 */
JNIEXPORT jboolean JNICALL Java_jssc_SerialNativeInterface_sendBreak
  (JNIEnv *, jobject, jint, jint);

#ifdef __cplusplus
}
#endif
#endif
