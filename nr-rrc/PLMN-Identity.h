/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "38331-f60.asn"
 * 	`asn1c -fcompound-names -findirect-choice -gen-PER -pdu=all -no-gen-example -no-gen-OER -fincludes-quoted -funnamed-unions -D nr-rrc-f60`
 */

#ifndef	_PLMN_Identity_H_
#define	_PLMN_Identity_H_


#include "asn_application.h"

/* Including external dependencies */
#include "MNC.h"
#include "constr_SEQUENCE.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct MCC;

/* PLMN-Identity */
typedef struct PLMN_Identity {
	struct MCC	*mcc;	/* OPTIONAL */
	MNC_t	 mnc;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} PLMN_Identity_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_PLMN_Identity;
extern asn_SEQUENCE_specifics_t asn_SPC_PLMN_Identity_specs_1;
extern asn_TYPE_member_t asn_MBR_PLMN_Identity_1[2];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "MCC.h"

#endif	/* _PLMN_Identity_H_ */
#include "asn_internal.h"
