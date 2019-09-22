/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "38331-f60.asn"
 * 	`asn1c -fcompound-names -findirect-choice -gen-PER -pdu=all -no-gen-example -no-gen-OER -fincludes-quoted -funnamed-unions -D nr-rrc-f60`
 */

#ifndef	_SecurityModeComplete_IEs_H_
#define	_SecurityModeComplete_IEs_H_


#include "asn_application.h"

/* Including external dependencies */
#include "OCTET_STRING.h"
#include "constr_SEQUENCE.h"

#ifdef __cplusplus
extern "C" {
#endif

/* SecurityModeComplete-IEs */
typedef struct SecurityModeComplete_IEs {
	OCTET_STRING_t	*lateNonCriticalExtension;	/* OPTIONAL */
	struct SecurityModeComplete_IEs__nonCriticalExtension {
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *nonCriticalExtension;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} SecurityModeComplete_IEs_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_SecurityModeComplete_IEs;
extern asn_SEQUENCE_specifics_t asn_SPC_SecurityModeComplete_IEs_specs_1;
extern asn_TYPE_member_t asn_MBR_SecurityModeComplete_IEs_1[2];

#ifdef __cplusplus
}
#endif

#endif	/* _SecurityModeComplete_IEs_H_ */
#include "asn_internal.h"
