/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "LPP-PDU-Definitions"
 * 	found in "/home/martin/repos/LPP-Client/asn/LPP.asn"
 * 	`asn1c -fcompound-names -no-gen-OER -pdu=all -no-gen-example -S /home/martin/repos/LPP-Client/ASN1C/skeletons`
 */

#ifndef	_NPRS_Info_r14_H_
#define	_NPRS_Info_r14_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>
#include <NativeInteger.h>
#include <BIT_STRING.h>
#include <constr_CHOICE.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum NPRS_Info_r14__operationModeInfoNPRS_r14 {
	NPRS_Info_r14__operationModeInfoNPRS_r14_inband	= 0,
	NPRS_Info_r14__operationModeInfoNPRS_r14_standalone	= 1
} e_NPRS_Info_r14__operationModeInfoNPRS_r14;
typedef enum NPRS_Info_r14__partA_r14__nprsBitmap_r14_PR {
	NPRS_Info_r14__partA_r14__nprsBitmap_r14_PR_NOTHING,	/* No components present */
	NPRS_Info_r14__partA_r14__nprsBitmap_r14_PR_subframePattern10_r14,
	NPRS_Info_r14__partA_r14__nprsBitmap_r14_PR_subframePattern40_r14
} NPRS_Info_r14__partA_r14__nprsBitmap_r14_PR;
typedef enum NPRS_Info_r14__partA_r14__nprs_MutingInfoA_r14_PR {
	NPRS_Info_r14__partA_r14__nprs_MutingInfoA_r14_PR_NOTHING,	/* No components present */
	NPRS_Info_r14__partA_r14__nprs_MutingInfoA_r14_PR_po2_r14,
	NPRS_Info_r14__partA_r14__nprs_MutingInfoA_r14_PR_po4_r14,
	NPRS_Info_r14__partA_r14__nprs_MutingInfoA_r14_PR_po8_r14,
	NPRS_Info_r14__partA_r14__nprs_MutingInfoA_r14_PR_po16_r14
	/* Extensions may appear below */
	
} NPRS_Info_r14__partA_r14__nprs_MutingInfoA_r14_PR;
typedef enum NPRS_Info_r14__partB_r14__nprs_Period_r14 {
	NPRS_Info_r14__partB_r14__nprs_Period_r14_ms160	= 0,
	NPRS_Info_r14__partB_r14__nprs_Period_r14_ms320	= 1,
	NPRS_Info_r14__partB_r14__nprs_Period_r14_ms640	= 2,
	NPRS_Info_r14__partB_r14__nprs_Period_r14_ms1280	= 3,
	/*
	 * Enumeration is extensible
	 */
	NPRS_Info_r14__partB_r14__nprs_Period_r14_ms2560_v1510	= 4
} e_NPRS_Info_r14__partB_r14__nprs_Period_r14;
typedef enum NPRS_Info_r14__partB_r14__nprs_startSF_r14 {
	NPRS_Info_r14__partB_r14__nprs_startSF_r14_zero	= 0,
	NPRS_Info_r14__partB_r14__nprs_startSF_r14_one_eighth	= 1,
	NPRS_Info_r14__partB_r14__nprs_startSF_r14_two_eighths	= 2,
	NPRS_Info_r14__partB_r14__nprs_startSF_r14_three_eighths	= 3,
	NPRS_Info_r14__partB_r14__nprs_startSF_r14_four_eighths	= 4,
	NPRS_Info_r14__partB_r14__nprs_startSF_r14_five_eighths	= 5,
	NPRS_Info_r14__partB_r14__nprs_startSF_r14_six_eighths	= 6,
	NPRS_Info_r14__partB_r14__nprs_startSF_r14_seven_eighths	= 7
	/*
	 * Enumeration is extensible
	 */
} e_NPRS_Info_r14__partB_r14__nprs_startSF_r14;
typedef enum NPRS_Info_r14__partB_r14__nprs_NumSF_r14 {
	NPRS_Info_r14__partB_r14__nprs_NumSF_r14_sf10	= 0,
	NPRS_Info_r14__partB_r14__nprs_NumSF_r14_sf20	= 1,
	NPRS_Info_r14__partB_r14__nprs_NumSF_r14_sf40	= 2,
	NPRS_Info_r14__partB_r14__nprs_NumSF_r14_sf80	= 3,
	NPRS_Info_r14__partB_r14__nprs_NumSF_r14_sf160	= 4,
	NPRS_Info_r14__partB_r14__nprs_NumSF_r14_sf320	= 5,
	NPRS_Info_r14__partB_r14__nprs_NumSF_r14_sf640	= 6,
	NPRS_Info_r14__partB_r14__nprs_NumSF_r14_sf1280	= 7,
	/*
	 * Enumeration is extensible
	 */
	NPRS_Info_r14__partB_r14__nprs_NumSF_r14_sf2560_v1510	= 8
} e_NPRS_Info_r14__partB_r14__nprs_NumSF_r14;
typedef enum NPRS_Info_r14__partB_r14__nprs_MutingInfoB_r14_PR {
	NPRS_Info_r14__partB_r14__nprs_MutingInfoB_r14_PR_NOTHING,	/* No components present */
	NPRS_Info_r14__partB_r14__nprs_MutingInfoB_r14_PR_po2_r14,
	NPRS_Info_r14__partB_r14__nprs_MutingInfoB_r14_PR_po4_r14,
	NPRS_Info_r14__partB_r14__nprs_MutingInfoB_r14_PR_po8_r14,
	NPRS_Info_r14__partB_r14__nprs_MutingInfoB_r14_PR_po16_r14
	/* Extensions may appear below */
	
} NPRS_Info_r14__partB_r14__nprs_MutingInfoB_r14_PR;
typedef enum NPRS_Info_r14__partB_r14__ext1__sib1_SF_TDD_r15 {
	NPRS_Info_r14__partB_r14__ext1__sib1_SF_TDD_r15_sf0	= 0,
	NPRS_Info_r14__partB_r14__ext1__sib1_SF_TDD_r15_sf4	= 1,
	NPRS_Info_r14__partB_r14__ext1__sib1_SF_TDD_r15_sf0and5	= 2
} e_NPRS_Info_r14__partB_r14__ext1__sib1_SF_TDD_r15;
typedef enum NPRS_Info_r14__ext1__partA_TDD_r15__nprsBitmap_r15_PR {
	NPRS_Info_r14__ext1__partA_TDD_r15__nprsBitmap_r15_PR_NOTHING,	/* No components present */
	NPRS_Info_r14__ext1__partA_TDD_r15__nprsBitmap_r15_PR_subframePattern10_TDD_r15,
	NPRS_Info_r14__ext1__partA_TDD_r15__nprsBitmap_r15_PR_subframePattern40_TDD_r15
	/* Extensions may appear below */
	
} NPRS_Info_r14__ext1__partA_TDD_r15__nprsBitmap_r15_PR;
typedef enum NPRS_Info_r14__ext1__partA_TDD_r15__nprs_MutingInfoA_r15_PR {
	NPRS_Info_r14__ext1__partA_TDD_r15__nprs_MutingInfoA_r15_PR_NOTHING,	/* No components present */
	NPRS_Info_r14__ext1__partA_TDD_r15__nprs_MutingInfoA_r15_PR_po2_r15,
	NPRS_Info_r14__ext1__partA_TDD_r15__nprs_MutingInfoA_r15_PR_po4_r15,
	NPRS_Info_r14__ext1__partA_TDD_r15__nprs_MutingInfoA_r15_PR_po8_r15,
	NPRS_Info_r14__ext1__partA_TDD_r15__nprs_MutingInfoA_r15_PR_po16_r15
	/* Extensions may appear below */
	
} NPRS_Info_r14__ext1__partA_TDD_r15__nprs_MutingInfoA_r15_PR;

/* Forward declarations */
struct CarrierFreq_NB_r14;

/* NPRS-Info-r14 */
typedef struct NPRS_Info_r14 {
	long	 operationModeInfoNPRS_r14;
	struct CarrierFreq_NB_r14	*nprs_carrier_r14	/* OPTIONAL */;
	long	*nprsSequenceInfo_r14	/* OPTIONAL */;
	long	*nprsID_r14	/* OPTIONAL */;
	struct NPRS_Info_r14__partA_r14 {
		struct NPRS_Info_r14__partA_r14__nprsBitmap_r14 {
			NPRS_Info_r14__partA_r14__nprsBitmap_r14_PR present;
			union NPRS_Info_r14__partA_r14__nprsBitmap_r14_u {
				BIT_STRING_t	 subframePattern10_r14;
				BIT_STRING_t	 subframePattern40_r14;
			} choice;
			
			/* Context for parsing across buffer boundaries */
			asn_struct_ctx_t _asn_ctx;
		} nprsBitmap_r14;
		struct NPRS_Info_r14__partA_r14__nprs_MutingInfoA_r14 {
			NPRS_Info_r14__partA_r14__nprs_MutingInfoA_r14_PR present;
			union NPRS_Info_r14__partA_r14__nprs_MutingInfoA_r14_u {
				BIT_STRING_t	 po2_r14;
				BIT_STRING_t	 po4_r14;
				BIT_STRING_t	 po8_r14;
				BIT_STRING_t	 po16_r14;
				/*
				 * This type is extensible,
				 * possible extensions are below.
				 */
			} choice;
			
			/* Context for parsing across buffer boundaries */
			asn_struct_ctx_t _asn_ctx;
		} *nprs_MutingInfoA_r14;
		/*
		 * This type is extensible,
		 * possible extensions are below.
		 */
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *partA_r14;
	struct NPRS_Info_r14__partB_r14 {
		long	 nprs_Period_r14;
		long	 nprs_startSF_r14;
		long	 nprs_NumSF_r14;
		struct NPRS_Info_r14__partB_r14__nprs_MutingInfoB_r14 {
			NPRS_Info_r14__partB_r14__nprs_MutingInfoB_r14_PR present;
			union NPRS_Info_r14__partB_r14__nprs_MutingInfoB_r14_u {
				BIT_STRING_t	 po2_r14;
				BIT_STRING_t	 po4_r14;
				BIT_STRING_t	 po8_r14;
				BIT_STRING_t	 po16_r14;
				/*
				 * This type is extensible,
				 * possible extensions are below.
				 */
			} choice;
			
			/* Context for parsing across buffer boundaries */
			asn_struct_ctx_t _asn_ctx;
		} *nprs_MutingInfoB_r14;
		/*
		 * This type is extensible,
		 * possible extensions are below.
		 */
		struct NPRS_Info_r14__partB_r14__ext1 {
			long	*sib1_SF_TDD_r15	/* OPTIONAL */;
			
			/* Context for parsing across buffer boundaries */
			asn_struct_ctx_t _asn_ctx;
		} *ext1;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *partB_r14;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	struct NPRS_Info_r14__ext1 {
		struct NPRS_Info_r14__ext1__partA_TDD_r15 {
			struct NPRS_Info_r14__ext1__partA_TDD_r15__nprsBitmap_r15 {
				NPRS_Info_r14__ext1__partA_TDD_r15__nprsBitmap_r15_PR present;
				union NPRS_Info_r14__ext1__partA_TDD_r15__nprsBitmap_r15_u {
					BIT_STRING_t	 subframePattern10_TDD_r15;
					BIT_STRING_t	 subframePattern40_TDD_r15;
					/*
					 * This type is extensible,
					 * possible extensions are below.
					 */
				} choice;
				
				/* Context for parsing across buffer boundaries */
				asn_struct_ctx_t _asn_ctx;
			} nprsBitmap_r15;
			struct NPRS_Info_r14__ext1__partA_TDD_r15__nprs_MutingInfoA_r15 {
				NPRS_Info_r14__ext1__partA_TDD_r15__nprs_MutingInfoA_r15_PR present;
				union NPRS_Info_r14__ext1__partA_TDD_r15__nprs_MutingInfoA_r15_u {
					BIT_STRING_t	 po2_r15;
					BIT_STRING_t	 po4_r15;
					BIT_STRING_t	 po8_r15;
					BIT_STRING_t	 po16_r15;
					/*
					 * This type is extensible,
					 * possible extensions are below.
					 */
				} choice;
				
				/* Context for parsing across buffer boundaries */
				asn_struct_ctx_t _asn_ctx;
			} *nprs_MutingInfoA_r15;
			/*
			 * This type is extensible,
			 * possible extensions are below.
			 */
			
			/* Context for parsing across buffer boundaries */
			asn_struct_ctx_t _asn_ctx;
		} *partA_TDD_r15;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *ext1;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} NPRS_Info_r14_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_operationModeInfoNPRS_r14_2;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_nprs_Period_r14_20;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_nprs_startSF_r14_27;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_nprs_NumSF_r14_37;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_sib1_SF_TDD_r15_56;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_NPRS_Info_r14;
extern asn_SEQUENCE_specifics_t asn_SPC_NPRS_Info_r14_specs_1;
extern asn_TYPE_member_t asn_MBR_NPRS_Info_r14_1[7];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "CarrierFreq-NB-r14.h"

#endif	/* _NPRS_Info_r14_H_ */
#include <asn_internal.h>