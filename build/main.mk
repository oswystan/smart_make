#######################################################################
##                     Copyright (C) 2017 wystan
##
##       filename: main
##    description:
##        created: 2017-09-15 22:16:33
##         author: wystan
##
#######################################################################
.PHONY: all install doc clean pkg
all:

H     := $(if $(filter 1,$V),,@)
CC    := gcc
CPP   := g++
RM    := rm -rf
MV    := mv
CP    := cp
AR    := ar
BN    := basename
MKDIR := mkdir -p
MKPKG := tar jcvf
STRIP := $(if $(filter Darwin,$(shell uname -s)),strip -u -r,strip)

DIR_ROOT   := $(PWD)
DIR_OUT    := out

CLEAR_VARS           := build/clear_vars.mk
BUILD_STATIC_LIBRARY := build/static_lib.mk
BUILD_SHARED_LIBRARY := build/shared_lib.mk
BUILD_EXECUTABLE     := build/executable.mk
BUILD_COPY_FILE      := build/copy_file.mk

ALL_EXECUTABLES :=
ALL_STATIC_LIBS :=
ALL_SHARED_LIBS :=
ALL_COPY_FILES  :=

GLOBAL_C_FLAGS  := -Wall -Werror -I inc
GLOBAL_LD_FLAGS :=

include build/definations.mk
include $(wildcard src/*/module.mk)

all: $(ALL_EXECUTABLES) $(ALL_STATIC_LIBS) $(ALL_SHARED_LIBS) $(ALL_COPY_FILES)

pkg: all
	$(mk-pkg-with-version)

clean:
	$(H) echo "cleaning ..."
	$(H) $(RM) out
	$(H) echo "done."

#######################################################################
