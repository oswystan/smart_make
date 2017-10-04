#######################################################################
##                     Copyright (C) 2017 wystan
##
##       filename: definations
##    description:
##        created: 2017-09-23 11:26:56
##         author: wystan
##
#######################################################################

CC    := gcc
CPP   := g++
RM    := rm -rf
CP    := cp
AR    := ar
MKDIR := mkdir -p
MKPKG := tar jcf
STRIP := $(if $(filter Darwin,$(shell uname -s)),strip -u -r,strip)
H     := $(if $(filter 1,$V),,@)

CLEAR_VARS           := build/clear_vars.mk
BUILD_STATIC_LIBRARY := build/static_lib.mk
BUILD_SHARED_LIBRARY := build/shared_lib.mk
BUILD_EXECUTABLE     := build/executable.mk
BUILD_COPY_FILE      := build/copy_file.mk

DIR_ROOT        := $(PWD)
DIR_OUT         := out
GLOBAL_C_FLAGS  := -Wall -Werror -g -I inc
GLOBAL_LD_FLAGS :=

ALL_EXECUTABLES :=
ALL_STATIC_LIBS :=
ALL_SHARED_LIBS :=
ALL_COPY_FILES  :=

##########################################
## porting from android to get current dir
##########################################
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

#####################################################
## get git version like: master-xxxx
#####################################################
define git-branch-version
$(shell git branch|grep '*'|cut -d' ' -f2)-$(shell git rev-parse --short HEAD)
endef

#####################################################
## make xxxx.tar.bz2 for install package
#####################################################
define mk-pkg-with-version
	$(H) pkg_name=$(call git-branch-version).tar.bz2 && \
		echo "[mkpkg]" $$pkg_name && \
		cd $(DIR_OUT) && \
		$(RM) $$pkg_name && \
		$(MKPKG) $$pkg_name install && \
		cd $(DIR_ROUT)
endef

define mk-one-dir
$(1):
	@echo "[mkdir]" $$@
	@mkdir -p $$@
endef

#####################################################
## $(eval $(call mk-dirs,a b c d))
#####################################################
define mk-dirs
$(foreach d,$(1),\
	$(eval $(call mk-one-dir,$(d)))	\
)
endef

##########################################
## substr .cpp or .c by .o
##########################################
define gen-objs-from-src
$(eval LOCAL_TMP_VAR:= $(1:.c=.o)) \
$(eval LOCAL_TMP_VAR := $(LOCAL_TMP_VAR:.cpp=.o)) \
$(addprefix $(DIR_OUT)/objs/$(LOCAL_PATH)/,$(LOCAL_TMP_VAR))
endef

define all-subdir-makefiles-under
$(wildcard $(1)/*/module.mk)
endef

##########################################
## add path and so to LOCAL_SHARED_LIBS
##########################################
define gen-objs-from-shared-lib
$(addprefix $(DIR_OUT)/install/lib/,$(addsuffix .so,$(LOCAL_SHARED_LIBS)))
endef

##########################################
## return path for executable file
##########################################
define gen-installed-executable
$(if $(LOCAL_INSTALL_DIR),\
$(DIR_OUT)/install/bin/$(LOCAL_INSTALL_DIR)/$(LOCAL_MODULE),\
$(DIR_OUT)/install/bin/$(LOCAL_MODULE))
endef

##########################################
## return path for shared lib
##########################################
define gen-installed-shared-lib
$(if $(LOCAL_INSTALL_DIR),\
$(DIR_OUT)/install/lib/$(LOCAL_INSTALL_DIR)/$(LOCAL_MODULE).so,\
$(DIR_OUT)/install/lib/$(LOCAL_MODULE).so)
endef

##########################################
## return path for install file
##########################################
define gen-install-file
$(if $(LOCAL_INSTALL_DIR),\
$(DIR_OUT)/install/$(LOCAL_INSTALL_DIR)/$(1),\
$(DIR_OUT)/install/$(1))
endef

##########################################
## Add -I before include directories
##########################################
define gen-c-includes
$(addprefix -I,$(1))
endef

##########################################
## commands for how to copy one file to target
##########################################
define copy-one-file
$(2): $(1)
	$(H) $(MKDIR) $$(dir $$@)
	$(H) $(CP) $$< $$@
	$(H) echo "[ copy] $$<"
endef

##########################################
## add a list of copy dependencies by $1
##########################################
define gen-copy-dependency
$(foreach f,$(1),\
	$(eval _src:=$(word 1,$(subst :, ,$(f)))) \
	$(eval _dst:=$(word 2,$(subst :, ,$(f)))) \
	$(eval _dst:=$(call gen-install-file,$(_dst))) \
	$(eval $(call copy-one-file,$(LOCAL_PATH)/$(_src),$(_dst))) \
	$(eval ALL_COPY_FILES += $(_dst)) \
)
endef

##########################################
## compile *.c to *.o
##########################################
define compile-c-to-o
	$(H) $(CC) -c $(GLOBAL_C_FLAGS) $(LOCAL_C_FLAGS) $< -o $@
	$(H) echo "[   cc]" $<
endef

##########################################
## compile *.c to *.d
##########################################
define compile-c-to-d
	$(H) $(MKDIR) $(dir $@)
	$(H) $(CC) -MM -MF $(subst .o,.d,$@) -MP -MT $@ $(GLOBAL_C_FLAGS) $(LOCAL_C_FLAGS) $<
endef

##########################################
## compile *.cpp to *.o
##########################################
define compile-cpp-to-o
	$(H) $(CPP) -c $(GLOBAL_C_FLAGS) $(LOCAL_C_FLAGS) $< -o $@
	$(H) echo "[  cpp]" $<
endef

##########################################
## compile *.cpp to *.d
##########################################
define compile-cpp-to-d
	$(H) $(MKDIR) $(dir $@)
	$(H) $(CPP) -MM -MF $(subst .o,.d,$@) -MP -MT $@ $(GLOBAL_C_FLAGS) $(LOCAL_C_FLAGS) $<
endef

##########################################
## ar all *.o to .a
##########################################
define transform-o-to-static-lib
	$(H) $(MKDIR) $(dir $@)
	$(H) $(RM) $@
	$(H) $(AR) -r $@ $^ 2>/dev/null
	$(H) echo "[  gen]" $@
endef

##########################################
## link *.o to so
##########################################
define transform-o-to-shared-lib
	$(H) $(MKDIR) $(dir $@)
	$(H) $(CPP) $(GLOBAL_LD_FLAGS) $(LOCAL_LD_FLAGS) -shared $^ -o $@
	$(H) echo "[  gen]" $@
endef

##########################################
## link *.o to executable
##########################################
define transform-o-to-executable
	$(H) $(MKDIR) $(dir $@)
	$(H) $(CC) $(GLOBAL_LD_FLAGS) $(LOCAL_LD_FLAGS) $^ -o $@
	$(H) echo "[  gen]" $@
endef

##########################################
## strip executable and shared lib
##########################################
define transform-to-stripped
	$(H) $(MKDIR) $(dir $@)
	$(H) $(STRIP) $< -o $@
	$(H) echo "[  ins] $@"
endef

#######################################################################
