# $NetBSD$
#

DISTNAME=	taglib-sharp-2.0.3.7
CATEGORIES=	audio
MASTER_SITES=	http://download.banshee-project.org/taglib-sharp/${PKGVERSION_NOREV}/
EXTRACT_SUFX=	.tar.bz2

MAINTAINER=	kamelderouiche@yahoo.com
HOMEPAGE=	http://developer.novell.com/wiki/index.php/TagLib_Sharp
COMMENT=	Multimedia metadata reading/writing library for popular formats

GNU_CONFIGURE=	yes
USE_TOOLS+=	pkg-config gmake
USE_LANGUAGES=	# none

PKGCONFIG_OVERRIDE+=	taglib-sharp.pc.in

CONFIGURE_ARGS+=	--enable-docs

.include "../../lang/mono2/buildlink3.mk"
.include "../../security/policykit/buildlink3.mk"
.include "../../x11/gnome-sharp/buildlink3.mk"
.include "../../mk/bsd.pkg.mk"
