# $NetBSD: Makefile,v 1.3 2009/12/11 19:25:33 adam Exp $

CATEGORIES=	math
MASTER_SITES=	${MASTER_SITE_R_CRAN:=contrib/}

MAINTAINER=	pkgsrc-users@NetBSD.org
HOMEPAGE=	http://dirk.eddelbuettel.com/code/digest.html
COMMENT=	Hash digests for R objects

R_PKGNAME=	digest
R_PKGVER=	0.4.2

BUILDLINK_API_DEPENDS.R+=	R>=2.4.1

USE_LANGUAGES=	c fortran

.include "../../math/R/Makefile.extension"
.include "../../mk/bsd.pkg.mk"
