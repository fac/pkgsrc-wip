# $NetBSD$

BUILDLINK_TREE+=	hs-chalkboard-viewer

.if !defined(HS_CHALKBOARD_VIEWER_BUILDLINK3_MK)
HS_CHALKBOARD_VIEWER_BUILDLINK3_MK:=

BUILDLINK_API_DEPENDS.hs-chalkboard-viewer+=	hs-chalkboard-viewer>=0.1
BUILDLINK_PKGSRCDIR.hs-chalkboard-viewer?=	../../wip/hs-chalkboard-viewer

.include "../../wip/hs-chalkboard/buildlink3.mk"
.include "../../wip/hs-GLUT/buildlink3.mk"
.include "../../wip/hs-OpenGL/buildlink3.mk"
.endif	# HS_CHALKBOARD_VIEWER_BUILDLINK3_MK

BUILDLINK_TREE+=	-hs-chalkboard-viewer
