###############################################################################
LOCAL_PATH := $(call my-dir)
include $(CLEAR_VARS)

LOCAL_C_INCLUDES :=
LOCAL_SRC_FILES := f.c a.c
LOCAL_MODULE := audio-server
LOCAL_SHARED_LIBS := libshared

include $(BUILD_EXECUTABLE)
###############################################################################
