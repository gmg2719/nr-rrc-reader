/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "38331-f60.asn"
 * 	`asn1c -S /usr/local/share/asn1c -fcompound-names -fskeletons-copy -findirect-choice -gen-PER -pdu=all -D nr-rrc`
 */

#ifndef	_ULInformationTransferMRDC_H_
#define	_ULInformationTransferMRDC_H_


#include <skeletons/asn_application.h>

/* Including external dependencies */
#include <skeletons/NULL.h>
#include <skeletons/constr_CHOICE.h>
#include <skeletons/constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum ULInformationTransferMRDC__criticalExtensions_PR {
	ULInformationTransferMRDC__criticalExtensions_PR_NOTHING,	/* No components present */
	ULInformationTransferMRDC__criticalExtensions_PR_c1,
	ULInformationTransferMRDC__criticalExtensions_PR_criticalExtensionsFuture
} ULInformationTransferMRDC__criticalExtensions_PR;
typedef enum ULInformationTransferMRDC__criticalExtensions__c1_PR {
	ULInformationTransferMRDC__criticalExtensions__c1_PR_NOTHING,	/* No components present */
	ULInformationTransferMRDC__criticalExtensions__c1_PR_ulInformationTransferMRDC,
	ULInformationTransferMRDC__criticalExtensions__c1_PR_spare3,
	ULInformationTransferMRDC__criticalExtensions__c1_PR_spare2,
	ULInformationTransferMRDC__criticalExtensions__c1_PR_spare1
} ULInformationTransferMRDC__criticalExtensions__c1_PR;

/* Forward declarations */
struct ULInformationTransferMRDC_IEs;

/* ULInformationTransferMRDC */
typedef struct ULInformationTransferMRDC {
	struct ULInformationTransferMRDC__criticalExtensions {
		ULInformationTransferMRDC__criticalExtensions_PR present;
		union ULInformationTransferMRDC__criticalExtensions_u {
			struct ULInformationTransferMRDC__criticalExtensions__c1 {
				ULInformationTransferMRDC__criticalExtensions__c1_PR present;
				union ULInformationTransferMRDC__criticalExtensions__c1_u {
					struct ULInformationTransferMRDC_IEs	*ulInformationTransferMRDC;
					NULL_t	 spare3;
					NULL_t	 spare2;
					NULL_t	 spare1;
				} choice;
				
				/* Context for parsing across buffer boundaries */
				asn_struct_ctx_t _asn_ctx;
			} *c1;
			struct ULInformationTransferMRDC__criticalExtensions__criticalExtensionsFuture {
				
				/* Context for parsing across buffer boundaries */
				asn_struct_ctx_t _asn_ctx;
			} *criticalExtensionsFuture;
		} choice;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} criticalExtensions;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} ULInformationTransferMRDC_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_ULInformationTransferMRDC;
extern asn_SEQUENCE_specifics_t asn_SPC_ULInformationTransferMRDC_specs_1;
extern asn_TYPE_member_t asn_MBR_ULInformationTransferMRDC_1[1];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "ULInformationTransferMRDC-IEs.h"

#endif	/* _ULInformationTransferMRDC_H_ */
#include <skeletons/asn_internal.h>