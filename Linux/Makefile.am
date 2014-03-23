# AES Crypt
# Copyright (C) 2007, 2008, 2009, 2013 Paul E. Jones <paulej@packetizer.com>
# Copyright (C) 2013, 2014 Alon Bar-Lev <alon.barlev@gmail.com>
#
# This software is licensed as "freeware."  Permission to distribute
# this software in source and binary forms is hereby granted without a
# fee.  THIS SOFTWARE IS PROVIDED 'AS IS' AND WITHOUT ANY EXPRESSED OR
# IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED
# WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE.
# THE AUTHOR SHALL NOT BE HELD LIABLE FOR ANY DAMAGES RESULTING FROM
# THE USE OF THIS SOFTWARE, EITHER DIRECTLY OR INDIRECTLY, INCLUDING,
# BUT NOT LIMITED TO, LOSS OF DATA OR DATA BEING RENDERED INACCURATE.
#

AUTOMAKE_OPTIONS = foreign 1.10
ACLOCAL_AMFLAGS = -I m4

MAINTAINERCLEANFILES = \
	config.log config.status \
	$(srcdir)/Makefile.in \
	$(srcdir)/config.h.in $(srcdir)/config.h.in~ $(srcdir)/configure \
	$(srcdir)/install-sh $(srcdir)/ltmain.sh $(srcdir)/missing \
	$(srcdir)/m4/libtool.m4 $(srcdir)/m4/lt~obsolete.m4 \
	$(srcdir)/m4/ltoptions.m4 $(srcdir)/m4/ltsugar.m4 \
	$(srcdir)/m4/ltversion.m4 \
	$(srcdir)/test-driver $(srcdir)/compile \
	$(srcdir)/depcomp $(srcdir)/aclocal.m4 \
	$(srcdir)/config.guess $(srcdir)/config.sub \
	$(NULL)

EXTRA_DIST = \
	aescrypt.spec \
	$(NULL)

SUBDIRS = \
	src \
	gui \
	man \
	$(NULL)

dist_doc_DATA = \
	README \
	$(NULL)
