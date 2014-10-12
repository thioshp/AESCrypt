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

MAINTAINERCLEANFILES = \
	$(srcdir)/Makefile.in \
	$(NULL)

CLEANFILES = \
	AESCrypt.desktop \
	$(NULL)

EXTRA_DIST = \
	AESCrypt.desktop.in \
	$(NULL)

if ENABLE_GUI

dist_bin_SCRIPTS = \
	aescrypt-gui \
	$(NULL)

applications_DATA = \
	AESCrypt.desktop \
	$(NULL)

dist_icons_DATA = \
	SmallLock.png \
	$(NULL)

endif

AESCrypt.desktop:	AESCrypt.desktop.in
	sed \
		-e 's#@bindir[@]#$(bindir)#g' \
		-e 's#@iconsdir[@]#$(iconsdir)#g' \
		"$(srcdir)/AESCrypt.desktop.in" > AESCrypt.desktop
