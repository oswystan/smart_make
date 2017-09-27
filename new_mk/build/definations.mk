#######################################################################
##                     Copyright (C) 2017 wystan
##
##       filename: definations
##    description:
##        created: 2017-09-23 11:26:56
##         author: wystan
##
#######################################################################
define my-dir
$(strip \
  $(eval LOCAL_MODULE_MAKEFILE := $$(lastword $$(MAKEFILE_LIST))) \
  $(if $(filter $(CLEAR_VARS),$(LOCAL_MODULE_MAKEFILE)), \
    $(error LOCAL_PATH must be set before including $$(CLEAR_VARS)) \
   , \
    $(patsubst %/,%,$(dir $(LOCAL_MODULE_MAKEFILE))) \
   ) \
 )
endef

define gen-objs-from-src
$(eval LOCAL_TMP_VAR:= $(1:.c=.o)) \
$(eval LOCAL_TMP_VAR := $(LOCAL_TMP_VAR:.cpp=.o)) \
$(addprefix $(DIR_OUT)/objs/$(LOCAL_PATH)/,$(LOCAL_TMP_VAR))
endef

define gen-installed-executable
$(if $(LOCAL_INSTALL_DIR),\
$(DIR_OUT)/install/bin/$(LOCAL_INSTALL_DIR)/$(LOCAL_MODULE),\
$(DIR_OUT)/install/bin/$(LOCAL_MODULE))
endef

define gen-installed-shared-lib
$(if $(LOCAL_INSTALL_DIR),\
$(DIR_OUT)/install/lib/$(LOCAL_INSTALL_DIR)/$(LOCAL_MODULE).so,\
$(DIR_OUT)/install/lib/$(LOCAL_MODULE).so)
endef

define compile-c-to-o
	$(H) echo "[ cc]" $<
	$(H) $(CC) -c $(GLOBAL_C_FLAGS) $(LOCAL_C_FLAGS) $< -o $@
endef

define compile-c-to-d
	$(H) $(MKDIR) $(dir $@)
	$(H) $(CC) -MM -MF $(subst .o,.d,$@) -MP -MT $@ $(GLOBAL_C_FLAGS) $(LOCAL_C_FLAGS) $<
endef

define compile-cpp-to-o
	$(H) echo "[cpp]" $<
	$(H) $(CPP) -c $(GLOBAL_C_FLAGS) $(LOCAL_C_FLAGS) $< -o $@
endef

define compile-cpp-to-d
	$(H) $(MKDIR) $(dir $@)
	$(H) $(CPP) -MM -MF $(subst .o,.d,$@) -MP -MT $@ $(GLOBAL_C_FLAGS) $(LOCAL_C_FLAGS) $<
endef

define transform-o-to-static-lib
	$(H) echo "[gen]" $@
	$(H) $(MKDIR) $(dir $@)
	$(H) $(RM) $@
	$(H) $(AR) -r $@ $^ 2>/dev/null
endef

define transform-o-to-shared-lib
	$(H) echo "[gen]" $@
	$(H) $(MKDIR) $(dir $@)
	$(H) $(CPP) $(GLOBAL_LD_FLAGS) $(LOCAL_LD_FLAGS) -shared $^ -o $@
endef

define transform-o-to-executable
	$(H) echo "[gen]" $@
	$(H) $(MKDIR) $(dir $@)
	$(H) $(CC) $(GLOBAL_LD_FLAGS) $(LOCAL_LD_FLAGS) $^ -o $@
endef

define transform-to-stripped
	$(H) echo "[ins] $@"
	$(H) $(MKDIR) $(dir $@)
	$(H) $(STRIP) $< -o $@
endef

#######################################################################
