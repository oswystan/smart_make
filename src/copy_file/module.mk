###############################################################################

LOCAL_PATH := $(call my-dir)
include $(CLEAR_VARS)

LOCAL_SRC_FILES := mod.cfg:ins_mod.cfg
LOCAL_INSTALL_DIR := etc

include $(BUILD_COPY_FILE)

###############################################################################
