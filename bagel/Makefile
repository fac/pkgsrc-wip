# $NetBSD$
#

DISTNAME=	bagel-2.0.0
CATEGORIES=	math
MASTER_SITES=	http://www2.ph.ed.ac.uk/~paboyle/bagel/

MAINTAINER=	jihbed.research@gmail.com
HOMEPAGE=	http://www2.ph.ed.ac.uk/~paboyle/bagel/
COMMENT=	Domain specific compiler for lattice QCD

GNU_CONFIGURE=	yes
USE_LANGUAGES=	c++

INSTALLATION_DIRS=	share/doc/bagel

post-install:
	${INSTALL_DATA} ${WRKSRC}/doc/bagel.pdf ${DESTDIR}${PREFIX}/share/doc/bagel

.include "../../mk/bsd.pkg.mk"
