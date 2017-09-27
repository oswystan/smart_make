#######################################################################
##                     Copyright (C) 2017 wystan
##
##       filename: binary
##    description:
##        created: 2017-09-27 11:12:30
##         author: wystan
##
#######################################################################

$(DIR_OUT)/objs/$(LOCAL_PATH)/%.o: LOCAL_C_FLAGS := $(LOCAL_C_FLAGS)
$(DIR_OUT)/objs/$(LOCAL_PATH)/%.o: $(LOCAL_PATH)/%.c
	$(compile-c-to-d)
	$(compile-c-to-o)
$(DIR_OUT)/objs/$(LOCAL_PATH)/%.o: $(LOCAL_PATH)/%.cpp
	$(compile-cpp-to-d)
	$(compile-cpp-to-o)

#######################################################################
