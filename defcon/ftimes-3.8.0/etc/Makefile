########################################################################
#
# $Id: Makefile.in,v 1.15 2007/02/23 00:22:35 mavrik Exp $
#
########################################################################
#
# Copyright 2000-2007 Klayton Monroe, All Rights Reserved.
#
########################################################################
#
# Purpose: Makefile for the project's etc directory.
#
########################################################################

#.SILENT:

prefix			= /usr/local/ftimes
exec_prefix		= ${prefix}
etcdir			= ${exec_prefix}/etc
srcdir			= .


INSTALL			= /opt/local/bin/ginstall -c
SRC_FILES		=\
			digfull.cfg.sample\
			diglean.cfg.sample\
			get.cfg.sample\
			mapfull.cfg.sample\
			maplean.cfg.sample\
			nph-ftimes.cfg.sample
DST_FILES		=\
			${etcdir}/digfull.cfg.sample\
			${etcdir}/diglean.cfg.sample\
			${etcdir}/get.cfg.sample\
			${etcdir}/mapfull.cfg.sample\
			${etcdir}/maplean.cfg.sample\
			${etcdir}/nph-ftimes.cfg.sample

all: ${SRC_FILES}

test:

install: ${DST_FILES}
	@umask 22; if [ ! -d ${etcdir} ]; then mkdir -p ${etcdir}; fi
	@for i in ${SRC_FILES}; do\
		if test -f ${srcdir}/$$i; then file=${srcdir}/$$i; else file=$$i; fi;\
		${INSTALL} -m 644 $$file ${etcdir};\
	done

clean:

clean-all: clean
	rm -f Makefile

${DST_FILES}: ${SRC_FILES}

