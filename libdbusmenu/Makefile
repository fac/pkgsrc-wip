# $NetBSD$
#

DISTNAME=	libdbusmenu-12.10.2
PKGREVISION=	1
CATEGORIES=	devel
MASTER_SITES=	https://launchpad.net/dbusmenu/12.10/12.10.2/+download/
FETCH_USING=	curl

MAINTAINER=	pkgsrc-users@NetBSD.org
HOMEPAGE=	https://launchpad.net/dbusmenu/
COMMENT=	Small library created by pulling some code from indicator-applet
LICENSE=	gnu-lgpl-v3 AND gnu-lgpl-v2.1 AND gnu-lgpl-v3

GNU_CONFIGURE=	yes
USE_LIBTOOL=	yes
USE_TOOLS+=	gmake msgfmt msgmerge intltool perl pkg-config xgettext

PKGCONFIG_OVERRIDE+=	libdbusmenu-glib/dbusmenu-glib-0.4.pc.in
PKGCONFIG_OVERRIDE+=	libdbusmenu-gtk/dbusmenu-gtk3-0.4.pc.in
PKGCONFIG_OVERRIDE+=	libdbusmenu-gtk/dbusmenu-gtk-0.4.pc.in
PKGCONFIG_OVERRIDE+=	tests/dbusmenu-jsonloader-0.4.pc.in

SUBST_CLASSES+=		python
SUBST_MESSAGE.python=	Fixing python interpreter.
SUBST_FILES.python=	tools/dbusmenu-bench
SUBST_STAGE.python=	post-build
SUBST_SED.python=	-e "s|/usr/bin/env python|${PYTHONBIN}|1"

.include "../../mk/bsd.prefs.mk"

.if ${OPSYS} == "Linux"
BUILD_DEPENDS+=		valgrind-[0-9]*:../../devel/valgrind
.endif

.include "../../lang/python/application.mk"
.include "../../textproc/libxslt/buildlink3.mk"
.include "../../devel/gobject-introspection/buildlink3.mk"
.include "../../textproc/json-glib/buildlink3.mk"
BUILDLINK_ABI_DEPENDS.libX11+=	libX11>=1.3
.include "../../x11/libX11/buildlink3.mk"
.include "../../x11/gtk2/buildlink3.mk"
.include "../../devel/atk/buildlink3.mk"
.include "../../x11/gtk3/buildlink3.mk"
.include "../../devel/glib2/buildlink3.mk"
.include "../../textproc/gnome-doc-utils/buildlink3.mk"
.include "../../mk/bsd.pkg.mk"
