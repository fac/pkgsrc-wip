# $NetBSD$

BUILDLINK_TREE+=	tinyxml

.if !defined(TINYXML_BUILDLINK3_MK)
TINYXML_BUILDLINK3_MK:=

BUILDLINK_API_DEPENDS.tinyxml+=	tinyxml>=2.6.2
BUILDLINK_PKGSRCDIR.tinyxml?=	../../wip/tinyxml
.endif	# TINYXML_BUILDLINK3_MK

BUILDLINK_TREE+=	-tinyxml
