# $NetBSD$
#

DISTNAME=	qecalc-0.2.3
PKGNAME=	${PYPKGPREFIX}-${DISTNAME}
CATEGORIES=	math
MASTER_SITES=	http://danse.cacr.caltech.edu/packages/dev_danse_us/

MAINTAINER=	jihbed.research@gmail.com
HOMEPAGE=	http://docs.danse.us/AbInitio/espresso/qecalc/index.html
COMMENT=	Wrapper for Quantum Espresso
LICENSE=	modified-bsd

DEPENDS+=	${PYPKGPREFIX}-diffpy-structure-[0-9]*:../../wip/py-diffpy-structure

USE_LANGUAGES=	# none

.include "../../lang/python/egg.mk"
.include "../../math/py-numpy/buildlink3.mk"
.include "../../mk/bsd.pkg.mk"
