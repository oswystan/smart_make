#######################################################################
##                     Copyright (C) 2017 wystan
##
##       filename: help
##    description: 
##        created: 2017-09-29 17:54:50
##         author: wystan
## 
#######################################################################
.PHONY: help

help:
	@echo 
	@echo "SUB-COMMANDS:"
	@echo "==========================================================="
	@echo "    help         - show this."
	@echo "    all          - compile all source code [as default]."
	@echo "    pkg          - make a xxx.tar.bz2 package for installation."
	@echo "    clean        - rm -rf out/"
	@echo "==========================================================="
	@echo 

#######################################################################
