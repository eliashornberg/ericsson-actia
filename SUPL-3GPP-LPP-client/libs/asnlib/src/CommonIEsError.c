/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "LPP-PDU-Definitions"
 * 	found in "/home/martin/repos/LPP-Client/asn/LPP.asn"
 * 	`asn1c -fcompound-names -no-gen-OER -pdu=all -no-gen-example -S /home/martin/repos/LPP-Client/ASN1C/skeletons`
 */

#include "CommonIEsError.h"

/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
static asn_per_constraints_t asn_PER_type_errorCause_constr_2 CC_NOTUSED = {
	{ APC_CONSTRAINED | APC_EXTENSIBLE,  3,  3,  0,  4 }	/* (0..4,...) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static const asn_INTEGER_enum_map_t asn_MAP_errorCause_value2enum_2[] = {
	{ 0,	9,	"undefined" },
	{ 1,	21,	"lppMessageHeaderError" },
	{ 2,	19,	"lppMessageBodyError" },
	{ 3,	9,	"epduError" },
	{ 4,	18,	"incorrectDataValue" },
	{ 5,	26,	"lppSegmentationError-v1450" }
	/* This list is extensible */
};
static const unsigned int asn_MAP_errorCause_enum2value_2[] = {
	3,	/* epduError(3) */
	4,	/* incorrectDataValue(4) */
	2,	/* lppMessageBodyError(2) */
	1,	/* lppMessageHeaderError(1) */
	5,	/* lppSegmentationError-v1450(5) */
	0	/* undefined(0) */
	/* This list is extensible */
};
static const asn_INTEGER_specifics_t asn_SPC_errorCause_specs_2 = {
	asn_MAP_errorCause_value2enum_2,	/* "tag" => N; sorted by tag */
	asn_MAP_errorCause_enum2value_2,	/* N => "tag"; sorted by N */
	6,	/* Number of elements in the maps */
	6,	/* Extensions before this member */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_errorCause_tags_2[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_errorCause_2 = {
	"errorCause",
	"errorCause",
	&asn_OP_NativeEnumerated,
	asn_DEF_errorCause_tags_2,
	sizeof(asn_DEF_errorCause_tags_2)
		/sizeof(asn_DEF_errorCause_tags_2[0]) - 1, /* 1 */
	asn_DEF_errorCause_tags_2,	/* Same as above */
	sizeof(asn_DEF_errorCause_tags_2)
		/sizeof(asn_DEF_errorCause_tags_2[0]), /* 2 */
	{ 0, &asn_PER_type_errorCause_constr_2, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_errorCause_specs_2	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_CommonIEsError_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct CommonIEsError, errorCause),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_errorCause_2,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"errorCause"
		},
};
static const ber_tlv_tag_t asn_DEF_CommonIEsError_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_CommonIEsError_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 } /* errorCause */
};
asn_SEQUENCE_specifics_t asn_SPC_CommonIEsError_specs_1 = {
	sizeof(struct CommonIEsError),
	offsetof(struct CommonIEsError, _asn_ctx),
	asn_MAP_CommonIEsError_tag2el_1,
	1,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_CommonIEsError = {
	"CommonIEsError",
	"CommonIEsError",
	&asn_OP_SEQUENCE,
	asn_DEF_CommonIEsError_tags_1,
	sizeof(asn_DEF_CommonIEsError_tags_1)
		/sizeof(asn_DEF_CommonIEsError_tags_1[0]), /* 1 */
	asn_DEF_CommonIEsError_tags_1,	/* Same as above */
	sizeof(asn_DEF_CommonIEsError_tags_1)
		/sizeof(asn_DEF_CommonIEsError_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_CommonIEsError_1,
	1,	/* Elements count */
	&asn_SPC_CommonIEsError_specs_1	/* Additional specs */
};

