# $NetBSD$
#

DISTNAME=	dbf-0.8.3.1.src
PKGNAME=	dbf-0.8.3.1
CATEGORIES=	converters
MASTER_SITES=	http://download.berlios.de/dbf/	\
		http://download2.berlios.de/dbf/

MAINTAINER=	pkgsrc-users@NetBSD.org
HOMEPAGE=	http://berg-systeme.de/dbf.html
COMMENT=	Converts dBASE files to comma separated values text files

PKG_DESTDIR_SUPPORT=	none

USE_TOOLS+=	gmake
WRKSRC=		${WRKDIR}/${PKGNAME_NOREV}
BUILD_DIRS=	${WRKSRC}/src
INSTALL_DIRS=	${WRKSRC}

.include "../../mk/bsd.pkg.mk"
