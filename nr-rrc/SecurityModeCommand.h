/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "38331-f60.asn"
 * 	`asn1c -fcompound-names -findirect-choice -gen-PER -pdu=all -no-gen-example -no-gen-OER -fincludes-quoted -funnamed-unions -D nr-rrc-f60`
 */

#ifndef	_SecurityModeCommand_H_
#define	_SecurityModeCommand_H_


#include "asn_application.h"

/* Including external dependencies */
#include "RRC-TransactionIdentifier.h"
#include "constr_SEQUENCE.h"
#include "constr_CHOICE.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum SecurityModeCommand__criticalExtensions_PR {
	SecurityModeCommand__criticalExtensions_PR_NOTHING,	/* No components present */
	SecurityModeCommand__criticalExtensions_PR_securityModeCommand,
	SecurityModeCommand__criticalExtensions_PR_criticalExtensionsFuture
} SecurityModeCommand__criticalExtensions_PR;

/* Forward declarations */
struct SecurityModeCommand_IEs;

/* SecurityModeCommand */
typedef struct SecurityModeCommand {
	RRC_TransactionIdentifier_t	 rrc_TransactionIdentifier;
	struct SecurityModeCommand__criticalExtensions {
		SecurityModeCommand__criticalExtensions_PR present;
		union {
			struct SecurityModeCommand_IEs	*securityModeCommand;
			struct SecurityModeCommand__criticalExtensions__criticalExtensionsFuture {
				
				/* Context for parsing across buffer boundaries */
				asn_struct_ctx_t _asn_ctx;
			} *criticalExtensionsFuture;
		};
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} criticalExtensions;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} SecurityModeCommand_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_SecurityModeCommand;
extern asn_SEQUENCE_specifics_t asn_SPC_SecurityModeCommand_specs_1;
extern asn_TYPE_member_t asn_MBR_SecurityModeCommand_1[2];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "SecurityModeCommand-IEs.h"

#endif	/* _SecurityModeCommand_H_ */
#include "asn_internal.h"
