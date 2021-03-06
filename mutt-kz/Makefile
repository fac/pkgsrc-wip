# $NetBSD: Makefile,v 1.95 2013/10/18 10:23:55 tron Exp $

DISTNAME=       mutt-kz-1.5.22.1-rc1
PKGNAME=        ${DISTNAME:S/-rc/rc/}
CATEGORIES=     mail
MASTER_SITES=   ftp://redcrew.org/pub/mutt-kz/v1.5.22.1/

MAINTAINER=		wiz@NetBSD.org
HOMEPAGE=		http://www.mutt.org/
COMMENT=		Text-based MIME mail client with notmuch, PGP & S/MIME support
LICENSE=		gnu-gpl-v2 OR gnu-gpl-v3 # or newer

PKG_INSTALLATION_TYPES=	overwrite pkgviews

.include "../../mk/bsd.prefs.mk"

USE_PKGLOCALEDIR=	yes
USE_TOOLS+=		msgfmt
USE_TOOLS+=		perl
GNU_CONFIGURE=		yes
CONFIGURE_ARGS+=	--sysconfdir=${PKG_SYSCONFDIR}
CONFIGURE_ARGS+=	--with-docdir=${PREFIX}/share/doc/mutt
CONFIGURE_ARGS+=	--without-included-gettext
CONFIGURE_ARGS+=	--enable-external-dotlock
CONFIGURE_ARGS+=	--enable-pop
CONFIGURE_ARGS+=	--enable-imap
CONFIGURE_ARGS+=        --enable-notmuch

.if ${OPSYS} == "NetBSD" || ${OPSYS} == "DragonFly" || ${OPSYS} == "FreeBSD" || ${OPSYS} == "OpenBSD"
# Force sendmail to /usr/sbin to avoid postfix's
# ${LOCALBASE}/sbin/sendmail.  Should be enabled on all platforms which
# support mailwrapper.
CONFIGURE_ENV+=		SENDMAIL=/usr/sbin/sendmail
.endif

.if (${OPSYS} == "SunOS")
CONFIGURE_ARGS+=	--without-wc-funcs
.endif

# There is a problem using /bin/sh on old NetBSD releases, so use /bin/ksh
# there.
#
.if !empty(MACHINE_PLATFORM:MNetBSD-1.[0-5]*-*)
CONFIGURE_ARGS+=	--with-exec-shell=/bin/ksh
.endif

.include "options.mk"

LDFLAGS+=		${_STRIPFLAG_CC}

DOCDIR=			${PREFIX}/share/doc/mutt
EGDIR=			${PREFIX}/share/examples/mutt
CONF_FILES=		${EGDIR}/Muttrc ${PKG_SYSCONFDIR}/Muttrc
CONF_FILES+=		${EGDIR}/mime.types ${PKG_SYSCONFDIR}/mime.types
FILES_SUBST+=		DOCDIR=${DOCDIR}
INSTALLATION_DIRS+=	${DOCDIR} ${EGDIR}

SUBST_CLASSES+=		paths
SUBST_FILES.paths=	doc/Muttrc
SUBST_VARS.paths+=	DOCDIR PREFIX
SUBST_STAGE.paths=	pre-configure

SPECIAL_PERMS+=	bin/mutt_dotlock ${REAL_ROOT_USER} mail 2551
INSTALL_MAKE_FLAGS=	${MAKE_FLAGS} sysconfdir=${EGDIR}

.include "../../wip/notmuch/buildlink3.mk"
.include "../../devel/zlib/buildlink3.mk"
.include "../../converters/libiconv/buildlink3.mk"
.include "../../devel/gettext-lib/buildlink3.mk"
.include "../../mk/bsd.pkg.mk"
