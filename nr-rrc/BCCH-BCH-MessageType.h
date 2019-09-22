/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "38331-f60.asn"
 * 	`asn1c -S /usr/local/share/asn1c -fcompound-names -fskeletons-copy -findirect-choice -gen-PER -pdu=all -D nr-rrc`
 */

#ifndef	_BCCH_BCH_MessageType_H_
#define	_BCCH_BCH_MessageType_H_


#include <skeletons/asn_application.h>

/* Including external dependencies */
#include <skeletons/constr_CHOICE.h>
#include <skeletons/constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum BCCH_BCH_MessageType_PR {
	BCCH_BCH_MessageType_PR_NOTHING,	/* No components present */
	BCCH_BCH_MessageType_PR_mib,
	BCCH_BCH_MessageType_PR_messageClassExtension
} BCCH_BCH_MessageType_PR;

/* Forward declarations */
struct MIB;

/* BCCH-BCH-MessageType */
typedef struct BCCH_BCH_MessageType {
	BCCH_BCH_MessageType_PR present;
	union BCCH_BCH_MessageType_u {
		struct MIB	*mib;
		struct BCCH_BCH_MessageType__messageClassExtension {
			
			/* Context for parsing across buffer boundaries */
			asn_struct_ctx_t _asn_ctx;
		} *messageClassExtension;
	} choice;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} BCCH_BCH_MessageType_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_BCCH_BCH_MessageType;
extern asn_CHOICE_specifics_t asn_SPC_BCCH_BCH_MessageType_specs_1;
extern asn_TYPE_member_t asn_MBR_BCCH_BCH_MessageType_1[2];
extern asn_per_constraints_t asn_PER_type_BCCH_BCH_MessageType_constr_1;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "MIB.h"

#endif	/* _BCCH_BCH_MessageType_H_ */
#include <skeletons/asn_internal.h>