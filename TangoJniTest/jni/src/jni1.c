#include <stdio.h>
#include <jni.h>
#include <android/log.h>


#define LOGE(...) __android_log_print(ANDROID_LOG_ERROR,"tangojnitest", __VA_ARGS__)
#define LOGI(...) __android_log_print(ANDROID_LOG_INFO,"tangojnitest",__VA_ARGS__);
#define	LOGW(...) __android_log_print(ANDROID_LOG_WARN,"tangojnitest",__VA_ARGS__);

int Java_com_yls_tango_test_MainActivity_nativeAdd(JNIEnv *env,jobject thiz,int a,int b){
	LOGI("native add: a = %d,b = %d\n",a,b);
	return a+b+1;
}
int Java_com_yls_tango_test_MainActivity_nativeWrite(JNIEnv *env,jobject thiz,jbyteArray data){
	LOGI("native write data:%s\n",data);
	jbyte * elements = (* env)->GetByteArrayElements(env,data,NULL);
	LOGI("native write elements:%s\n",elements);
	return 0;
}