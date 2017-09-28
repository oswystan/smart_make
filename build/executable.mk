#######################################################################
##                     Copyright (C) 2017 wystan
##
##       filename: executable
##    description:
##        created: 2017-09-26 22:44:48
##         author: wystan
##
#######################################################################

LOCAL_OBJS := $(call gen-objs-from-src,$(LOCAL_SRC_FILES))
LOCAL_OUT_MODULE := $(DIR_OUT)/objs/$(LOCAL_PATH)/$(LOCAL_MODULE)
LOCAL_INSTALLED_MODULE := $(gen-installed-executable)

$(LOCAL_INSTALLED_MODULE):$(LOCAL_OUT_MODULE)
	$(transform-to-stripped)

$(LOCAL_OUT_MODULE): LOCAL_LD_FLAGS := $(LOCAL_LD_FLAGS)
$(LOCAL_OUT_MODULE): $(LOCAL_OBJS) $(call gen-objs-from-shared-lib)
	$(transform-o-to-executable)
-include $(LOCAL_OBJS:.o=.d)

include build/binary.mk
ALL_EXECUTABLES += $(LOCAL_INSTALLED_MODULE)

#######################################################################
