/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "38331-f60.asn"
 * 	`asn1c -no-gen-example -fcompound-names -findirect-choice -gen-PER -pdu=all -fincludes-quoted -funnamed-unions -D nr-rrc`
 */

#ifndef	_PDCCH_ConfigCommon_H_
#define	_PDCCH_ConfigCommon_H_


#include "asn_application.h"

/* Including external dependencies */
#include "ControlResourceSetZero.h"
#include "SearchSpaceZero.h"
#include "SearchSpaceId.h"
#include "asn_SEQUENCE_OF.h"
#include "constr_SEQUENCE_OF.h"
#include "NativeInteger.h"
#include "constr_CHOICE.h"
#include "constr_SEQUENCE.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum PDCCH_ConfigCommon__ext1__firstPDCCH_MonitoringOccasionOfPO_PR {
	PDCCH_ConfigCommon__ext1__firstPDCCH_MonitoringOccasionOfPO_PR_NOTHING,	/* No components present */
	PDCCH_ConfigCommon__ext1__firstPDCCH_MonitoringOccasionOfPO_PR_sCS15KHZoneT,
	PDCCH_ConfigCommon__ext1__firstPDCCH_MonitoringOccasionOfPO_PR_sCS30KHZoneT_SCS15KHZhalfT,
	PDCCH_ConfigCommon__ext1__firstPDCCH_MonitoringOccasionOfPO_PR_sCS60KHZoneT_SCS30KHZhalfT_SCS15KHZquarterT,
	PDCCH_ConfigCommon__ext1__firstPDCCH_MonitoringOccasionOfPO_PR_sCS120KHZoneT_SCS60KHZhalfT_SCS30KHZquarterT_SCS15KHZoneEighthT,
	PDCCH_ConfigCommon__ext1__firstPDCCH_MonitoringOccasionOfPO_PR_sCS120KHZhalfT_SCS60KHZquarterT_SCS30KHZoneEighthT_SCS15KHZoneSixteenthT,
	PDCCH_ConfigCommon__ext1__firstPDCCH_MonitoringOccasionOfPO_PR_sCS120KHZquarterT_SCS60KHZoneEighthT_SCS30KHZoneSixteenthT,
	PDCCH_ConfigCommon__ext1__firstPDCCH_MonitoringOccasionOfPO_PR_sCS120KHZoneEighthT_SCS60KHZoneSixteenthT,
	PDCCH_ConfigCommon__ext1__firstPDCCH_MonitoringOccasionOfPO_PR_sCS120KHZoneSixteenthT
} PDCCH_ConfigCommon__ext1__firstPDCCH_MonitoringOccasionOfPO_PR;

/* Forward declarations */
struct ControlResourceSet;
struct SearchSpace;

/* PDCCH-ConfigCommon */
typedef struct PDCCH_ConfigCommon {
	ControlResourceSetZero_t	*controlResourceSetZero;	/* OPTIONAL */
	struct ControlResourceSet	*commonControlResourceSet;	/* OPTIONAL */
	SearchSpaceZero_t	*searchSpaceZero;	/* OPTIONAL */
	struct PDCCH_ConfigCommon__commonSearchSpaceList {
		A_SEQUENCE_OF(struct SearchSpace) list;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *commonSearchSpaceList;
	SearchSpaceId_t	*searchSpaceSIB1;	/* OPTIONAL */
	SearchSpaceId_t	*searchSpaceOtherSystemInformation;	/* OPTIONAL */
	SearchSpaceId_t	*pagingSearchSpace;	/* OPTIONAL */
	SearchSpaceId_t	*ra_SearchSpace;	/* OPTIONAL */
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	struct PDCCH_ConfigCommon__ext1 {
		struct PDCCH_ConfigCommon__ext1__firstPDCCH_MonitoringOccasionOfPO {
			PDCCH_ConfigCommon__ext1__firstPDCCH_MonitoringOccasionOfPO_PR present;
			union {
				struct PDCCH_ConfigCommon__ext1__firstPDCCH_MonitoringOccasionOfPO__sCS15KHZoneT {
					A_SEQUENCE_OF(long) list;
					
					/* Context for parsing across buffer boundaries */
					asn_struct_ctx_t _asn_ctx;
				} *sCS15KHZoneT;
				struct PDCCH_ConfigCommon__ext1__firstPDCCH_MonitoringOccasionOfPO__sCS30KHZoneT_SCS15KHZhalfT {
					A_SEQUENCE_OF(long) list;
					
					/* Context for parsing across buffer boundaries */
					asn_struct_ctx_t _asn_ctx;
				} *sCS30KHZoneT_SCS15KHZhalfT;
				struct PDCCH_ConfigCommon__ext1__firstPDCCH_MonitoringOccasionOfPO__sCS60KHZoneT_SCS30KHZhalfT_SCS15KHZquarterT {
					A_SEQUENCE_OF(long) list;
					
					/* Context for parsing across buffer boundaries */
					asn_struct_ctx_t _asn_ctx;
				} *sCS60KHZoneT_SCS30KHZhalfT_SCS15KHZquarterT;
				struct PDCCH_ConfigCommon__ext1__firstPDCCH_MonitoringOccasionOfPO__sCS120KHZoneT_SCS60KHZhalfT_SCS30KHZquarterT_SCS15KHZoneEighthT {
					A_SEQUENCE_OF(long) list;
					
					/* Context for parsing across buffer boundaries */
					asn_struct_ctx_t _asn_ctx;
				} *sCS120KHZoneT_SCS60KHZhalfT_SCS30KHZquarterT_SCS15KHZoneEighthT;
				struct PDCCH_ConfigCommon__ext1__firstPDCCH_MonitoringOccasionOfPO__sCS120KHZhalfT_SCS60KHZquarterT_SCS30KHZoneEighthT_SCS15KHZoneSixteenthT {
					A_SEQUENCE_OF(long) list;
					
					/* Context for parsing across buffer boundaries */
					asn_struct_ctx_t _asn_ctx;
				} *sCS120KHZhalfT_SCS60KHZquarterT_SCS30KHZoneEighthT_SCS15KHZoneSixteenthT;
				struct PDCCH_ConfigCommon__ext1__firstPDCCH_MonitoringOccasionOfPO__sCS120KHZquarterT_SCS60KHZoneEighthT_SCS30KHZoneSixteenthT {
					A_SEQUENCE_OF(long) list;
					
					/* Context for parsing across buffer boundaries */
					asn_struct_ctx_t _asn_ctx;
				} *sCS120KHZquarterT_SCS60KHZoneEighthT_SCS30KHZoneSixteenthT;
				struct PDCCH_ConfigCommon__ext1__firstPDCCH_MonitoringOccasionOfPO__sCS120KHZoneEighthT_SCS60KHZoneSixteenthT {
					A_SEQUENCE_OF(long) list;
					
					/* Context for parsing across buffer boundaries */
					asn_struct_ctx_t _asn_ctx;
				} *sCS120KHZoneEighthT_SCS60KHZoneSixteenthT;
				struct PDCCH_ConfigCommon__ext1__firstPDCCH_MonitoringOccasionOfPO__sCS120KHZoneSixteenthT {
					A_SEQUENCE_OF(long) list;
					
					/* Context for parsing across buffer boundaries */
					asn_struct_ctx_t _asn_ctx;
				} *sCS120KHZoneSixteenthT;
			};
			
			/* Context for parsing across buffer boundaries */
			asn_struct_ctx_t _asn_ctx;
		} *firstPDCCH_MonitoringOccasionOfPO;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *ext1;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} PDCCH_ConfigCommon_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_PDCCH_ConfigCommon;
extern asn_SEQUENCE_specifics_t asn_SPC_PDCCH_ConfigCommon_specs_1;
extern asn_TYPE_member_t asn_MBR_PDCCH_ConfigCommon_1[9];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "ControlResourceSet.h"
#include "SearchSpace.h"

#endif	/* _PDCCH_ConfigCommon_H_ */
#include "asn_internal.h"
