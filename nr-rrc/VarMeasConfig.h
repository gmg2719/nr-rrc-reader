/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-UE-Variables"
 * 	found in "38331-f60.asn"
 * 	`asn1c -S /usr/local/share/asn1c -fcompound-names -fskeletons-copy -findirect-choice -gen-PER -pdu=all -D nr-rrc`
 */

#ifndef	_VarMeasConfig_H_
#define	_VarMeasConfig_H_


#include <skeletons/asn_application.h>

/* Including external dependencies */
#include <skeletons/constr_CHOICE.h>
#include <skeletons/constr_SEQUENCE.h>

#include "RSRP-Range.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum VarMeasConfig__s_MeasureConfig_PR {
	VarMeasConfig__s_MeasureConfig_PR_NOTHING,	/* No components present */
	VarMeasConfig__s_MeasureConfig_PR_ssb_RSRP,
	VarMeasConfig__s_MeasureConfig_PR_csi_RSRP
} VarMeasConfig__s_MeasureConfig_PR;

/* Forward declarations */
struct MeasIdToAddModList;
struct MeasObjectToAddModList;
struct ReportConfigToAddModList;
struct QuantityConfig;

/* VarMeasConfig */
typedef struct VarMeasConfig {
	struct MeasIdToAddModList	*measIdList;	/* OPTIONAL */
	struct MeasObjectToAddModList	*measObjectList;	/* OPTIONAL */
	struct ReportConfigToAddModList	*reportConfigList;	/* OPTIONAL */
	struct QuantityConfig	*quantityConfig;	/* OPTIONAL */
	struct VarMeasConfig__s_MeasureConfig {
		VarMeasConfig__s_MeasureConfig_PR present;
		union VarMeasConfig__s_MeasureConfig_u {
			RSRP_Range_t	 ssb_RSRP;
			RSRP_Range_t	 csi_RSRP;
		} choice;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *s_MeasureConfig;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} VarMeasConfig_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_VarMeasConfig;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "MeasIdToAddModList.h"
#include "MeasObjectToAddModList.h"
#include "ReportConfigToAddModList.h"
#include "QuantityConfig.h"

#endif	/* _VarMeasConfig_H_ */
#include <skeletons/asn_internal.h>
