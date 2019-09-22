/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "38331-f60.asn"
 * 	`asn1c -S /usr/local/share/asn1c -fcompound-names -fskeletons-copy -findirect-choice -gen-PER -pdu=all -D nr-rrc`
 */

#ifndef	_PUCCH_SpatialRelationInfo_H_
#define	_PUCCH_SpatialRelationInfo_H_


#include <skeletons/asn_application.h>

/* Including external dependencies */
#include <skeletons/NativeEnumerated.h>
#include <skeletons/constr_CHOICE.h>
#include <skeletons/constr_SEQUENCE.h>

#include "BWP-Id.h"
#include "NZP-CSI-RS-ResourceId.h"
#include "P0-PUCCH-Id.h"
#include "PUCCH-PathlossReferenceRS-Id.h"
#include "PUCCH-SpatialRelationInfoId.h"
#include "SRS-ResourceId.h"
#include "SSB-Index.h"
#include "ServCellIndex.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum PUCCH_SpatialRelationInfo__referenceSignal_PR {
	PUCCH_SpatialRelationInfo__referenceSignal_PR_NOTHING,	/* No components present */
	PUCCH_SpatialRelationInfo__referenceSignal_PR_ssb_Index,
	PUCCH_SpatialRelationInfo__referenceSignal_PR_csi_RS_Index,
	PUCCH_SpatialRelationInfo__referenceSignal_PR_srs
} PUCCH_SpatialRelationInfo__referenceSignal_PR;
typedef enum PUCCH_SpatialRelationInfo__closedLoopIndex {
	PUCCH_SpatialRelationInfo__closedLoopIndex_i0	= 0,
	PUCCH_SpatialRelationInfo__closedLoopIndex_i1	= 1
} e_PUCCH_SpatialRelationInfo__closedLoopIndex;

/* PUCCH-SpatialRelationInfo */
typedef struct PUCCH_SpatialRelationInfo {
	PUCCH_SpatialRelationInfoId_t	 pucch_SpatialRelationInfoId;
	ServCellIndex_t	*servingCellId;	/* OPTIONAL */
	struct PUCCH_SpatialRelationInfo__referenceSignal {
		PUCCH_SpatialRelationInfo__referenceSignal_PR present;
		union PUCCH_SpatialRelationInfo__referenceSignal_u {
			SSB_Index_t	 ssb_Index;
			NZP_CSI_RS_ResourceId_t	 csi_RS_Index;
			struct PUCCH_SpatialRelationInfo__referenceSignal__srs {
				SRS_ResourceId_t	 resource;
				BWP_Id_t	 uplinkBWP;
				
				/* Context for parsing across buffer boundaries */
				asn_struct_ctx_t _asn_ctx;
			} *srs;
		} choice;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} referenceSignal;
	PUCCH_PathlossReferenceRS_Id_t	 pucch_PathlossReferenceRS_Id;
	P0_PUCCH_Id_t	 p0_PUCCH_Id;
	long	 closedLoopIndex;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} PUCCH_SpatialRelationInfo_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_closedLoopIndex_12;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_PUCCH_SpatialRelationInfo;
extern asn_SEQUENCE_specifics_t asn_SPC_PUCCH_SpatialRelationInfo_specs_1;
extern asn_TYPE_member_t asn_MBR_PUCCH_SpatialRelationInfo_1[6];

#ifdef __cplusplus
}
#endif

#endif	/* _PUCCH_SpatialRelationInfo_H_ */
#include <skeletons/asn_internal.h>