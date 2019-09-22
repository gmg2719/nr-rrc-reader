/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "38331-f60.asn"
 * 	`asn1c -S /usr/local/share/asn1c -fcompound-names -fskeletons-copy -findirect-choice -gen-PER -pdu=all -D nr-rrc`
 */

#ifndef	_UEAssistanceInformation_IEs_H_
#define	_UEAssistanceInformation_IEs_H_


#include <skeletons/asn_application.h>

/* Including external dependencies */
#include <skeletons/OCTET_STRING.h>
#include <skeletons/constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct DelayBudgetReport;
struct UEAssistanceInformation_v1540_IEs;

/* UEAssistanceInformation-IEs */
typedef struct UEAssistanceInformation_IEs {
	struct DelayBudgetReport	*delayBudgetReport;	/* OPTIONAL */
	OCTET_STRING_t	*lateNonCriticalExtension;	/* OPTIONAL */
	struct UEAssistanceInformation_v1540_IEs	*nonCriticalExtension;	/* OPTIONAL */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} UEAssistanceInformation_IEs_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_UEAssistanceInformation_IEs;
extern asn_SEQUENCE_specifics_t asn_SPC_UEAssistanceInformation_IEs_specs_1;
extern asn_TYPE_member_t asn_MBR_UEAssistanceInformation_IEs_1[3];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "DelayBudgetReport.h"
#include "UEAssistanceInformation-v1540-IEs.h"

#endif	/* _UEAssistanceInformation_IEs_H_ */
#include <skeletons/asn_internal.h>
