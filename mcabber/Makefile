# $NetBSD$

DISTNAME=	mcabber-0.10.2
CATEGORIES=	chat
MASTER_SITES=	http://www.lilotux.net/~mikael/mcabber/files/
EXTRACT_SUFX=	.tar.bz2

MAINTAINER=		degroote@NetBSD.org
HOMEPAGE=		http://www.lilotux.net/~mikael/mcabber/
COMMENT=		Jabber console client

CHECK_PORTABILITY_SKIP+=	contrib/events/eventcmd.pastebin

GNU_CONFIGURE=	yes
USE_LIBTOOL=		yes
USE_TOOLS+=		gmake xgettext pkg-config
USE_NCURSES=		yes
LICENSE=		gnu-gpl-v2


INSTALLATION_DIRS+= 	share/examples/mcabber
post-install:
	${INSTALL_DATA} ${WRKSRC}/mcabberrc.example \
			${DESTDIR}${PREFIX}/share/examples/mcabber

CONFIGURE_ARGS+=	--disable-hgcset
CONFIGURE_ARGS+=	--enable-otr

.include "options.mk"


.include "../../chat/loudmouth/buildlink3.mk"
.include "../../chat/libotr/buildlink3.mk"
.include "../../devel/glib2/buildlink3.mk"
.include "../../devel/libidn/buildlink3.mk"
.include "../../devel/ncursesw/buildlink3.mk"
.include "../../sysutils/desktop-file-utils/desktopdb.mk"
.include "../../mk/bsd.pkg.mk"
