/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-InterNodeDefinitions"
 * 	found in "38331-f60.asn"
 * 	`asn1c -S /usr/local/share/asn1c -fcompound-names -fskeletons-copy -findirect-choice -gen-PER -pdu=all -D nr-rrc`
 */

#ifndef	_UERadioPagingInformation_H_
#define	_UERadioPagingInformation_H_


#include <skeletons/asn_application.h>

/* Including external dependencies */
#include <skeletons/NULL.h>
#include <skeletons/constr_CHOICE.h>
#include <skeletons/constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum UERadioPagingInformation__criticalExtensions_PR {
	UERadioPagingInformation__criticalExtensions_PR_NOTHING,	/* No components present */
	UERadioPagingInformation__criticalExtensions_PR_c1,
	UERadioPagingInformation__criticalExtensions_PR_criticalExtensionsFuture
} UERadioPagingInformation__criticalExtensions_PR;
typedef enum UERadioPagingInformation__criticalExtensions__c1_PR {
	UERadioPagingInformation__criticalExtensions__c1_PR_NOTHING,	/* No components present */
	UERadioPagingInformation__criticalExtensions__c1_PR_ueRadioPagingInformation,
	UERadioPagingInformation__criticalExtensions__c1_PR_spare7,
	UERadioPagingInformation__criticalExtensions__c1_PR_spare6,
	UERadioPagingInformation__criticalExtensions__c1_PR_spare5,
	UERadioPagingInformation__criticalExtensions__c1_PR_spare4,
	UERadioPagingInformation__criticalExtensions__c1_PR_spare3,
	UERadioPagingInformation__criticalExtensions__c1_PR_spare2,
	UERadioPagingInformation__criticalExtensions__c1_PR_spare1
} UERadioPagingInformation__criticalExtensions__c1_PR;

/* Forward declarations */
struct UERadioPagingInformation_IEs;

/* UERadioPagingInformation */
typedef struct UERadioPagingInformation {
	struct UERadioPagingInformation__criticalExtensions {
		UERadioPagingInformation__criticalExtensions_PR present;
		union UERadioPagingInformation__criticalExtensions_u {
			struct UERadioPagingInformation__criticalExtensions__c1 {
				UERadioPagingInformation__criticalExtensions__c1_PR present;
				union UERadioPagingInformation__criticalExtensions__c1_u {
					struct UERadioPagingInformation_IEs	*ueRadioPagingInformation;
					NULL_t	 spare7;
					NULL_t	 spare6;
					NULL_t	 spare5;
					NULL_t	 spare4;
					NULL_t	 spare3;
					NULL_t	 spare2;
					NULL_t	 spare1;
				} choice;
				
				/* Context for parsing across buffer boundaries */
				asn_struct_ctx_t _asn_ctx;
			} *c1;
			struct UERadioPagingInformation__criticalExtensions__criticalExtensionsFuture {
				
				/* Context for parsing across buffer boundaries */
				asn_struct_ctx_t _asn_ctx;
			} *criticalExtensionsFuture;
		} choice;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} criticalExtensions;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} UERadioPagingInformation_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_UERadioPagingInformation;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "UERadioPagingInformation-IEs.h"

#endif	/* _UERadioPagingInformation_H_ */
#include <skeletons/asn_internal.h>
