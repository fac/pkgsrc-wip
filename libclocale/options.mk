# $NetBSD$

PKG_OPTIONS_VAR=	PKG_OPTIONS.libclocale
PKG_SUPPORTED_OPTIONS=	nls static wide-curses
PKG_SUGGESTED_OPTIONS+=	nls static wide-curses

.include "../../mk/bsd.options.mk"

.if !empty(PKG_OPTIONS:Mnls)
.include "../../devel/gettext-lib/buildlink3.mk"
.else
CONFIGURE_ARGS+=	--disable-nls
.endif

.if !empty(PKG_OPTIONS:Mstatic)
CONFIGURE_ARGS+=	--enable-static=yes
.else
CONFIGURE_ARGS+=        --enable-static=no
.endif

.if !empty(PKG_OPTIONS:Mwide-curses)
CONFIGURE_ARGS+=	--enable-wide-character-type
.endif
