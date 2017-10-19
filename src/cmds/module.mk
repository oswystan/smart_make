###############################################################################

LOCAL_PATH := $(call my-dir)
include $(CLEAR_VARS)

LOCAL_C_INCLUDES :=
LOCAL_SRC_FILES := f.c a.c
LOCAL_MODULE := media-server
LOCAL_SHARED_LIBS := libshared
LOCAL_C_FLAGS := -static

include $(BUILD_EXECUTABLE)

include $(call all-subdir-makefiles-under,$(LOCAL_PATH))
###############################################################################
