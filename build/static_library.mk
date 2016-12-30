################################################################################

LOCAL_OUT_DIR := $(TARGET_OUT_DIR)/$(LOCAL_PATH)
LOCAL_OUT_TARGET := $(LOCAL_OUT_DIR)/$(LOCAL_MODULE).a
LOCAL_OBJS := $(patsubst %.c,%.o,$(LOCAL_SRC_FILES))
LOCAL_OBJS := $(addprefix $(LOCAL_OUT_DIR)/,$(LOCAL_OBJS))
LOCAL_C_INCLUDES += $(ROOT_DIR)/include
LOCAL_DEP := $(patsubst %.o,%.d,$(LOCAL_OBJS))

-include $(LOCAL_DEP)

$(LOCAL_OUT_TARGET):$(LOCAL_OBJS)
	$(HIDE) $(AR) r $@ $^ >/dev/null 2>&1

$(LOCAL_OUT_DIR)/%.o:LOCAL_INCLUDES:=$(addprefix -I,$(LOCAL_C_INCLUDES))
$(LOCAL_OUT_DIR)/%.o:$(LOCAL_PATH)/%.c
	$(HIDE) $(MKDIR) $(dir $@)
	$(HIDE) echo "CC $<"
	$(HIDE) $(CC) -MM -MF $(subst .o,.d,$@) -MP -MT $@ $(LOCAL_INCLUDES) $(CFLAGS) $<
	$(HIDE) $(CC) -c $(LOCAL_INCLUDES) $(LOCAL_C_FLAGS) $< -o $@

TARGET_LIBS += $(LOCAL_OUT_TARGET)

################################################################################
