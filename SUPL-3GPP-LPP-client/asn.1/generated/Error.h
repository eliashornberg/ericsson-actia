/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "LPP-PDU-Definitions"
 * 	found in "/home/martin/repos/LPP-Client/asn/LPP.asn"
 * 	`asn1c -fcompound-names -no-gen-OER -pdu=all -no-gen-example -S /home/martin/repos/LPP-Client/ASN1C/skeletons`
 */

#ifndef	_Error_H_
#define	_Error_H_


#include <asn_application.h>

/* Including external dependencies */
#include "Error-r9-IEs.h"
#include <constr_SEQUENCE.h>
#include <constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum Error_PR {
	Error_PR_NOTHING,	/* No components present */
	Error_PR_error_r9,
	Error_PR_criticalExtensionsFuture
} Error_PR;

/* Error */
typedef struct Error {
	Error_PR present;
	union Error_u {
		Error_r9_IEs_t	 error_r9;
		struct Error__criticalExtensionsFuture {
			
			/* Context for parsing across buffer boundaries */
			asn_struct_ctx_t _asn_ctx;
		} criticalExtensionsFuture;
	} choice;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} Error_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_Error;
extern asn_CHOICE_specifics_t asn_SPC_Error_specs_1;
extern asn_TYPE_member_t asn_MBR_Error_1[2];
extern asn_per_constraints_t asn_PER_type_Error_constr_1;

#ifdef __cplusplus
}
#endif

#endif	/* _Error_H_ */
#include <asn_internal.h>