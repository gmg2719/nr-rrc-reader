/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "38331-f60.asn"
 * 	`asn1c -S /usr/local/share/asn1c -fcompound-names -fskeletons-copy -findirect-choice -gen-PER -pdu=all -D nr-rrc`
 */

#ifndef	_PUSCH_PowerControl_H_
#define	_PUSCH_PowerControl_H_


#include <skeletons/asn_application.h>

/* Including external dependencies */
#include <skeletons/NativeEnumerated.h>
#include <skeletons/NativeInteger.h>
#include <skeletons/asn_SEQUENCE_OF.h>
#include <skeletons/constr_SEQUENCE.h>
#include <skeletons/constr_SEQUENCE_OF.h>

#include "Alpha.h"
#include "PUSCH-PathlossReferenceRS-Id.h"
#include "SRI-PUSCH-PowerControlId.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum PUSCH_PowerControl__tpc_Accumulation {
	PUSCH_PowerControl__tpc_Accumulation_disabled	= 0
} e_PUSCH_PowerControl__tpc_Accumulation;
typedef enum PUSCH_PowerControl__twoPUSCH_PC_AdjustmentStates {
	PUSCH_PowerControl__twoPUSCH_PC_AdjustmentStates_twoStates	= 0
} e_PUSCH_PowerControl__twoPUSCH_PC_AdjustmentStates;
typedef enum PUSCH_PowerControl__deltaMCS {
	PUSCH_PowerControl__deltaMCS_enabled	= 0
} e_PUSCH_PowerControl__deltaMCS;

/* Forward declarations */
struct P0_PUSCH_AlphaSet;
struct PUSCH_PathlossReferenceRS;
struct SRI_PUSCH_PowerControl;

/* PUSCH-PowerControl */
typedef struct PUSCH_PowerControl {
	long	*tpc_Accumulation;	/* OPTIONAL */
	Alpha_t	*msg3_Alpha;	/* OPTIONAL */
	long	*p0_NominalWithoutGrant;	/* OPTIONAL */
	struct PUSCH_PowerControl__p0_AlphaSets {
		A_SEQUENCE_OF(struct P0_PUSCH_AlphaSet) list;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *p0_AlphaSets;
	struct PUSCH_PowerControl__pathlossReferenceRSToAddModList {
		A_SEQUENCE_OF(struct PUSCH_PathlossReferenceRS) list;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *pathlossReferenceRSToAddModList;
	struct PUSCH_PowerControl__pathlossReferenceRSToReleaseList {
		A_SEQUENCE_OF(PUSCH_PathlossReferenceRS_Id_t) list;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *pathlossReferenceRSToReleaseList;
	long	*twoPUSCH_PC_AdjustmentStates;	/* OPTIONAL */
	long	*deltaMCS;	/* OPTIONAL */
	struct PUSCH_PowerControl__sri_PUSCH_MappingToAddModList {
		A_SEQUENCE_OF(struct SRI_PUSCH_PowerControl) list;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *sri_PUSCH_MappingToAddModList;
	struct PUSCH_PowerControl__sri_PUSCH_MappingToReleaseList {
		A_SEQUENCE_OF(SRI_PUSCH_PowerControlId_t) list;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *sri_PUSCH_MappingToReleaseList;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} PUSCH_PowerControl_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_tpc_Accumulation_2;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_twoPUSCH_PC_AdjustmentStates_12;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_deltaMCS_14;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_PUSCH_PowerControl;
extern asn_SEQUENCE_specifics_t asn_SPC_PUSCH_PowerControl_specs_1;
extern asn_TYPE_member_t asn_MBR_PUSCH_PowerControl_1[10];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "P0-PUSCH-AlphaSet.h"
#include "PUSCH-PathlossReferenceRS.h"
#include "SRI-PUSCH-PowerControl.h"

#endif	/* _PUSCH_PowerControl_H_ */
#include <skeletons/asn_internal.h>
