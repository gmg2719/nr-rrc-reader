/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "38331-f60.asn"
 * 	`asn1c -fcompound-names -findirect-choice -gen-PER -pdu=all -no-gen-example -fincludes-quoted -funnamed-unions -D nr-rrc`
 */

#ifndef	_SecurityModeCommand_IEs_H_
#define	_SecurityModeCommand_IEs_H_


#include "asn_application.h"

/* Including external dependencies */
#include "SecurityConfigSMC.h"
#include "OCTET_STRING.h"
#include "constr_SEQUENCE.h"

#ifdef __cplusplus
extern "C" {
#endif

/* SecurityModeCommand-IEs */
typedef struct SecurityModeCommand_IEs {
	SecurityConfigSMC_t	 securityConfigSMC;
	OCTET_STRING_t	*lateNonCriticalExtension;	/* OPTIONAL */
	struct SecurityModeCommand_IEs__nonCriticalExtension {
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *nonCriticalExtension;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} SecurityModeCommand_IEs_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_SecurityModeCommand_IEs;
extern asn_SEQUENCE_specifics_t asn_SPC_SecurityModeCommand_IEs_specs_1;
extern asn_TYPE_member_t asn_MBR_SecurityModeCommand_IEs_1[3];

#ifdef __cplusplus
}
#endif

#endif	/* _SecurityModeCommand_IEs_H_ */
#include "asn_internal.h"
