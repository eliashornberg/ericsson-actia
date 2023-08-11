/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "LPP-PDU-Definitions"
 * 	found in "/home/martin/repos/LPP-Client/asn/LPP.asn"
 * 	`asn1c -fcompound-names -no-gen-OER -pdu=all -no-gen-example -S /home/martin/repos/LPP-Client/ASN1C/skeletons`
 */

#include "AntennaReferencePointUnc-r15.h"

static int
memb_uncertainty_X_r15_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 0 && value <= 255)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static int
memb_confidence_X_r15_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 0 && value <= 100)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static int
memb_uncertainty_Y_r15_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 0 && value <= 255)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static int
memb_confidence_Y_r15_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 0 && value <= 100)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static int
memb_uncertainty_Z_r15_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 0 && value <= 255)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static int
memb_confidence_Z_r15_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 0 && value <= 100)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static asn_per_constraints_t asn_PER_memb_uncertainty_X_r15_constr_2 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 8,  8,  0,  255 }	/* (0..255) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_confidence_X_r15_constr_3 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 7,  7,  0,  100 }	/* (0..100) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_uncertainty_Y_r15_constr_4 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 8,  8,  0,  255 }	/* (0..255) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_confidence_Y_r15_constr_5 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 7,  7,  0,  100 }	/* (0..100) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_uncertainty_Z_r15_constr_6 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 8,  8,  0,  255 }	/* (0..255) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_confidence_Z_r15_constr_7 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 7,  7,  0,  100 }	/* (0..100) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
asn_TYPE_member_t asn_MBR_AntennaReferencePointUnc_r15_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct AntennaReferencePointUnc_r15, uncertainty_X_r15),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ 0, &asn_PER_memb_uncertainty_X_r15_constr_2,  memb_uncertainty_X_r15_constraint_1 },
		0, 0, /* No default value */
		"uncertainty-X-r15"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct AntennaReferencePointUnc_r15, confidence_X_r15),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ 0, &asn_PER_memb_confidence_X_r15_constr_3,  memb_confidence_X_r15_constraint_1 },
		0, 0, /* No default value */
		"confidence-X-r15"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct AntennaReferencePointUnc_r15, uncertainty_Y_r15),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ 0, &asn_PER_memb_uncertainty_Y_r15_constr_4,  memb_uncertainty_Y_r15_constraint_1 },
		0, 0, /* No default value */
		"uncertainty-Y-r15"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct AntennaReferencePointUnc_r15, confidence_Y_r15),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ 0, &asn_PER_memb_confidence_Y_r15_constr_5,  memb_confidence_Y_r15_constraint_1 },
		0, 0, /* No default value */
		"confidence-Y-r15"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct AntennaReferencePointUnc_r15, uncertainty_Z_r15),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ 0, &asn_PER_memb_uncertainty_Z_r15_constr_6,  memb_uncertainty_Z_r15_constraint_1 },
		0, 0, /* No default value */
		"uncertainty-Z-r15"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct AntennaReferencePointUnc_r15, confidence_Z_r15),
		(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ 0, &asn_PER_memb_confidence_Z_r15_constr_7,  memb_confidence_Z_r15_constraint_1 },
		0, 0, /* No default value */
		"confidence-Z-r15"
		},
};
static const ber_tlv_tag_t asn_DEF_AntennaReferencePointUnc_r15_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_AntennaReferencePointUnc_r15_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* uncertainty-X-r15 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* confidence-X-r15 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* uncertainty-Y-r15 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* confidence-Y-r15 */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 }, /* uncertainty-Z-r15 */
    { (ASN_TAG_CLASS_CONTEXT | (5 << 2)), 5, 0, 0 } /* confidence-Z-r15 */
};
asn_SEQUENCE_specifics_t asn_SPC_AntennaReferencePointUnc_r15_specs_1 = {
	sizeof(struct AntennaReferencePointUnc_r15),
	offsetof(struct AntennaReferencePointUnc_r15, _asn_ctx),
	asn_MAP_AntennaReferencePointUnc_r15_tag2el_1,
	6,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	6,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_AntennaReferencePointUnc_r15 = {
	"AntennaReferencePointUnc-r15",
	"AntennaReferencePointUnc-r15",
	&asn_OP_SEQUENCE,
	asn_DEF_AntennaReferencePointUnc_r15_tags_1,
	sizeof(asn_DEF_AntennaReferencePointUnc_r15_tags_1)
		/sizeof(asn_DEF_AntennaReferencePointUnc_r15_tags_1[0]), /* 1 */
	asn_DEF_AntennaReferencePointUnc_r15_tags_1,	/* Same as above */
	sizeof(asn_DEF_AntennaReferencePointUnc_r15_tags_1)
		/sizeof(asn_DEF_AntennaReferencePointUnc_r15_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_AntennaReferencePointUnc_r15_1,
	6,	/* Elements count */
	&asn_SPC_AntennaReferencePointUnc_r15_specs_1	/* Additional specs */
};

