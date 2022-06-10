// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.


// This file is autogenerated by
//     base/android/jni_generator/jni_generator.py
// For
//     org/mediasoup/droid/Transport

#ifndef org_mediasoup_droid_Transport_JNI
#define org_mediasoup_droid_Transport_JNI

#include <jni.h>

#include "../include/jni_generator_helper.h"


// Step 1: Forward declarations.

JNI_REGISTRATION_EXPORT extern const char kClassPath_org_mediasoup_droid_Transport[];
const char kClassPath_org_mediasoup_droid_Transport[] = "org/mediasoup/droid/Transport";

JNI_REGISTRATION_EXPORT extern const char kClassPath_org_mediasoup_droid_Transport_00024Listener[];
const char kClassPath_org_mediasoup_droid_Transport_00024Listener[] =
    "org/mediasoup/droid/Transport$Listener";
// Leaking this jclass as we cannot use LazyInstance from some threads.
JNI_REGISTRATION_EXPORT std::atomic<jclass> g_org_mediasoup_droid_Transport_clazz(nullptr);
#ifndef org_mediasoup_droid_Transport_clazz_defined
#define org_mediasoup_droid_Transport_clazz_defined
inline jclass org_mediasoup_droid_Transport_clazz(JNIEnv* env) {
  return base::android::LazyGetClass(env, kClassPath_org_mediasoup_droid_Transport,
      &g_org_mediasoup_droid_Transport_clazz);
}
#endif
// Leaking this jclass as we cannot use LazyInstance from some threads.
JNI_REGISTRATION_EXPORT std::atomic<jclass>
    g_org_mediasoup_droid_Transport_00024Listener_clazz(nullptr);
#ifndef org_mediasoup_droid_Transport_00024Listener_clazz_defined
#define org_mediasoup_droid_Transport_00024Listener_clazz_defined
inline jclass org_mediasoup_droid_Transport_00024Listener_clazz(JNIEnv* env) {
  return base::android::LazyGetClass(env, kClassPath_org_mediasoup_droid_Transport_00024Listener,
      &g_org_mediasoup_droid_Transport_00024Listener_clazz);
}
#endif


// Step 2: Constants (optional).


// Step 3: Method stubs.
namespace mediasoupclient {

static base::android::ScopedJavaLocalRef<jstring> JNI_Transport_GetId(JNIEnv* env, const
    base::android::JavaParamRef<jobject>& jcaller);

JNI_GENERATOR_EXPORT jstring Java_org_mediasoup_droid_Transport_nativeGetId(
    JNIEnv* env,
    jobject jcaller) {
  return JNI_Transport_GetId(env, base::android::JavaParamRef<jobject>(env, jcaller)).Release();
}

static base::android::ScopedJavaLocalRef<jstring> JNI_Transport_GetConnectionState(JNIEnv* env,
    const base::android::JavaParamRef<jobject>& jcaller);

JNI_GENERATOR_EXPORT jstring Java_org_mediasoup_droid_Transport_nativeGetConnectionState(
    JNIEnv* env,
    jobject jcaller) {
  return JNI_Transport_GetConnectionState(env, base::android::JavaParamRef<jobject>(env,
      jcaller)).Release();
}

static base::android::ScopedJavaLocalRef<jstring> JNI_Transport_GetAppData(JNIEnv* env, const
    base::android::JavaParamRef<jobject>& jcaller);

JNI_GENERATOR_EXPORT jstring Java_org_mediasoup_droid_Transport_nativeGetAppData(
    JNIEnv* env,
    jobject jcaller) {
  return JNI_Transport_GetAppData(env, base::android::JavaParamRef<jobject>(env,
      jcaller)).Release();
}

static base::android::ScopedJavaLocalRef<jstring> JNI_Transport_GetStats(JNIEnv* env, const
    base::android::JavaParamRef<jobject>& jcaller);

JNI_GENERATOR_EXPORT jstring Java_org_mediasoup_droid_Transport_nativeGetStats(
    JNIEnv* env,
    jobject jcaller) {
  return JNI_Transport_GetStats(env, base::android::JavaParamRef<jobject>(env, jcaller)).Release();
}

static jboolean JNI_Transport_IsClosed(JNIEnv* env, const base::android::JavaParamRef<jobject>&
    jcaller);

JNI_GENERATOR_EXPORT jboolean Java_org_mediasoup_droid_Transport_nativeIsClosed(
    JNIEnv* env,
    jobject jcaller) {
  return JNI_Transport_IsClosed(env, base::android::JavaParamRef<jobject>(env, jcaller));
}

static void JNI_Transport_RestartIce(JNIEnv* env, const base::android::JavaParamRef<jobject>&
    jcaller,
    const base::android::JavaParamRef<jstring>& iceParameters);

JNI_GENERATOR_EXPORT void Java_org_mediasoup_droid_Transport_nativeRestartIce(
    JNIEnv* env,
    jobject jcaller,
    jstring iceParameters) {
  return JNI_Transport_RestartIce(env, base::android::JavaParamRef<jobject>(env, jcaller),
      base::android::JavaParamRef<jstring>(env, iceParameters));
}

static void JNI_Transport_UpdateIceServers(JNIEnv* env, const base::android::JavaParamRef<jobject>&
    jcaller,
    const base::android::JavaParamRef<jstring>& iceServers);

JNI_GENERATOR_EXPORT void Java_org_mediasoup_droid_Transport_nativeUpdateIceServers(
    JNIEnv* env,
    jobject jcaller,
    jstring iceServersDescription) {
  return JNI_Transport_UpdateIceServers(env, base::android::JavaParamRef<jobject>(env, jcaller),
      base::android::JavaParamRef<jstring>(env, iceServersDescription));
}

static void JNI_Transport_Close(JNIEnv* env, const base::android::JavaParamRef<jobject>& jcaller);

JNI_GENERATOR_EXPORT void Java_org_mediasoup_droid_Transport_nativeClose(
    JNIEnv* env,
    jobject jcaller) {
  return JNI_Transport_Close(env, base::android::JavaParamRef<jobject>(env, jcaller));
}


static std::atomic<jmethodID> g_org_mediasoup_droid_Transport_getNativeTransport(nullptr);
static jlong Java_Transport_getNativeTransport(JNIEnv* env, const base::android::JavaRef<jobject>&
    obj) {
  jclass clazz = org_mediasoup_droid_Transport_clazz(env);
  CHECK_CLAZZ(env, obj.obj(),
      org_mediasoup_droid_Transport_clazz(env), 0);

  jni_generator::JniJavaCallContextChecked call_context;
  call_context.Init<
      base::android::MethodID::TYPE_INSTANCE>(
          env,
          clazz,
          "getNativeTransport",
          "()J",
          &g_org_mediasoup_droid_Transport_getNativeTransport);

  jlong ret =
      env->CallLongMethod(obj.obj(),
          call_context.base.method_id);
  return ret;
}

static std::atomic<jmethodID> g_org_mediasoup_droid_Transport_00024Listener_onConnect(nullptr);
static void Java_Listener_onConnect(JNIEnv* env, const base::android::JavaRef<jobject>& obj, const
    base::android::JavaRef<jobject>& transport,
    const base::android::JavaRef<jstring>& dtlsParameters) {
  jclass clazz = org_mediasoup_droid_Transport_00024Listener_clazz(env);
  CHECK_CLAZZ(env, obj.obj(),
      org_mediasoup_droid_Transport_00024Listener_clazz(env));

  jni_generator::JniJavaCallContextChecked call_context;
  call_context.Init<
      base::android::MethodID::TYPE_INSTANCE>(
          env,
          clazz,
          "onConnect",
          "(Lorg/mediasoup/droid/Transport;Ljava/lang/String;)V",
          &g_org_mediasoup_droid_Transport_00024Listener_onConnect);

     env->CallVoidMethod(obj.obj(),
          call_context.base.method_id, transport.obj(), dtlsParameters.obj());
}

static std::atomic<jmethodID>
    g_org_mediasoup_droid_Transport_00024Listener_onConnectionStateChange(nullptr);
static void Java_Listener_onConnectionStateChange(JNIEnv* env, const
    base::android::JavaRef<jobject>& obj, const base::android::JavaRef<jobject>& transport,
    const base::android::JavaRef<jstring>& connectionState) {
  jclass clazz = org_mediasoup_droid_Transport_00024Listener_clazz(env);
  CHECK_CLAZZ(env, obj.obj(),
      org_mediasoup_droid_Transport_00024Listener_clazz(env));

  jni_generator::JniJavaCallContextChecked call_context;
  call_context.Init<
      base::android::MethodID::TYPE_INSTANCE>(
          env,
          clazz,
          "onConnectionStateChange",
          "(Lorg/mediasoup/droid/Transport;Ljava/lang/String;)V",
          &g_org_mediasoup_droid_Transport_00024Listener_onConnectionStateChange);

     env->CallVoidMethod(obj.obj(),
          call_context.base.method_id, transport.obj(), connectionState.obj());
}

}  // namespace mediasoupclient

#endif  // org_mediasoup_droid_Transport_JNI
