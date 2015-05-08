# $NetBSD: buildlink3.mk,v 1.1 2012/12/03 22:26:09 wiz Exp $

BUILDLINK_TREE+=	mp4v2

.if !defined(MP4V2_BUILDLINK3_MK)
MP4V2_BUILDLINK3_MK:=

BUILDLINK_API_DEPENDS.mp4v2+=	mp4v2>=2.0.0
BUILDLINK_PKGSRCDIR.mp4v2?=	../../multimedia/mp4v2
.endif	# MP4V2_BUILDLINK3_MK

BUILDLINK_TREE+=	-mp4v2