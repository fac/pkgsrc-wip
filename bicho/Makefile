# $NetBSD$
#

DISTNAME=	bicho-0.3
CATEGORIES=	devel
MASTER_SITES=	http://forge.morfeo-project.org/frs/download.php/488/
EXTRACT_SUFX=	.tar.bz2

MAINTAINER=	jihbed.research@gmail.com
HOMEPAGE=	http://tools.libresoft.es/bicho
COMMENT=	Bug tracking system tool analyzer
LICENSE=	gnu-gpl-v2

DEPENDS=	${PYPKGPREFIX}-storm>=0.16.0:../../wip/py-storm

GNU_CONFIGURE=	yes
USE_TOOLS+=	gmake
USE_LANGUAGES=	# none

PY_PATCHPLIST=		yes
CONFIGURE_ENV+=		PYTHON=${PYTHONBIN}

REPLACE_PYTHON+=	bicho.in

DOCDIR=	${PREFIX}/share/doc/bicho

INSTALLATION_DIRS=	${DOCDIR}

post-install:
	${INSTALL_DATA} ${WRKSRC}/README ${DESTDIR}${DOCDIR}

.include "../../lang/python/application.mk"
.include "../../lang/python/extension.mk"
.include "../../mk/bsd.pkg.mk"
