/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "38331-f60.asn"
 * 	`asn1c -fcompound-names -findirect-choice -gen-PER -pdu=all -no-gen-example -no-gen-OER -fincludes-quoted -funnamed-unions -D nr-rrc-f60`
 */

#ifndef	_LocationMeasurementInfo_H_
#define	_LocationMeasurementInfo_H_


#include "asn_application.h"

/* Including external dependencies */
#include "NULL.h"
#include "constr_CHOICE.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum LocationMeasurementInfo_PR {
	LocationMeasurementInfo_PR_NOTHING,	/* No components present */
	LocationMeasurementInfo_PR_eutra_RSTD,
	/* Extensions may appear below */
	LocationMeasurementInfo_PR_eutra_FineTimingDetection
} LocationMeasurementInfo_PR;

/* Forward declarations */
struct EUTRA_RSTD_InfoList;

/* LocationMeasurementInfo */
typedef struct LocationMeasurementInfo {
	LocationMeasurementInfo_PR present;
	union {
		struct EUTRA_RSTD_InfoList	*eutra_RSTD;
		/*
		 * This type is extensible,
		 * possible extensions are below.
		 */
		NULL_t	 eutra_FineTimingDetection;
	};
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} LocationMeasurementInfo_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_LocationMeasurementInfo;
extern asn_CHOICE_specifics_t asn_SPC_LocationMeasurementInfo_specs_1;
extern asn_TYPE_member_t asn_MBR_LocationMeasurementInfo_1[2];
extern asn_per_constraints_t asn_PER_type_LocationMeasurementInfo_constr_1;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "EUTRA-RSTD-InfoList.h"

#endif	/* _LocationMeasurementInfo_H_ */
#include "asn_internal.h"
