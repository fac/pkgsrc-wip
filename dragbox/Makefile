# $NetBSD$
#

DISTNAME=	dragbox-0.4.0
PKGREVISION=	2
CATEGORIES=	x11 gnome
MASTER_SITES=	http://kaizer.se/publicfiles/dragbox/

MAINTAINER=	pkgsrc.gnome@gmail.com
HOMEPAGE=	http://users.student.lth.se/f04us/wiki/dragbox/
COMMENT=	Command line drag-and-drop tool for GNOME
LICENSE=	gnu-gpl-v2

GIT_REPOSITORIES=       dragbox
GIT_REPO.dragbox=	git://repo.or.cz/dragbox.git

WRKSRC=		${WRKDIR}/${DISTNAME:S|-${PKGVERSION_NOREV}||:Q}
GNU_CONFIGURE=	yes
USE_TOOLS+=	gmake
USE_TOOLS+=	autoconf
USE_TOOLS+=	automake

REPLACE_PYTHON+=	dragbox
PY_PATCHPLIST=	yes

pre-configure:
	set -e; cd ${WRKSRC}; \
	aclocal; automake -a --foreign -i; autoconf

.include "../../devel/libglade/buildlink3.mk"
.include "../../devel/py-gobject/buildlink3.mk"
.include "../../lang/python/application.mk"
.include "../../lang/python/extension.mk"
.include "../../sysutils/py-dbus/buildlink3.mk"
.include "../../x11/py-gnome2/buildlink3.mk"
.include "../../x11/py-gtk2/buildlink3.mk"
.include "../../wip/mk/git-package.mk"
.include "../../mk/bsd.pkg.mk"
