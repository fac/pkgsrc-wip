# $NetBSD$
#

DISTNAME=	drow-0.2.22
CATEGORIES=	sysutils
MASTER_SITES=	${MASTER_SITE_SOURCEFORGE:=drow/}

MAINTAINER=	pkgsrc-users@NetBSD.org
HOMEPAGE=	http://drow.sourceforge.net/
COMMENT=	Low-level ELF file analyzer
LICENSE=	gnu-gpl-v2

GNU_CONFIGURE=	YES

PKG_DESTDIR_SUPPORT=	destdir
CONFIGURE_ENV+=		DESTDIR=${DESTDIR}
INSTALLATION_DIRS+=	bin

SPECIAL_PERMS+=		bin/drow bin bin 0755

.include "../../mk/bsd.pkg.mk"
