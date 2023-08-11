/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "SUPL-TRIGGERED-RESPONSE"
 * 	found in "/home/martin/repos/LPP-Client/asn/SUPL.asn"
 * 	`asn1c -fcompound-names -no-gen-OER -pdu=all -no-gen-example -S /home/martin/repos/LPP-Client/ASN1C/skeletons`
 */

#include "RepMode.h"

/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
asn_per_constraints_t asn_PER_type_RepMode_constr_1 CC_NOTUSED = {
	{ APC_CONSTRAINED | APC_EXTENSIBLE,  2,  2,  0,  2 }	/* (0..2,...) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static const asn_INTEGER_enum_map_t asn_MAP_RepMode_value2enum_1[] = {
	{ 1,	8,	"realtime" },
	{ 2,	13,	"quasirealtime" },
	{ 3,	5,	"batch" }
	/* This list is extensible */
};
static const unsigned int asn_MAP_RepMode_enum2value_1[] = {
	2,	/* batch(3) */
	1,	/* quasirealtime(2) */
	0	/* realtime(1) */
	/* This list is extensible */
};
const asn_INTEGER_specifics_t asn_SPC_RepMode_specs_1 = {
	asn_MAP_RepMode_value2enum_1,	/* "tag" => N; sorted by tag */
	asn_MAP_RepMode_enum2value_1,	/* N => "tag"; sorted by N */
	3,	/* Number of elements in the maps */
	4,	/* Extensions before this member */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_RepMode_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
asn_TYPE_descriptor_t asn_DEF_RepMode = {
	"RepMode",
	"RepMode",
	&asn_OP_NativeEnumerated,
	asn_DEF_RepMode_tags_1,
	sizeof(asn_DEF_RepMode_tags_1)
		/sizeof(asn_DEF_RepMode_tags_1[0]), /* 1 */
	asn_DEF_RepMode_tags_1,	/* Same as above */
	sizeof(asn_DEF_RepMode_tags_1)
		/sizeof(asn_DEF_RepMode_tags_1[0]), /* 1 */
	{ 0, &asn_PER_type_RepMode_constr_1, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_RepMode_specs_1	/* Additional specs */
};

