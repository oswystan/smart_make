###############################################################################

LOCAL_PATH := $(call my-dir)
include $(CLEAR_VARS)

LOCAL_C_INCLUDES :=
LOCAL_SRC_FILES := f.c a.c
LOCAL_MODULE := libstatic

include $(BUILD_STATIC_LIBRARY)

###############################################################################
