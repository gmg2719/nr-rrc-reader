/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "38331-f60.asn"
 * 	`asn1c -S /usr/local/share/asn1c -fcompound-names -fskeletons-copy -findirect-choice -gen-PER -pdu=all -D nr-rrc`
 */

#ifndef	_SecurityModeComplete_H_
#define	_SecurityModeComplete_H_


#include <skeletons/asn_application.h>

/* Including external dependencies */
#include <skeletons/constr_CHOICE.h>
#include <skeletons/constr_SEQUENCE.h>

#include "RRC-TransactionIdentifier.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum SecurityModeComplete__criticalExtensions_PR {
	SecurityModeComplete__criticalExtensions_PR_NOTHING,	/* No components present */
	SecurityModeComplete__criticalExtensions_PR_securityModeComplete,
	SecurityModeComplete__criticalExtensions_PR_criticalExtensionsFuture
} SecurityModeComplete__criticalExtensions_PR;

/* Forward declarations */
struct SecurityModeComplete_IEs;

/* SecurityModeComplete */
typedef struct SecurityModeComplete {
	RRC_TransactionIdentifier_t	 rrc_TransactionIdentifier;
	struct SecurityModeComplete__criticalExtensions {
		SecurityModeComplete__criticalExtensions_PR present;
		union SecurityModeComplete__criticalExtensions_u {
			struct SecurityModeComplete_IEs	*securityModeComplete;
			struct SecurityModeComplete__criticalExtensions__criticalExtensionsFuture {
				
				/* Context for parsing across buffer boundaries */
				asn_struct_ctx_t _asn_ctx;
			} *criticalExtensionsFuture;
		} choice;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} criticalExtensions;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} SecurityModeComplete_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_SecurityModeComplete;
extern asn_SEQUENCE_specifics_t asn_SPC_SecurityModeComplete_specs_1;
extern asn_TYPE_member_t asn_MBR_SecurityModeComplete_1[2];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "SecurityModeComplete-IEs.h"

#endif	/* _SecurityModeComplete_H_ */
#include <skeletons/asn_internal.h>
