# $NetBSD$

.include "Makefile.common"
COMMENT=		C++ library to provide an implementation of MARISA

GNU_CONFIGURE=	yes
USE_LIBTOOL=	yes
USE_TOOLS+=		pkg-config
USE_LANGUAGES=	c c++

#TEST_TARGET=	check

PKGCONFIG_OVERRIDE+=	marisa.pc.in

.include "../../mk/bsd.pkg.mk"
