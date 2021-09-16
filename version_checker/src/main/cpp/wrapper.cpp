#include <jni.h>
#include <string>
#include "VersionChecker.h"

using std::string;

VersionChecker* getInstance(JNIEnv* env, jobject j_this) {
    static jclass j_class = env->GetObjectClass(j_this);
    static jfieldID fieldId = env->GetFieldID(j_class, "pointer", "J");
    long pointer = env->GetLongField(j_this, fieldId);
    if (!pointer) {
        pointer = (jlong)(new VersionChecker());
        env->SetLongField(j_this, fieldId, (jlong)pointer);
    }
    return (VersionChecker*)pointer;
}

extern "C" {

JNIEXPORT void JNICALL
Java_com_example_version_1checker_VersionChecker_delete(JNIEnv* env, jobject j_this) {
    jclass j_class = env->GetObjectClass(j_this);
    jfieldID fieldId = env->GetFieldID(j_class, "pointer", "J");
    long pointer = env->GetLongField(j_this, fieldId);
    if (!pointer) return;
    delete (VersionChecker*)pointer;
    env->SetLongField(j_this, fieldId, (jlong)0);
}

JNIEXPORT jstring JNICALL
Java_com_example_version_1checker_VersionChecker_getOpenCvVersion(
        JNIEnv* env, jobject j_this) {
    string version = getInstance(env, j_this)->GetOpenCvVersion();
    return env->NewStringUTF(version.c_str());
}

}
