/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "LPP-PDU-Definitions"
 * 	found in "/home/martin/repos/LPP-Client/asn/LPP.asn"
 * 	`asn1c -fcompound-names -no-gen-OER -pdu=all -no-gen-example -S /home/martin/repos/LPP-Client/ASN1C/skeletons`
 */

#include "OTDOA-ProvideLocationInformation.h"

static asn_TYPE_member_t asn_MBR_ext1_5[] = {
	{ ATF_POINTER, 1, offsetof(struct OTDOA_ProvideLocationInformation__ext1, otdoaSignalMeasurementInformation_NB_r14),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_OTDOA_SignalMeasurementInformation_NB_r14,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"otdoaSignalMeasurementInformation-NB-r14"
		},
};
static const int asn_MAP_ext1_oms_5[] = { 0 };
static const ber_tlv_tag_t asn_DEF_ext1_tags_5[] = {
	(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_ext1_tag2el_5[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 } /* otdoaSignalMeasurementInformation-NB-r14 */
};
static asn_SEQUENCE_specifics_t asn_SPC_ext1_specs_5 = {
	sizeof(struct OTDOA_ProvideLocationInformation__ext1),
	offsetof(struct OTDOA_ProvideLocationInformation__ext1, _asn_ctx),
	asn_MAP_ext1_tag2el_5,
	1,	/* Count of tags in the map */
	asn_MAP_ext1_oms_5,	/* Optional members */
	1, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_ext1_5 = {
	"ext1",
	"ext1",
	&asn_OP_SEQUENCE,
	asn_DEF_ext1_tags_5,
	sizeof(asn_DEF_ext1_tags_5)
		/sizeof(asn_DEF_ext1_tags_5[0]) - 1, /* 1 */
	asn_DEF_ext1_tags_5,	/* Same as above */
	sizeof(asn_DEF_ext1_tags_5)
		/sizeof(asn_DEF_ext1_tags_5[0]), /* 2 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_ext1_5,
	1,	/* Elements count */
	&asn_SPC_ext1_specs_5	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_OTDOA_ProvideLocationInformation_1[] = {
	{ ATF_POINTER, 3, offsetof(struct OTDOA_ProvideLocationInformation, otdoaSignalMeasurementInformation),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_OTDOA_SignalMeasurementInformation,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"otdoaSignalMeasurementInformation"
		},
	{ ATF_POINTER, 2, offsetof(struct OTDOA_ProvideLocationInformation, otdoa_Error),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_OTDOA_Error,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"otdoa-Error"
		},
	{ ATF_POINTER, 1, offsetof(struct OTDOA_ProvideLocationInformation, ext1),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		0,
		&asn_DEF_ext1_5,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"ext1"
		},
};
static const int asn_MAP_OTDOA_ProvideLocationInformation_oms_1[] = { 0, 1, 2 };
static const ber_tlv_tag_t asn_DEF_OTDOA_ProvideLocationInformation_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_OTDOA_ProvideLocationInformation_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* otdoaSignalMeasurementInformation */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* otdoa-Error */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 } /* ext1 */
};
asn_SEQUENCE_specifics_t asn_SPC_OTDOA_ProvideLocationInformation_specs_1 = {
	sizeof(struct OTDOA_ProvideLocationInformation),
	offsetof(struct OTDOA_ProvideLocationInformation, _asn_ctx),
	asn_MAP_OTDOA_ProvideLocationInformation_tag2el_1,
	3,	/* Count of tags in the map */
	asn_MAP_OTDOA_ProvideLocationInformation_oms_1,	/* Optional members */
	2, 1,	/* Root/Additions */
	2,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_OTDOA_ProvideLocationInformation = {
	"OTDOA-ProvideLocationInformation",
	"OTDOA-ProvideLocationInformation",
	&asn_OP_SEQUENCE,
	asn_DEF_OTDOA_ProvideLocationInformation_tags_1,
	sizeof(asn_DEF_OTDOA_ProvideLocationInformation_tags_1)
		/sizeof(asn_DEF_OTDOA_ProvideLocationInformation_tags_1[0]), /* 1 */
	asn_DEF_OTDOA_ProvideLocationInformation_tags_1,	/* Same as above */
	sizeof(asn_DEF_OTDOA_ProvideLocationInformation_tags_1)
		/sizeof(asn_DEF_OTDOA_ProvideLocationInformation_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_OTDOA_ProvideLocationInformation_1,
	3,	/* Elements count */
	&asn_SPC_OTDOA_ProvideLocationInformation_specs_1	/* Additional specs */
};
