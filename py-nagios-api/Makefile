# $NetBSD$
#

DISTNAME=	nagios-api-1.2.2
PKGNAME=	${PYPKGPREFIX}-${DISTNAME}
CATEGORIES=	devel python
MASTER_SITES=	https://pypi.python.org/packages/source/n/nagios-api/
EXTRACT_SUFX=	.tar.gz#md5=90159e2cc2550f860d7c4ab7e9bc2c94

MAINTAINER=	nathan+maint@freeagent.com
HOMEPAGE= https://pypi.python.org/pypi/nagios-api/
COMMENT=	Control nagios using an API
LICENSE=	mit

DEPENDS+= ${PYPKGPREFIX}-diesel-[0-9]*:../../wip/py-diesel

.include "../../lang/python/distutils.mk"
.include "../../mk/bsd.pkg.mk"
