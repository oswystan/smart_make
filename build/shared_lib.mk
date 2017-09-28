#######################################################################
##                     Copyright (C) 2017 wystan
##
##       filename: shared_lib
##    description:
##        created: 2017-09-27 13:09:43
##         author: wystan
##
#######################################################################

LOCAL_OBJS := $(call gen-objs-from-src,$(LOCAL_SRC_FILES))
LOCAL_OUT_MODULE := $(DIR_OUT)/objs/$(LOCAL_PATH)/$(LOCAL_MODULE).so
LOCAL_INSTALLED_MODULE := $(gen-installed-shared-lib)
LOCAL_C_FLAGS += $(call gen-c-includes,$(LOCAL_C_INCLUDES))
LOCAL_C_FLAGS += -fPIC

$(LOCAL_INSTALLED_MODULE):$(LOCAL_OUT_MODULE)
	$(transform-to-stripped)

$(LOCAL_OUT_MODULE): LOCAL_LD_FLAGS := $(LOCAL_LD_FLAGS)
$(LOCAL_OUT_MODULE): $(LOCAL_OBJS)
	$(transform-o-to-shared-lib)

-include $(LOCAL_OBJS:.o=.d)

include build/binary.mk
ALL_SHARED_LIBS += $(LOCAL_INSTALLED_MODULE)


#######################################################################
