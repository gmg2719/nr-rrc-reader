/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "38331-f60.asn"
 * 	`asn1c -fcompound-names -findirect-choice -gen-PER -pdu=all -no-gen-example -fincludes-quoted -funnamed-unions -D nr-rrc`
 */

#ifndef	_UEAssistanceInformation_H_
#define	_UEAssistanceInformation_H_


#include "asn_application.h"

/* Including external dependencies */
#include "constr_SEQUENCE.h"
#include "constr_CHOICE.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum UEAssistanceInformation__criticalExtensions_PR {
	UEAssistanceInformation__criticalExtensions_PR_NOTHING,	/* No components present */
	UEAssistanceInformation__criticalExtensions_PR_ueAssistanceInformation,
	UEAssistanceInformation__criticalExtensions_PR_criticalExtensionsFuture
} UEAssistanceInformation__criticalExtensions_PR;

/* Forward declarations */
struct UEAssistanceInformation_IEs;

/* UEAssistanceInformation */
typedef struct UEAssistanceInformation {
	struct UEAssistanceInformation__criticalExtensions {
		UEAssistanceInformation__criticalExtensions_PR present;
		union {
			struct UEAssistanceInformation_IEs	*ueAssistanceInformation;
			struct UEAssistanceInformation__criticalExtensions__criticalExtensionsFuture {
				
				/* Context for parsing across buffer boundaries */
				asn_struct_ctx_t _asn_ctx;
			} *criticalExtensionsFuture;
		};
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} criticalExtensions;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} UEAssistanceInformation_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_UEAssistanceInformation;
extern asn_SEQUENCE_specifics_t asn_SPC_UEAssistanceInformation_specs_1;
extern asn_TYPE_member_t asn_MBR_UEAssistanceInformation_1[1];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "UEAssistanceInformation-IEs.h"

#endif	/* _UEAssistanceInformation_H_ */
#include "asn_internal.h"
