/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "38331-f60.asn"
 * 	`asn1c -S /usr/local/share/asn1c -fcompound-names -fskeletons-copy -findirect-choice -gen-PER -pdu=all -D nr-rrc`
 */

#ifndef	_MeasurementReport_H_
#define	_MeasurementReport_H_


#include <skeletons/asn_application.h>

/* Including external dependencies */
#include <skeletons/constr_CHOICE.h>
#include <skeletons/constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum MeasurementReport__criticalExtensions_PR {
	MeasurementReport__criticalExtensions_PR_NOTHING,	/* No components present */
	MeasurementReport__criticalExtensions_PR_measurementReport,
	MeasurementReport__criticalExtensions_PR_criticalExtensionsFuture
} MeasurementReport__criticalExtensions_PR;

/* Forward declarations */
struct MeasurementReport_IEs;

/* MeasurementReport */
typedef struct MeasurementReport {
	struct MeasurementReport__criticalExtensions {
		MeasurementReport__criticalExtensions_PR present;
		union MeasurementReport__criticalExtensions_u {
			struct MeasurementReport_IEs	*measurementReport;
			struct MeasurementReport__criticalExtensions__criticalExtensionsFuture {
				
				/* Context for parsing across buffer boundaries */
				asn_struct_ctx_t _asn_ctx;
			} *criticalExtensionsFuture;
		} choice;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} criticalExtensions;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} MeasurementReport_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_MeasurementReport;
extern asn_SEQUENCE_specifics_t asn_SPC_MeasurementReport_specs_1;
extern asn_TYPE_member_t asn_MBR_MeasurementReport_1[1];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "MeasurementReport-IEs.h"

#endif	/* _MeasurementReport_H_ */
#include <skeletons/asn_internal.h>
