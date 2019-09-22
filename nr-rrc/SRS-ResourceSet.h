/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "38331-f60.asn"
 * 	`asn1c -fcompound-names -findirect-choice -gen-PER -pdu=all -no-gen-example -fincludes-quoted -funnamed-unions -D nr-rrc`
 */

#ifndef	_SRS_ResourceSet_H_
#define	_SRS_ResourceSet_H_


#include "asn_application.h"

/* Including external dependencies */
#include "SRS-ResourceSetId.h"
#include "NativeEnumerated.h"
#include "Alpha.h"
#include "NativeInteger.h"
#include "SRS-ResourceId.h"
#include "asn_SEQUENCE_OF.h"
#include "constr_SEQUENCE_OF.h"
#include "NZP-CSI-RS-ResourceId.h"
#include "constr_SEQUENCE.h"
#include "constr_CHOICE.h"
#include "SSB-Index.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum SRS_ResourceSet__resourceType_PR {
	SRS_ResourceSet__resourceType_PR_NOTHING,	/* No components present */
	SRS_ResourceSet__resourceType_PR_aperiodic,
	SRS_ResourceSet__resourceType_PR_semi_persistent,
	SRS_ResourceSet__resourceType_PR_periodic
} SRS_ResourceSet__resourceType_PR;
typedef enum SRS_ResourceSet__usage {
	SRS_ResourceSet__usage_beamManagement	= 0,
	SRS_ResourceSet__usage_codebook	= 1,
	SRS_ResourceSet__usage_nonCodebook	= 2,
	SRS_ResourceSet__usage_antennaSwitching	= 3
} e_SRS_ResourceSet__usage;
typedef enum SRS_ResourceSet__pathlossReferenceRS_PR {
	SRS_ResourceSet__pathlossReferenceRS_PR_NOTHING,	/* No components present */
	SRS_ResourceSet__pathlossReferenceRS_PR_ssb_Index,
	SRS_ResourceSet__pathlossReferenceRS_PR_csi_RS_Index
} SRS_ResourceSet__pathlossReferenceRS_PR;
typedef enum SRS_ResourceSet__srs_PowerControlAdjustmentStates {
	SRS_ResourceSet__srs_PowerControlAdjustmentStates_sameAsFci2	= 0,
	SRS_ResourceSet__srs_PowerControlAdjustmentStates_separateClosedLoop	= 1
} e_SRS_ResourceSet__srs_PowerControlAdjustmentStates;

/* SRS-ResourceSet */
typedef struct SRS_ResourceSet {
	SRS_ResourceSetId_t	 srs_ResourceSetId;
	struct SRS_ResourceSet__srs_ResourceIdList {
		A_SEQUENCE_OF(SRS_ResourceId_t) list;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *srs_ResourceIdList;
	struct SRS_ResourceSet__resourceType {
		SRS_ResourceSet__resourceType_PR present;
		union {
			struct SRS_ResourceSet__resourceType__aperiodic {
				long	 aperiodicSRS_ResourceTrigger;
				NZP_CSI_RS_ResourceId_t	*csi_RS;	/* OPTIONAL */
				long	*slotOffset;	/* OPTIONAL */
				/*
				 * This type is extensible,
				 * possible extensions are below.
				 */
				struct SRS_ResourceSet__resourceType__aperiodic__ext1 {
					struct SRS_ResourceSet__resourceType__aperiodic__ext1__aperiodicSRS_ResourceTriggerList_v1530 {
						A_SEQUENCE_OF(long) list;
						
						/* Context for parsing across buffer boundaries */
						asn_struct_ctx_t _asn_ctx;
					} *aperiodicSRS_ResourceTriggerList_v1530;
					
					/* Context for parsing across buffer boundaries */
					asn_struct_ctx_t _asn_ctx;
				} *ext1;
				
				/* Context for parsing across buffer boundaries */
				asn_struct_ctx_t _asn_ctx;
			} *aperiodic;
			struct SRS_ResourceSet__resourceType__semi_persistent {
				NZP_CSI_RS_ResourceId_t	*associatedCSI_RS;	/* OPTIONAL */
				/*
				 * This type is extensible,
				 * possible extensions are below.
				 */
				
				/* Context for parsing across buffer boundaries */
				asn_struct_ctx_t _asn_ctx;
			} *semi_persistent;
			struct SRS_ResourceSet__resourceType__periodic {
				NZP_CSI_RS_ResourceId_t	*associatedCSI_RS;	/* OPTIONAL */
				/*
				 * This type is extensible,
				 * possible extensions are below.
				 */
				
				/* Context for parsing across buffer boundaries */
				asn_struct_ctx_t _asn_ctx;
			} *periodic;
		};
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} resourceType;
	long	 usage;
	Alpha_t	*alpha;	/* OPTIONAL */
	long	*p0;	/* OPTIONAL */
	struct SRS_ResourceSet__pathlossReferenceRS {
		SRS_ResourceSet__pathlossReferenceRS_PR present;
		union {
			SSB_Index_t	 ssb_Index;
			NZP_CSI_RS_ResourceId_t	 csi_RS_Index;
		};
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *pathlossReferenceRS;
	long	*srs_PowerControlAdjustmentStates;	/* OPTIONAL */
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} SRS_ResourceSet_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_usage_20;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_srs_PowerControlAdjustmentStates_30;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_SRS_ResourceSet;
extern asn_SEQUENCE_specifics_t asn_SPC_SRS_ResourceSet_specs_1;
extern asn_TYPE_member_t asn_MBR_SRS_ResourceSet_1[8];

#ifdef __cplusplus
}
#endif

#endif	/* _SRS_ResourceSet_H_ */
#include "asn_internal.h"
