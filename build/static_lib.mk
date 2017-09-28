#######################################################################
##                     Copyright (C) 2017 wystan
##
##       filename: static_lib
##    description:
##        created: 2017-09-27 13:21:06
##         author: wystan
##
#######################################################################

LOCAL_OBJS := $(call gen-objs-from-src,$(LOCAL_SRC_FILES))
LOCAL_OUT_MODULE := $(DIR_OUT)/objs/$(LOCAL_PATH)/$(LOCAL_MODULE).a

$(LOCAL_OUT_MODULE): LOCAL_LD_FLAGS := $(LOCAL_LD_FLAGS)
$(LOCAL_OUT_MODULE): $(LOCAL_OBJS)
	$(transform-o-to-static-lib)

-include $(LOCAL_OBJS:.o=.d)

include build/binary.mk
ALL_STATIC_LIBS += $(LOCAL_OUT_MODULE)

#######################################################################
