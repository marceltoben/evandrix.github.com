
PROJECT_ROOT=..

PROJECT_SRCDIR=.

PROJECT_TOPDIR=..



INCLUDES_PREFIX=${PROJECT_ROOT}/Mk

SUBDIRS=ftimes 

all:

check clean clean-all setup test:
	@cwd=`pwd`; for subdir in ${SUBDIRS}; do\
		${SUBDIR_TRACE} && ${SUBDIR_MAKE} ;\
	done

install:

include ${INCLUDES_PREFIX}/common.mk

