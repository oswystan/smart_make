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

include build/help.mk
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
