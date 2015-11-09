#include <stdio.h>
#include "jni.h"
int Java_com_yls_tango_test_MainActivity_nativeAdd(JNIEnv *env,jobject thiz,int a,int b){
	return a+b+1;
}