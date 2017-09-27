#######################################################################
##                     Copyright (C) 2017 wystan
##
##       filename: main
##    description:
##        created: 2017-09-15 22:16:33
##         author: wystan
##
#######################################################################
.PHONY: all install doc clean

CC       := gcc
CPP      := g++
RM       := rm -rf
MV       := mv
CP       := cp
AR       := ar
BN       := basename
MKDIR    := mkdir -p
STRIP    := strip

CLEAR_VARS           := build/clear_vars.mk
BUILD_STATIC_LIBRARY := build/static_lib.mk
BUILD_SHARED_LIBRARY := build/shared_lib.mk
BUILD_EXECUTABLE     := build/executable.mk

DIR_ROOT   := $(PWD)
DIR_OUT    := out

ALL_EXECUTABLES :=
ALL_STATIC_LIBS :=
ALL_SHARED_LIBS :=

GLOBAL_C_FLAGS  := -Wall -Werror -I inc
GLOBAL_LD_FLAGS := -Wall -Werror -I inc

ifdef V
H :=
else
H := @
endif

include build/definations.mk

all:
include $(wildcard src/*/module.mk)

all: $(ALL_EXECUTABLES) $(ALL_STATIC_LIBS) $(ALL_SHARED_LIBS)

clean:
	$(H) echo "cleaning ..."
	$(H) $(RM) out
	$(H) echo "done."

#######################################################################
