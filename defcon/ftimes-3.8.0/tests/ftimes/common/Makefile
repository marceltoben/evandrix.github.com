
PROJECT_ROOT=../../..

PROJECT_SRCDIR=.

PROJECT_TOPDIR=../../..



INCLUDES_PREFIX=${PROJECT_ROOT}/Mk

SUBDIRS=map dig compare decoder

all:

check clean clean-all setup test:
	@cwd=`pwd`; for subdir in ${SUBDIRS}; do\
		${SUBDIR_TRACE} && ${SUBDIR_MAKE} ;\
	done

include ${INCLUDES_PREFIX}/common.mk

