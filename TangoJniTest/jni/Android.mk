LOCAL_PATH := $(call my-dir)


include $(CLEAR_VARS)
LOCAL_MODULE := libtangojnitest
#LOCAL_C_INCLUDES += $(JNI_H_INCLUDE) \
#					$(LOCAL_PATH)/include

LOCAL_SRC_FILES :=  src/jni1.c

LOCAL_LDLIBS := -llog

include $(BUILD_SHARED_LIBRARY)