/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "38331-f60.asn"
 * 	`asn1c -S /usr/local/share/asn1c -fcompound-names -fskeletons-copy -findirect-choice -gen-PER -pdu=all -D nr-rrc`
 */

#ifndef	_SCGFailureInformation_H_
#define	_SCGFailureInformation_H_


#include <skeletons/asn_application.h>

/* Including external dependencies */
#include <skeletons/constr_CHOICE.h>
#include <skeletons/constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum SCGFailureInformation__criticalExtensions_PR {
	SCGFailureInformation__criticalExtensions_PR_NOTHING,	/* No components present */
	SCGFailureInformation__criticalExtensions_PR_scgFailureInformation,
	SCGFailureInformation__criticalExtensions_PR_criticalExtensionsFuture
} SCGFailureInformation__criticalExtensions_PR;

/* Forward declarations */
struct SCGFailureInformation_IEs;

/* SCGFailureInformation */
typedef struct SCGFailureInformation {
	struct SCGFailureInformation__criticalExtensions {
		SCGFailureInformation__criticalExtensions_PR present;
		union SCGFailureInformation__criticalExtensions_u {
			struct SCGFailureInformation_IEs	*scgFailureInformation;
			struct SCGFailureInformation__criticalExtensions__criticalExtensionsFuture {
				
				/* Context for parsing across buffer boundaries */
				asn_struct_ctx_t _asn_ctx;
			} *criticalExtensionsFuture;
		} choice;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} criticalExtensions;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} SCGFailureInformation_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_SCGFailureInformation;
extern asn_SEQUENCE_specifics_t asn_SPC_SCGFailureInformation_specs_1;
extern asn_TYPE_member_t asn_MBR_SCGFailureInformation_1[1];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "SCGFailureInformation-IEs.h"

#endif	/* _SCGFailureInformation_H_ */
#include <skeletons/asn_internal.h>
