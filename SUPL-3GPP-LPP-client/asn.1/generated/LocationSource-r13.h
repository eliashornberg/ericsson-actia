/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "LPP-PDU-Definitions"
 * 	found in "/home/martin/repos/LPP-Client/asn/LPP.asn"
 * 	`asn1c -fcompound-names -no-gen-OER -pdu=all -no-gen-example -S /home/martin/repos/LPP-Client/ASN1C/skeletons`
 */

#ifndef	_LocationSource_r13_H_
#define	_LocationSource_r13_H_


#include <asn_application.h>

/* Including external dependencies */
#include <BIT_STRING.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum LocationSource_r13 {
	LocationSource_r13_a_gnss	= 0,
	LocationSource_r13_wlan	= 1,
	LocationSource_r13_bt	= 2,
	LocationSource_r13_tbs	= 3,
	LocationSource_r13_sensor	= 4,
	LocationSource_r13_ha_gnss_v1510	= 5,
	LocationSource_r13_motion_sensor_v1550	= 6
} e_LocationSource_r13;

/* LocationSource-r13 */
typedef BIT_STRING_t	 LocationSource_r13_t;

/* Implementation */
extern asn_per_constraints_t asn_PER_type_LocationSource_r13_constr_1;
extern asn_TYPE_descriptor_t asn_DEF_LocationSource_r13;
asn_struct_free_f LocationSource_r13_free;
asn_struct_print_f LocationSource_r13_print;
asn_constr_check_f LocationSource_r13_constraint;
ber_type_decoder_f LocationSource_r13_decode_ber;
der_type_encoder_f LocationSource_r13_encode_der;
xer_type_decoder_f LocationSource_r13_decode_xer;
xer_type_encoder_f LocationSource_r13_encode_xer;
per_type_decoder_f LocationSource_r13_decode_uper;
per_type_encoder_f LocationSource_r13_encode_uper;

#ifdef __cplusplus
}
#endif

#endif	/* _LocationSource_r13_H_ */
#include <asn_internal.h>