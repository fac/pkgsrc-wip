# $NetBSD: Makefile,v 1.10 2010/09/14 11:02:48 wiz Exp $
#

DISTNAME=	libfm-1.1.0
CATEGORIES=	devel
MASTER_SITES=	${MASTER_SITE_SOURCEFORGE:=pcmanfm/}

MAINTAINER=	pkgsrc-users@NetBSD.org
HOMEPAGE=	http://pcmanfm.sourceforge.net/
COMMENT=	File management library

# Instead of depending on fam, use glib2 with kqueue
#DEPENDS=		gio-fam>=0:../../sysutils/gio-fam

GNU_CONFIGURE=		yes
# for fnmatch(3) FNM_CASEFOLD 
CFLAGS.NetBSD+=		-D_NETBSD_SOURCE
USE_LIBTOOL=		yes
USE_TOOLS=		intltool pkg-config

.include "../../x11/gtk2/buildlink3.mk"
.include "../../sysutils/menu-cache/buildlink3.mk"

.include "../../mk/bsd.pkg.mk"
