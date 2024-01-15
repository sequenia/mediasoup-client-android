#include "mediasoupclient.hpp"
#include <jni.h>

#include <modules/utility/include/jvm_android.h>
#include <sdk/android/native_api/jni/class_loader.h>
#include "sdk/android/src/jni/jni_helpers.h"

namespace mediasoupclient {

    extern "C" jint JNIEXPORT JNICALL JNI_OnLoad(JavaVM *jvm, void *reserved) {
        jint ret = webrtc::jni::InitGlobalJniVariables(jvm);
        if (ret < 0)
            return -1;

        mediasoupclient::Initialize();
        webrtc::InitClassLoader(webrtc::jni::GetEnv());
        return JNI_VERSION_1_6;
    }

    extern "C" void JNIEXPORT JNICALL JNI_OnUnLoad(JavaVM *jvm, void *reserved) {
        mediasoupclient::Cleanup();
    }

}  // namespace mediasoupclient