# $NetBSD$
#

DISTNAME=	diesel-3.0.16
PKGNAME=	${PYPKGPREFIX}-${DISTNAME}
CATEGORIES=	devel python
MASTER_SITES=	http://jamwt.com/diesel/
EXTRACT_SUFX=	.tar.gz#md5=e776af81cbeef6a36097332841f059df

MAINTAINER=	nathan+maint@freeagent.com
HOMEPAGE= http://diesel.io
COMMENT=	Diesel is a coroutine-based networking library for Python
LICENSE=	mit

DEPENDS+= ${PYPKGPREFIX}-http-parser>=0.7.12:../../wip/py-http-parser
DEPENDS+= ${PYPKGPREFIX}-Twiggy-[0-9]*:../../wip/py-Twiggy
DEPENDS+= ${PYPKGPREFIX}-flask-[0-9]*:../../www/py-flask
DEPENDS+= ${PYPKGPREFIX}-greenlet-[0-9]*:../../wip/py-greenlet
DEPENDS+= ${PYPKGPREFIX}-OpenSSL-[0-9]*:../../security/py-OpenSSL
DEPENDS+= ${PYPKGPREFIX}-dns-[0-9]*:../../net/py-dns

.include "../../lang/python/egg.mk"
.include "../../mk/bsd.pkg.mk"
