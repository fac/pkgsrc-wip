# $NetBSD$

DISTNAME=	pkg_fake-0.3
CATEGORIES=	pkgtools
MASTER_SITES=	# empty
DISTFILES=	# empty

MAINTAINER=	pkgsrc-users@NetBSD.org
COMMENT=	Tool for pkgsrc that creates and manages fake packages

NO_CONFIGURE=	yes
NO_BUILD=	yes

DEPENDS+=	pkg_alternatives>=1.3:../../pkgtools/pkg_alternatives
DEPENDS+=	pkgfind>=20050804:../../pkgtools/pkgfind

INSTALLATION_DIRS=	sbin ${PKGMANDIR}/man1

do-extract:
	${MKDIR} ${WRKSRC:Q}
	${SED}	-e 's,@PREFIX@,${PREFIX},g'				\
		-e 's,@PKGDB@,${PKG_DBDIR},g'				\
		-e 's,@PKGSRC@,${PKGSRCDIR},g'				\
	< ${FILESDIR:Q}/pkg_fake					\
	> ${WRKSRC:Q}/pkg_fake
	${CP} ${FILESDIR:Q}/pkg_fake.1 ${WRKSRC:Q}/

do-install:
	${INSTALL_SCRIPT} ${WRKSRC:Q}/pkg_fake ${DESTDIR}${PREFIX:Q}/sbin/
	${INSTALL_MAN} ${WRKSRC:Q}/pkg_fake.1 ${DESTDIR}${PREFIX:Q}/${PKGMANDIR}/man1/

.include "../../mk/bsd.pkg.mk"
