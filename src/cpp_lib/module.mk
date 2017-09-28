###############################################################################

LOCAL_PATH := $(call my-dir)
include $(CLEAR_VARS)

LOCAL_C_INCLUDES :=
LOCAL_SRC_FILES := a.cpp
LOCAL_MODULE := libcpp_shared
LOCAL_INSTALL_DIR := cpp

include $(BUILD_SHARED_LIBRARY)

###############################################################################
