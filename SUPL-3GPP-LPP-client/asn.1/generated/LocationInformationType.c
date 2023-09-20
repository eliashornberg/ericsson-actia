/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "LPP-PDU-Definitions"
 * 	found in "/home/martin/repos/LPP-Client/asn/LPP.asn"
 * 	`asn1c -fcompound-names -no-gen-OER -pdu=all -no-gen-example -S /home/martin/repos/LPP-Client/ASN1C/skeletons`
 */

#include "LocationInformationType.h"

/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
asn_per_constraints_t asn_PER_type_LocationInformationType_constr_1 CC_NOTUSED = {
	{ APC_CONSTRAINED | APC_EXTENSIBLE,  2,  2,  0,  3 }	/* (0..3,...) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static const asn_INTEGER_enum_map_t asn_MAP_LocationInformationType_value2enum_1[] = {
	{ 0,	24,	"locationEstimateRequired" },
	{ 1,	28,	"locationMeasurementsRequired" },
	{ 2,	25,	"locationEstimatePreferred" },
	{ 3,	29,	"locationMeasurementsPreferred" }
	/* This list is extensible */
};
static const unsigned int asn_MAP_LocationInformationType_enum2value_1[] = {
	2,	/* locationEstimatePreferred(2) */
	0,	/* locationEstimateRequired(0) */
	3,	/* locationMeasurementsPreferred(3) */
	1	/* locationMeasurementsRequired(1) */
	/* This list is extensible */
};
const asn_INTEGER_specifics_t asn_SPC_LocationInformationType_specs_1 = {
	asn_MAP_LocationInformationType_value2enum_1,	/* "tag" => N; sorted by tag */
	asn_MAP_LocationInformationType_enum2value_1,	/* N => "tag"; sorted by N */
	4,	/* Number of elements in the maps */
	5,	/* Extensions before this member */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_LocationInformationType_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
asn_TYPE_descriptor_t asn_DEF_LocationInformationType = {
	"LocationInformationType",
	"LocationInformationType",
	&asn_OP_NativeEnumerated,
	asn_DEF_LocationInformationType_tags_1,
	sizeof(asn_DEF_LocationInformationType_tags_1)
		/sizeof(asn_DEF_LocationInformationType_tags_1[0]), /* 1 */
	asn_DEF_LocationInformationType_tags_1,	/* Same as above */
	sizeof(asn_DEF_LocationInformationType_tags_1)
		/sizeof(asn_DEF_LocationInformationType_tags_1[0]), /* 1 */
	{ 0, &asn_PER_type_LocationInformationType_constr_1, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_LocationInformationType_specs_1	/* Additional specs */
};
