/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "SUPL-POS-INIT"
 * 	found in "/home/martin/repos/LPP-Client/asn/SUPL.asn"
 * 	`asn1c -fcompound-names -no-gen-OER -pdu=all -no-gen-example -S /home/martin/repos/LPP-Client/ASN1C/skeletons`
 */

#include "SUPLPOSINIT.h"

asn_TYPE_member_t asn_MBR_SUPLPOSINIT_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct SUPLPOSINIT, sETCapabilities),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_SETCapabilities,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"sETCapabilities"
		},
	{ ATF_POINTER, 1, offsetof(struct SUPLPOSINIT, requestedAssistData),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_RequestedAssistData,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"requestedAssistData"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct SUPLPOSINIT, locationId),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LocationId,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"locationId"
		},
	{ ATF_POINTER, 4, offsetof(struct SUPLPOSINIT, position),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_Position,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"position"
		},
	{ ATF_POINTER, 3, offsetof(struct SUPLPOSINIT, sUPLPOS),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_SUPLPOS,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"sUPLPOS"
		},
	{ ATF_POINTER, 2, offsetof(struct SUPLPOSINIT, ver),
		(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_Ver,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"ver"
		},
	{ ATF_POINTER, 1, offsetof(struct SUPLPOSINIT, ver2_SUPL_POS_INIT_extension),
		(ASN_TAG_CLASS_CONTEXT | (6 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_Ver2_SUPL_POS_INIT_extension,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"ver2-SUPL-POS-INIT-extension"
		},
};
static const int asn_MAP_SUPLPOSINIT_oms_1[] = { 1, 3, 4, 5, 6 };
static const ber_tlv_tag_t asn_DEF_SUPLPOSINIT_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_SUPLPOSINIT_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* sETCapabilities */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* requestedAssistData */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* locationId */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* position */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 }, /* sUPLPOS */
    { (ASN_TAG_CLASS_CONTEXT | (5 << 2)), 5, 0, 0 }, /* ver */
    { (ASN_TAG_CLASS_CONTEXT | (6 << 2)), 6, 0, 0 } /* ver2-SUPL-POS-INIT-extension */
};
asn_SEQUENCE_specifics_t asn_SPC_SUPLPOSINIT_specs_1 = {
	sizeof(struct SUPLPOSINIT),
	offsetof(struct SUPLPOSINIT, _asn_ctx),
	asn_MAP_SUPLPOSINIT_tag2el_1,
	7,	/* Count of tags in the map */
	asn_MAP_SUPLPOSINIT_oms_1,	/* Optional members */
	4, 1,	/* Root/Additions */
	6,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_SUPLPOSINIT = {
	"SUPLPOSINIT",
	"SUPLPOSINIT",
	&asn_OP_SEQUENCE,
	asn_DEF_SUPLPOSINIT_tags_1,
	sizeof(asn_DEF_SUPLPOSINIT_tags_1)
		/sizeof(asn_DEF_SUPLPOSINIT_tags_1[0]), /* 1 */
	asn_DEF_SUPLPOSINIT_tags_1,	/* Same as above */
	sizeof(asn_DEF_SUPLPOSINIT_tags_1)
		/sizeof(asn_DEF_SUPLPOSINIT_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_SUPLPOSINIT_1,
	7,	/* Elements count */
	&asn_SPC_SUPLPOSINIT_specs_1	/* Additional specs */
};

