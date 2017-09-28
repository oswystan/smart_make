###############################################################################

LOCAL_PATH := $(call my-dir)
include $(CLEAR_VARS)

LOCAL_C_INCLUDES := inc/common
LOCAL_SRC_FILES := f.c a.c
LOCAL_MODULE := libshared
LOCAL_LD_FLAGS := -lpthread
LOCAL_SHARED_LIBS := cpp/libcpp_shared

include $(BUILD_SHARED_LIBRARY)

###############################################################################
