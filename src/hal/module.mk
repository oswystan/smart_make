###############################################################################

LOCAL_PATH := $(call my-dir)
include $(CLEAR_VARS)

LOCAL_C_INCLUDES += $(ROOT_DIR)/include/hal
LOCAL_SRC_FILES := $(patsubst $(LOCAL_PATH)/%,%,$(shell find $(LOCAL_PATH) -name *.c))
LOCAL_MODULE := libhal

include $(BUILD_STATIC_LIBRARY)

###############################################################################
