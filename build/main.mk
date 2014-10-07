################################################################################

CLEAR_VARS := build/clear_vars.mk
BUILD_STATIC_LIBRARY := build/static_library.mk
BUILD_SHARED_LIBRARY := build/shared_library.mk

#porting from android to get local path
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

CC    := gcc
RM    := rm -rf
MKDIR := mkdir -p
AR    := ar
STRIP := strip

ifdef V
HIDE := 
else
HIDE := @
endif


TARGET_LIBS    := 
ROOT_DIR       := $(PWD)
TARGET_OUT_DIR := out

TARGET_BIN := $(TARGET_OUT_DIR)/smart_make.bin
TARGET_DOC := doc

all:

include $(wildcard src/*/module.mk)

all: $(TARGET_BIN) $(TARGET_DOC)

$(TARGET_DOC):
	$(HIDE) $(warning TODO $@)

$(TARGET_BIN):$(TARGET_LIBS)
	$(HIDE) $(CC) $^ -o $@
	$(HIDE) $(STRIP) $@
	$(HIDE) echo "=>$@ is ready"

clean:
	$(HIDE) $(RM) $(TARGET_OUT_DIR) $(TARGET_DOC)

################################################################################
