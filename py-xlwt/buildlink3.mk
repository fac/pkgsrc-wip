# $NetBSD$

BUILDLINK_TREE+=	py26-xlwt

.if !defined(PY26_XLWT_BUILDLINK3_MK)
PY26_XLWT_BUILDLINK3_MK:=

BUILDLINK_API_DEPENDS.py26-xlwt+=	py26-xlwt>=0.7.2
BUILDLINK_PKGSRCDIR.py26-xlwt?=	../../wip/py-xlwt
.endif	# PY26_XLWT_BUILDLINK3_MK

BUILDLINK_TREE+=	-py26-xlwt
