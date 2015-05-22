clickprefix=/usr/local
clickbindir=/usr/local/bin
clickdatadir=/usr/local/share/click
clickincludedir=/usr/local/include
clicklibdir=/usr/local/lib
clicksbindir=/usr/local/sbin
clicksrcdir=/usr/local/share/click/src

clickbuild_bindir=${clickbuild_prefix}/bin
clickbuild_datadir=${clickbuild_prefix}/share/click
clickbuild_includedir=${clickbuild_prefix}/include
clickbuild_libdir=${clickbuild_prefix}/lib
clickbuild_sbindir=${clickbuild_prefix}/sbin
clickbuild_srcdir=${clickbuild_prefix}/share/click/src

clicklinux_builddir=/lib/modules/3.13.0-24-generic/build
clicklinux_srcdir=/lib/modules/3.13.0-24-generic/build/

CLICK_HAVE_USERLEVEL_DRIVER=1
CLICK_HAVE_LINUXMODULE_DRIVER=1
CLICK_HAVE_BSDMODULE_DRIVER=0
CLICK_LINUXMODULE_2_6=1
CLICK_GMAKE=make
