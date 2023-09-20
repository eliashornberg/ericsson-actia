/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "LPP-PDU-Definitions"
 * 	found in "/home/martin/repos/LPP-Client/asn/LPP.asn"
 * 	`asn1c -fcompound-names -no-gen-OER -pdu=all -no-gen-example -S /home/martin/repos/LPP-Client/ASN1C/skeletons`
 */

#ifndef	_LPP_Message_H_
#define	_LPP_Message_H_


#include <asn_application.h>

/* Including external dependencies */
#include <BOOLEAN.h>
#include "SequenceNumber.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct LPP_TransactionID;
struct Acknowledgement;
struct LPP_MessageBody;

/* LPP-Message */
typedef struct LPP_Message {
	struct LPP_TransactionID	*transactionID	/* OPTIONAL */;
	BOOLEAN_t	 endTransaction;
	SequenceNumber_t	*sequenceNumber	/* OPTIONAL */;
	struct Acknowledgement	*acknowledgement	/* OPTIONAL */;
	struct LPP_MessageBody	*lpp_MessageBody	/* OPTIONAL */;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} LPP_Message_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_LPP_Message;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "LPP-TransactionID.h"
#include "Acknowledgement.h"
#include "LPP-MessageBody.h"

#endif	/* _LPP_Message_H_ */
#include <asn_internal.h>