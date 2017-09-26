#######################################################################
##                     Copyright (C) 2017 wystan
##
##       filename: executable
##    description: 
##        created: 2017-09-26 22:44:48
##         author: wystan
## 
#######################################################################

LOCAL_OBJS := $(LOCAL_SRC_FILES:.c=.o)
#LOCAL_OBJS := $(LOCAL_OBJS:.cpp=.o)
LOCAL_OBJS := $(addprefix $(DIR_OUT)/objs/$(LOCAL_PATH)/,$(LOCAL_OBJS))

LOCAL_OUT_MODULE := $(DIR_OUT)/bin/$(LOCAL_MODULE)

$(LOCAL_OUT_MODULE): LOCAL_LD_FLAGS := $(LOCAL_LD_FLAGS)
$(LOCAL_OUT_MODULE): $(LOCAL_OBJS)
	$(transform-o-to-executable)

$(DIR_OUT)/objs/$(LOCAL_PATH)/%.o: LOCAL_C_FLAGS := $(LOCAL_C_FLAGS)
$(DIR_OUT)/objs/$(LOCAL_PATH)/%.o: $(LOCAL_PATH)/%.c
	$(compile-c-to-d)
	$(compile-c-to-o)

ALL_EXECUTABLES += $(LOCAL_OUT_MODULE)

#######################################################################
