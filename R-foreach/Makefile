# $NetBSD$

CATEGORIES=	devel math
MASTER_SITES=	${MASTER_SITE_R_CRAN:=contrib/}

MAINTAINER=	mishka@NetBSD.org
HOMEPAGE=	http://cran.r-project.org/web/packages/foreach/index.html
COMMENT=	Foreach looping construct for R
LICENSE=	apache-2.0

R_PKGNAME=	foreach
R_PKGVER=	1.4.0

BUILDLINK_API_DEPENDS.R+=	R>=2.5.0

.include "../../math/R/Makefile.extension"
.include "../../wip/R-iterators/buildlink3.mk"
.include "../../mk/bsd.pkg.mk"
