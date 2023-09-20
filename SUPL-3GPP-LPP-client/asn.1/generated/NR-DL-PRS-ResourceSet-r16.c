/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "LPP-PDU-Definitions"
 * 	found in "/home/martin/repos/LPP-Client/asn/LPP.asn"
 * 	`asn1c -fcompound-names -no-gen-OER -pdu=all -no-gen-example -S /home/martin/repos/LPP-Client/ASN1C/skeletons`
 */

#include "NR-DL-PRS-ResourceSet-r16.h"

/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
static int
memb_dl_PRS_ResourceList_r16_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	size_t size;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	/* Determine the number of elements */
	size = _A_CSEQUENCE_FROM_VOID(sptr)->count;
	
	if((size >= 1 && size <= 64)) {
		/* Perform validation of the inner elements */
		return td->encoding_constraints.general_constraints(td, sptr, ctfailcb, app_key);
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static int
memb_dl_PRS_ResourcePower_r16_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= -60 && value <= 50)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static asn_per_constraints_t asn_PER_type_dl_PRS_ResourceRepetitionFactor_r16_constr_4 CC_NOTUSED = {
	{ APC_CONSTRAINED | APC_EXTENSIBLE,  3,  3,  0,  6 }	/* (0..6,...) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_dl_PRS_ResourceTimeGap_r16_constr_13 CC_NOTUSED = {
	{ APC_CONSTRAINED | APC_EXTENSIBLE,  3,  3,  0,  5 }	/* (0..5,...) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_dl_PRS_ResourceList_r16_constr_21 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 6,  6,  1,  64 }	/* (SIZE(1..64)) */,
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_dl_PRS_NumSymbols_r16_constr_23 CC_NOTUSED = {
	{ APC_CONSTRAINED | APC_EXTENSIBLE,  2,  2,  0,  3 }	/* (0..3,...) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_dl_PRS_MutingBitRepetitionFactor_r16_constr_32 CC_NOTUSED = {
	{ APC_CONSTRAINED | APC_EXTENSIBLE,  2,  2,  0,  3 }	/* (0..3,...) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_dl_PRS_ResourceList_r16_constr_21 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 6,  6,  1,  64 }	/* (SIZE(1..64)) */,
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_dl_PRS_ResourcePower_r16_constr_40 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 7,  7, -60,  50 }	/* (-60..50) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static const asn_INTEGER_enum_map_t asn_MAP_dl_PRS_ResourceRepetitionFactor_r16_value2enum_4[] = {
	{ 0,	2,	"n1" },
	{ 1,	2,	"n2" },
	{ 2,	2,	"n4" },
	{ 3,	2,	"n6" },
	{ 4,	2,	"n8" },
	{ 5,	3,	"n16" },
	{ 6,	3,	"n32" }
	/* This list is extensible */
};
static const unsigned int asn_MAP_dl_PRS_ResourceRepetitionFactor_r16_enum2value_4[] = {
	0,	/* n1(0) */
	5,	/* n16(5) */
	1,	/* n2(1) */
	6,	/* n32(6) */
	2,	/* n4(2) */
	3,	/* n6(3) */
	4	/* n8(4) */
	/* This list is extensible */
};
static const asn_INTEGER_specifics_t asn_SPC_dl_PRS_ResourceRepetitionFactor_r16_specs_4 = {
	asn_MAP_dl_PRS_ResourceRepetitionFactor_r16_value2enum_4,	/* "tag" => N; sorted by tag */
	asn_MAP_dl_PRS_ResourceRepetitionFactor_r16_enum2value_4,	/* N => "tag"; sorted by N */
	7,	/* Number of elements in the maps */
	8,	/* Extensions before this member */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_dl_PRS_ResourceRepetitionFactor_r16_tags_4[] = {
	(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_dl_PRS_ResourceRepetitionFactor_r16_4 = {
	"dl-PRS-ResourceRepetitionFactor-r16",
	"dl-PRS-ResourceRepetitionFactor-r16",
	&asn_OP_NativeEnumerated,
	asn_DEF_dl_PRS_ResourceRepetitionFactor_r16_tags_4,
	sizeof(asn_DEF_dl_PRS_ResourceRepetitionFactor_r16_tags_4)
		/sizeof(asn_DEF_dl_PRS_ResourceRepetitionFactor_r16_tags_4[0]) - 1, /* 1 */
	asn_DEF_dl_PRS_ResourceRepetitionFactor_r16_tags_4,	/* Same as above */
	sizeof(asn_DEF_dl_PRS_ResourceRepetitionFactor_r16_tags_4)
		/sizeof(asn_DEF_dl_PRS_ResourceRepetitionFactor_r16_tags_4[0]), /* 2 */
	{ 0, &asn_PER_type_dl_PRS_ResourceRepetitionFactor_r16_constr_4, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_dl_PRS_ResourceRepetitionFactor_r16_specs_4	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_dl_PRS_ResourceTimeGap_r16_value2enum_13[] = {
	{ 0,	2,	"s1" },
	{ 1,	2,	"s2" },
	{ 2,	2,	"s4" },
	{ 3,	2,	"s8" },
	{ 4,	3,	"s16" },
	{ 5,	3,	"s32" }
	/* This list is extensible */
};
static const unsigned int asn_MAP_dl_PRS_ResourceTimeGap_r16_enum2value_13[] = {
	0,	/* s1(0) */
	4,	/* s16(4) */
	1,	/* s2(1) */
	5,	/* s32(5) */
	2,	/* s4(2) */
	3	/* s8(3) */
	/* This list is extensible */
};
static const asn_INTEGER_specifics_t asn_SPC_dl_PRS_ResourceTimeGap_r16_specs_13 = {
	asn_MAP_dl_PRS_ResourceTimeGap_r16_value2enum_13,	/* "tag" => N; sorted by tag */
	asn_MAP_dl_PRS_ResourceTimeGap_r16_enum2value_13,	/* N => "tag"; sorted by N */
	6,	/* Number of elements in the maps */
	7,	/* Extensions before this member */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_dl_PRS_ResourceTimeGap_r16_tags_13[] = {
	(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_dl_PRS_ResourceTimeGap_r16_13 = {
	"dl-PRS-ResourceTimeGap-r16",
	"dl-PRS-ResourceTimeGap-r16",
	&asn_OP_NativeEnumerated,
	asn_DEF_dl_PRS_ResourceTimeGap_r16_tags_13,
	sizeof(asn_DEF_dl_PRS_ResourceTimeGap_r16_tags_13)
		/sizeof(asn_DEF_dl_PRS_ResourceTimeGap_r16_tags_13[0]) - 1, /* 1 */
	asn_DEF_dl_PRS_ResourceTimeGap_r16_tags_13,	/* Same as above */
	sizeof(asn_DEF_dl_PRS_ResourceTimeGap_r16_tags_13)
		/sizeof(asn_DEF_dl_PRS_ResourceTimeGap_r16_tags_13[0]), /* 2 */
	{ 0, &asn_PER_type_dl_PRS_ResourceTimeGap_r16_constr_13, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_dl_PRS_ResourceTimeGap_r16_specs_13	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_dl_PRS_ResourceList_r16_21[] = {
	{ ATF_POINTER, 0, 0,
		(ASN_TAG_CLASS_UNIVERSAL | (16 << 2)),
		0,
		&asn_DEF_NR_DL_PRS_Resource_r16,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		""
		},
};
static const ber_tlv_tag_t asn_DEF_dl_PRS_ResourceList_r16_tags_21[] = {
	(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_SET_OF_specifics_t asn_SPC_dl_PRS_ResourceList_r16_specs_21 = {
	sizeof(struct NR_DL_PRS_ResourceSet_r16__dl_PRS_ResourceList_r16),
	offsetof(struct NR_DL_PRS_ResourceSet_r16__dl_PRS_ResourceList_r16, _asn_ctx),
	0,	/* XER encoding is XMLDelimitedItemList */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_dl_PRS_ResourceList_r16_21 = {
	"dl-PRS-ResourceList-r16",
	"dl-PRS-ResourceList-r16",
	&asn_OP_SEQUENCE_OF,
	asn_DEF_dl_PRS_ResourceList_r16_tags_21,
	sizeof(asn_DEF_dl_PRS_ResourceList_r16_tags_21)
		/sizeof(asn_DEF_dl_PRS_ResourceList_r16_tags_21[0]) - 1, /* 1 */
	asn_DEF_dl_PRS_ResourceList_r16_tags_21,	/* Same as above */
	sizeof(asn_DEF_dl_PRS_ResourceList_r16_tags_21)
		/sizeof(asn_DEF_dl_PRS_ResourceList_r16_tags_21[0]), /* 2 */
	{ 0, &asn_PER_type_dl_PRS_ResourceList_r16_constr_21, SEQUENCE_OF_constraint },
	asn_MBR_dl_PRS_ResourceList_r16_21,
	1,	/* Single element */
	&asn_SPC_dl_PRS_ResourceList_r16_specs_21	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_dl_PRS_NumSymbols_r16_value2enum_23[] = {
	{ 0,	2,	"n2" },
	{ 1,	2,	"n4" },
	{ 2,	2,	"n6" },
	{ 3,	3,	"n12" }
	/* This list is extensible */
};
static const unsigned int asn_MAP_dl_PRS_NumSymbols_r16_enum2value_23[] = {
	3,	/* n12(3) */
	0,	/* n2(0) */
	1,	/* n4(1) */
	2	/* n6(2) */
	/* This list is extensible */
};
static const asn_INTEGER_specifics_t asn_SPC_dl_PRS_NumSymbols_r16_specs_23 = {
	asn_MAP_dl_PRS_NumSymbols_r16_value2enum_23,	/* "tag" => N; sorted by tag */
	asn_MAP_dl_PRS_NumSymbols_r16_enum2value_23,	/* N => "tag"; sorted by N */
	4,	/* Number of elements in the maps */
	5,	/* Extensions before this member */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_dl_PRS_NumSymbols_r16_tags_23[] = {
	(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_dl_PRS_NumSymbols_r16_23 = {
	"dl-PRS-NumSymbols-r16",
	"dl-PRS-NumSymbols-r16",
	&asn_OP_NativeEnumerated,
	asn_DEF_dl_PRS_NumSymbols_r16_tags_23,
	sizeof(asn_DEF_dl_PRS_NumSymbols_r16_tags_23)
		/sizeof(asn_DEF_dl_PRS_NumSymbols_r16_tags_23[0]) - 1, /* 1 */
	asn_DEF_dl_PRS_NumSymbols_r16_tags_23,	/* Same as above */
	sizeof(asn_DEF_dl_PRS_NumSymbols_r16_tags_23)
		/sizeof(asn_DEF_dl_PRS_NumSymbols_r16_tags_23[0]), /* 2 */
	{ 0, &asn_PER_type_dl_PRS_NumSymbols_r16_constr_23, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_dl_PRS_NumSymbols_r16_specs_23	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_dl_PRS_MutingBitRepetitionFactor_r16_value2enum_32[] = {
	{ 0,	2,	"n1" },
	{ 1,	2,	"n2" },
	{ 2,	2,	"n4" },
	{ 3,	2,	"n8" }
	/* This list is extensible */
};
static const unsigned int asn_MAP_dl_PRS_MutingBitRepetitionFactor_r16_enum2value_32[] = {
	0,	/* n1(0) */
	1,	/* n2(1) */
	2,	/* n4(2) */
	3	/* n8(3) */
	/* This list is extensible */
};
static const asn_INTEGER_specifics_t asn_SPC_dl_PRS_MutingBitRepetitionFactor_r16_specs_32 = {
	asn_MAP_dl_PRS_MutingBitRepetitionFactor_r16_value2enum_32,	/* "tag" => N; sorted by tag */
	asn_MAP_dl_PRS_MutingBitRepetitionFactor_r16_enum2value_32,	/* N => "tag"; sorted by N */
	4,	/* Number of elements in the maps */
	5,	/* Extensions before this member */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_dl_PRS_MutingBitRepetitionFactor_r16_tags_32[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_dl_PRS_MutingBitRepetitionFactor_r16_32 = {
	"dl-PRS-MutingBitRepetitionFactor-r16",
	"dl-PRS-MutingBitRepetitionFactor-r16",
	&asn_OP_NativeEnumerated,
	asn_DEF_dl_PRS_MutingBitRepetitionFactor_r16_tags_32,
	sizeof(asn_DEF_dl_PRS_MutingBitRepetitionFactor_r16_tags_32)
		/sizeof(asn_DEF_dl_PRS_MutingBitRepetitionFactor_r16_tags_32[0]) - 1, /* 1 */
	asn_DEF_dl_PRS_MutingBitRepetitionFactor_r16_tags_32,	/* Same as above */
	sizeof(asn_DEF_dl_PRS_MutingBitRepetitionFactor_r16_tags_32)
		/sizeof(asn_DEF_dl_PRS_MutingBitRepetitionFactor_r16_tags_32[0]), /* 2 */
	{ 0, &asn_PER_type_dl_PRS_MutingBitRepetitionFactor_r16_constr_32, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_dl_PRS_MutingBitRepetitionFactor_r16_specs_32	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_mutingOption1_r16_30[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct NR_DL_PRS_ResourceSet_r16__dl_PRS_MutingPatternList_r16__mutingOption1_r16, mutingPattern_r16),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_MutingPattern_r16,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"mutingPattern-r16"
		},
	{ ATF_POINTER, 1, offsetof(struct NR_DL_PRS_ResourceSet_r16__dl_PRS_MutingPatternList_r16__mutingOption1_r16, dl_PRS_MutingBitRepetitionFactor_r16),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_dl_PRS_MutingBitRepetitionFactor_r16_32,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"dl-PRS-MutingBitRepetitionFactor-r16"
		},
};
static const int asn_MAP_mutingOption1_r16_oms_30[] = { 1 };
static const ber_tlv_tag_t asn_DEF_mutingOption1_r16_tags_30[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_mutingOption1_r16_tag2el_30[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* mutingPattern-r16 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* dl-PRS-MutingBitRepetitionFactor-r16 */
};
static asn_SEQUENCE_specifics_t asn_SPC_mutingOption1_r16_specs_30 = {
	sizeof(struct NR_DL_PRS_ResourceSet_r16__dl_PRS_MutingPatternList_r16__mutingOption1_r16),
	offsetof(struct NR_DL_PRS_ResourceSet_r16__dl_PRS_MutingPatternList_r16__mutingOption1_r16, _asn_ctx),
	asn_MAP_mutingOption1_r16_tag2el_30,
	2,	/* Count of tags in the map */
	asn_MAP_mutingOption1_r16_oms_30,	/* Optional members */
	1, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_mutingOption1_r16_30 = {
	"mutingOption1-r16",
	"mutingOption1-r16",
	&asn_OP_SEQUENCE,
	asn_DEF_mutingOption1_r16_tags_30,
	sizeof(asn_DEF_mutingOption1_r16_tags_30)
		/sizeof(asn_DEF_mutingOption1_r16_tags_30[0]) - 1, /* 1 */
	asn_DEF_mutingOption1_r16_tags_30,	/* Same as above */
	sizeof(asn_DEF_mutingOption1_r16_tags_30)
		/sizeof(asn_DEF_mutingOption1_r16_tags_30[0]), /* 2 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_mutingOption1_r16_30,
	2,	/* Elements count */
	&asn_SPC_mutingOption1_r16_specs_30	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_mutingOption2_r16_38[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct NR_DL_PRS_ResourceSet_r16__dl_PRS_MutingPatternList_r16__mutingOption2_r16, mutingPattern_r16),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_MutingPattern_r16,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"mutingPattern-r16"
		},
};
static const ber_tlv_tag_t asn_DEF_mutingOption2_r16_tags_38[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_mutingOption2_r16_tag2el_38[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 } /* mutingPattern-r16 */
};
static asn_SEQUENCE_specifics_t asn_SPC_mutingOption2_r16_specs_38 = {
	sizeof(struct NR_DL_PRS_ResourceSet_r16__dl_PRS_MutingPatternList_r16__mutingOption2_r16),
	offsetof(struct NR_DL_PRS_ResourceSet_r16__dl_PRS_MutingPatternList_r16__mutingOption2_r16, _asn_ctx),
	asn_MAP_mutingOption2_r16_tag2el_38,
	1,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_mutingOption2_r16_38 = {
	"mutingOption2-r16",
	"mutingOption2-r16",
	&asn_OP_SEQUENCE,
	asn_DEF_mutingOption2_r16_tags_38,
	sizeof(asn_DEF_mutingOption2_r16_tags_38)
		/sizeof(asn_DEF_mutingOption2_r16_tags_38[0]) - 1, /* 1 */
	asn_DEF_mutingOption2_r16_tags_38,	/* Same as above */
	sizeof(asn_DEF_mutingOption2_r16_tags_38)
		/sizeof(asn_DEF_mutingOption2_r16_tags_38[0]), /* 2 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_mutingOption2_r16_38,
	1,	/* Elements count */
	&asn_SPC_mutingOption2_r16_specs_38	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_dl_PRS_MutingPatternList_r16_29[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct NR_DL_PRS_ResourceSet_r16__dl_PRS_MutingPatternList_r16, mutingOption1_r16),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		0,
		&asn_DEF_mutingOption1_r16_30,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"mutingOption1-r16"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct NR_DL_PRS_ResourceSet_r16__dl_PRS_MutingPatternList_r16, mutingOption2_r16),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		0,
		&asn_DEF_mutingOption2_r16_38,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"mutingOption2-r16"
		},
};
static const ber_tlv_tag_t asn_DEF_dl_PRS_MutingPatternList_r16_tags_29[] = {
	(ASN_TAG_CLASS_CONTEXT | (6 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_dl_PRS_MutingPatternList_r16_tag2el_29[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* mutingOption1-r16 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* mutingOption2-r16 */
};
static asn_SEQUENCE_specifics_t asn_SPC_dl_PRS_MutingPatternList_r16_specs_29 = {
	sizeof(struct NR_DL_PRS_ResourceSet_r16__dl_PRS_MutingPatternList_r16),
	offsetof(struct NR_DL_PRS_ResourceSet_r16__dl_PRS_MutingPatternList_r16, _asn_ctx),
	asn_MAP_dl_PRS_MutingPatternList_r16_tag2el_29,
	2,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_dl_PRS_MutingPatternList_r16_29 = {
	"dl-PRS-MutingPatternList-r16",
	"dl-PRS-MutingPatternList-r16",
	&asn_OP_SEQUENCE,
	asn_DEF_dl_PRS_MutingPatternList_r16_tags_29,
	sizeof(asn_DEF_dl_PRS_MutingPatternList_r16_tags_29)
		/sizeof(asn_DEF_dl_PRS_MutingPatternList_r16_tags_29[0]) - 1, /* 1 */
	asn_DEF_dl_PRS_MutingPatternList_r16_tags_29,	/* Same as above */
	sizeof(asn_DEF_dl_PRS_MutingPatternList_r16_tags_29)
		/sizeof(asn_DEF_dl_PRS_MutingPatternList_r16_tags_29[0]), /* 2 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_dl_PRS_MutingPatternList_r16_29,
	2,	/* Elements count */
	&asn_SPC_dl_PRS_MutingPatternList_r16_specs_29	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_NR_DL_PRS_ResourceSet_r16_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct NR_DL_PRS_ResourceSet_r16, nr_DL_PRS_ResourceSetID_r16),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NR_DL_PRS_ResourceSetID_r16,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"nr-DL-PRS-ResourceSetID-r16"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct NR_DL_PRS_ResourceSet_r16, dl_PRS_Periodicity_and_ResourceSetSlotOffset_r16_r16),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_NR_DL_PRS_Periodicity_and_ResourceSetSlotOffset_r16,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"dl-PRS-Periodicity-and-ResourceSetSlotOffset-r16-r16"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct NR_DL_PRS_ResourceSet_r16, dl_PRS_ResourceRepetitionFactor_r16),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_dl_PRS_ResourceRepetitionFactor_r16_4,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"dl-PRS-ResourceRepetitionFactor-r16"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct NR_DL_PRS_ResourceSet_r16, dl_PRS_ResourceTimeGap_r16),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_dl_PRS_ResourceTimeGap_r16_13,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"dl-PRS-ResourceTimeGap-r16"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct NR_DL_PRS_ResourceSet_r16, dl_PRS_ResourceList_r16),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		0,
		&asn_DEF_dl_PRS_ResourceList_r16_21,
		0,
		{ 0, &asn_PER_memb_dl_PRS_ResourceList_r16_constr_21,  memb_dl_PRS_ResourceList_r16_constraint_1 },
		0, 0, /* No default value */
		"dl-PRS-ResourceList-r16"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct NR_DL_PRS_ResourceSet_r16, dl_PRS_NumSymbols_r16),
		(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_dl_PRS_NumSymbols_r16_23,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"dl-PRS-NumSymbols-r16"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct NR_DL_PRS_ResourceSet_r16, dl_PRS_MutingPatternList_r16),
		(ASN_TAG_CLASS_CONTEXT | (6 << 2)),
		0,
		&asn_DEF_dl_PRS_MutingPatternList_r16_29,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"dl-PRS-MutingPatternList-r16"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct NR_DL_PRS_ResourceSet_r16, dl_PRS_ResourcePower_r16),
		(ASN_TAG_CLASS_CONTEXT | (7 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ 0, &asn_PER_memb_dl_PRS_ResourcePower_r16_constr_40,  memb_dl_PRS_ResourcePower_r16_constraint_1 },
		0, 0, /* No default value */
		"dl-PRS-ResourcePower-r16"
		},
};
static const ber_tlv_tag_t asn_DEF_NR_DL_PRS_ResourceSet_r16_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_NR_DL_PRS_ResourceSet_r16_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* nr-DL-PRS-ResourceSetID-r16 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* dl-PRS-Periodicity-and-ResourceSetSlotOffset-r16-r16 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* dl-PRS-ResourceRepetitionFactor-r16 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* dl-PRS-ResourceTimeGap-r16 */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 }, /* dl-PRS-ResourceList-r16 */
    { (ASN_TAG_CLASS_CONTEXT | (5 << 2)), 5, 0, 0 }, /* dl-PRS-NumSymbols-r16 */
    { (ASN_TAG_CLASS_CONTEXT | (6 << 2)), 6, 0, 0 }, /* dl-PRS-MutingPatternList-r16 */
    { (ASN_TAG_CLASS_CONTEXT | (7 << 2)), 7, 0, 0 } /* dl-PRS-ResourcePower-r16 */
};
asn_SEQUENCE_specifics_t asn_SPC_NR_DL_PRS_ResourceSet_r16_specs_1 = {
	sizeof(struct NR_DL_PRS_ResourceSet_r16),
	offsetof(struct NR_DL_PRS_ResourceSet_r16, _asn_ctx),
	asn_MAP_NR_DL_PRS_ResourceSet_r16_tag2el_1,
	8,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	8,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_NR_DL_PRS_ResourceSet_r16 = {
	"NR-DL-PRS-ResourceSet-r16",
	"NR-DL-PRS-ResourceSet-r16",
	&asn_OP_SEQUENCE,
	asn_DEF_NR_DL_PRS_ResourceSet_r16_tags_1,
	sizeof(asn_DEF_NR_DL_PRS_ResourceSet_r16_tags_1)
		/sizeof(asn_DEF_NR_DL_PRS_ResourceSet_r16_tags_1[0]), /* 1 */
	asn_DEF_NR_DL_PRS_ResourceSet_r16_tags_1,	/* Same as above */
	sizeof(asn_DEF_NR_DL_PRS_ResourceSet_r16_tags_1)
		/sizeof(asn_DEF_NR_DL_PRS_ResourceSet_r16_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_NR_DL_PRS_ResourceSet_r16_1,
	8,	/* Elements count */
	&asn_SPC_NR_DL_PRS_ResourceSet_r16_specs_1	/* Additional specs */
};
