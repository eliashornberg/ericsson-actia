/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "LPP-PDU-Definitions"
 * 	found in "/home/martin/repos/LPP-Client/asn/LPP.asn"
 * 	`asn1c -fcompound-names -no-gen-OER -pdu=all -no-gen-example -S /home/martin/repos/LPP-Client/ASN1C/skeletons`
 */

#ifndef	_PeriodicAssistanceDataControlParameters_r15_H_
#define	_PeriodicAssistanceDataControlParameters_r15_H_


#include <asn_application.h>

/* Including external dependencies */
#include "PeriodicSessionID-r15.h"
#include "UpdateCapabilities-r15.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* PeriodicAssistanceDataControlParameters-r15 */
typedef struct PeriodicAssistanceDataControlParameters_r15 {
	PeriodicSessionID_r15_t	 periodicSessionID_r15;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	struct PeriodicAssistanceDataControlParameters_r15__ext1 {
		UpdateCapabilities_r15_t	*updateCapabilities_r15	/* OPTIONAL */;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *ext1;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} PeriodicAssistanceDataControlParameters_r15_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_PeriodicAssistanceDataControlParameters_r15;
extern asn_SEQUENCE_specifics_t asn_SPC_PeriodicAssistanceDataControlParameters_r15_specs_1;
extern asn_TYPE_member_t asn_MBR_PeriodicAssistanceDataControlParameters_r15_1[2];

#ifdef __cplusplus
}
#endif

#endif	/* _PeriodicAssistanceDataControlParameters_r15_H_ */
#include <asn_internal.h>