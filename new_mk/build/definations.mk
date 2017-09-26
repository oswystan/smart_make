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

define compile-c-to-o
	$(H) echo "[ cc]" $<
	$(H) $(CC) -c $(LOCAL_C_FLAGS) $(GLOBAL_C_FLAGS) $< -o $@
endef

define compile-c-to-d
	$(H) $(MKDIR) $(dir $@)
	$(H) $(CC) -MM -MF $(subst .o,.d,$@) -MP -MT $@ $(LOCAL_C_FLAGS) $(GLOBAL_C_FLAGS) $<
endef

define compile-cpp-to-o
endef

define compile-cpp-to-d
endef

define transform-o-to-static-lib
endef

define transform-o-to-shared-lib
endef

define transform-o-to-executable
	$(H) echo "[gen]" $@
	$(H) $(MKDIR) $(dir $@)
	$(H) $(CC) $(LOCAL_LD_FLAGS) $^ -o $@
	$(H) $(STRIP) $@
endef

define transform-to-stripped
endef

#######################################################################
