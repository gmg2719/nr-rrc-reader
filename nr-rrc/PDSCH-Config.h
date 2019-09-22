/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "38331-f60.asn"
 * 	`asn1c -fcompound-names -findirect-choice -gen-PER -pdu=all -no-gen-example -no-gen-OER -fincludes-quoted -funnamed-unions -D nr-rrc-f60`
 */

#ifndef	_PDSCH_Config_H_
#define	_PDSCH_Config_H_


#include "asn_application.h"

/* Including external dependencies */
#include "NativeInteger.h"
#include "NativeEnumerated.h"
#include "asn_SEQUENCE_OF.h"
#include "constr_SEQUENCE_OF.h"
#include "TCI-StateId.h"
#include "RateMatchPatternId.h"
#include "constr_SEQUENCE.h"
#include "constr_CHOICE.h"
#include "ZP-CSI-RS-ResourceId.h"
#include "ZP-CSI-RS-ResourceSetId.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum PDSCH_Config__vrb_ToPRB_Interleaver {
	PDSCH_Config__vrb_ToPRB_Interleaver_n2	= 0,
	PDSCH_Config__vrb_ToPRB_Interleaver_n4	= 1
} e_PDSCH_Config__vrb_ToPRB_Interleaver;
typedef enum PDSCH_Config__resourceAllocation {
	PDSCH_Config__resourceAllocation_resourceAllocationType0	= 0,
	PDSCH_Config__resourceAllocation_resourceAllocationType1	= 1,
	PDSCH_Config__resourceAllocation_dynamicSwitch	= 2
} e_PDSCH_Config__resourceAllocation;
typedef enum PDSCH_Config__pdsch_AggregationFactor {
	PDSCH_Config__pdsch_AggregationFactor_n2	= 0,
	PDSCH_Config__pdsch_AggregationFactor_n4	= 1,
	PDSCH_Config__pdsch_AggregationFactor_n8	= 2
} e_PDSCH_Config__pdsch_AggregationFactor;
typedef enum PDSCH_Config__rbg_Size {
	PDSCH_Config__rbg_Size_config1	= 0,
	PDSCH_Config__rbg_Size_config2	= 1
} e_PDSCH_Config__rbg_Size;
typedef enum PDSCH_Config__mcs_Table {
	PDSCH_Config__mcs_Table_qam256	= 0,
	PDSCH_Config__mcs_Table_qam64LowSE	= 1
} e_PDSCH_Config__mcs_Table;
typedef enum PDSCH_Config__maxNrofCodeWordsScheduledByDCI {
	PDSCH_Config__maxNrofCodeWordsScheduledByDCI_n1	= 0,
	PDSCH_Config__maxNrofCodeWordsScheduledByDCI_n2	= 1
} e_PDSCH_Config__maxNrofCodeWordsScheduledByDCI;
typedef enum PDSCH_Config__prb_BundlingType_PR {
	PDSCH_Config__prb_BundlingType_PR_NOTHING,	/* No components present */
	PDSCH_Config__prb_BundlingType_PR_staticBundling,
	PDSCH_Config__prb_BundlingType_PR_dynamicBundling
} PDSCH_Config__prb_BundlingType_PR;
typedef enum PDSCH_Config__prb_BundlingType__staticBundling__bundleSize {
	PDSCH_Config__prb_BundlingType__staticBundling__bundleSize_n4	= 0,
	PDSCH_Config__prb_BundlingType__staticBundling__bundleSize_wideband	= 1
} e_PDSCH_Config__prb_BundlingType__staticBundling__bundleSize;
typedef enum PDSCH_Config__prb_BundlingType__dynamicBundling__bundleSizeSet1 {
	PDSCH_Config__prb_BundlingType__dynamicBundling__bundleSizeSet1_n4	= 0,
	PDSCH_Config__prb_BundlingType__dynamicBundling__bundleSizeSet1_wideband	= 1,
	PDSCH_Config__prb_BundlingType__dynamicBundling__bundleSizeSet1_n2_wideband	= 2,
	PDSCH_Config__prb_BundlingType__dynamicBundling__bundleSizeSet1_n4_wideband	= 3
} e_PDSCH_Config__prb_BundlingType__dynamicBundling__bundleSizeSet1;
typedef enum PDSCH_Config__prb_BundlingType__dynamicBundling__bundleSizeSet2 {
	PDSCH_Config__prb_BundlingType__dynamicBundling__bundleSizeSet2_n4	= 0,
	PDSCH_Config__prb_BundlingType__dynamicBundling__bundleSizeSet2_wideband	= 1
} e_PDSCH_Config__prb_BundlingType__dynamicBundling__bundleSizeSet2;

/* Forward declarations */
struct SetupRelease_DMRS_DownlinkConfig;
struct SetupRelease_PDSCH_TimeDomainResourceAllocationList;
struct RateMatchPatternGroup;
struct SetupRelease_ZP_CSI_RS_ResourceSet;
struct TCI_State;
struct RateMatchPattern;
struct ZP_CSI_RS_Resource;
struct ZP_CSI_RS_ResourceSet;

/* PDSCH-Config */
typedef struct PDSCH_Config {
	long	*dataScramblingIdentityPDSCH;	/* OPTIONAL */
	struct SetupRelease_DMRS_DownlinkConfig	*dmrs_DownlinkForPDSCH_MappingTypeA;	/* OPTIONAL */
	struct SetupRelease_DMRS_DownlinkConfig	*dmrs_DownlinkForPDSCH_MappingTypeB;	/* OPTIONAL */
	struct PDSCH_Config__tci_StatesToAddModList {
		A_SEQUENCE_OF(struct TCI_State) list;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *tci_StatesToAddModList;
	struct PDSCH_Config__tci_StatesToReleaseList {
		A_SEQUENCE_OF(TCI_StateId_t) list;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *tci_StatesToReleaseList;
	long	*vrb_ToPRB_Interleaver;	/* OPTIONAL */
	long	 resourceAllocation;
	struct SetupRelease_PDSCH_TimeDomainResourceAllocationList	*pdsch_TimeDomainAllocationList;	/* OPTIONAL */
	long	*pdsch_AggregationFactor;	/* OPTIONAL */
	struct PDSCH_Config__rateMatchPatternToAddModList {
		A_SEQUENCE_OF(struct RateMatchPattern) list;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *rateMatchPatternToAddModList;
	struct PDSCH_Config__rateMatchPatternToReleaseList {
		A_SEQUENCE_OF(RateMatchPatternId_t) list;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *rateMatchPatternToReleaseList;
	struct RateMatchPatternGroup	*rateMatchPatternGroup1;	/* OPTIONAL */
	struct RateMatchPatternGroup	*rateMatchPatternGroup2;	/* OPTIONAL */
	long	 rbg_Size;
	long	*mcs_Table;	/* OPTIONAL */
	long	*maxNrofCodeWordsScheduledByDCI;	/* OPTIONAL */
	struct PDSCH_Config__prb_BundlingType {
		PDSCH_Config__prb_BundlingType_PR present;
		union {
			struct PDSCH_Config__prb_BundlingType__staticBundling {
				long	*bundleSize;	/* OPTIONAL */
				
				/* Context for parsing across buffer boundaries */
				asn_struct_ctx_t _asn_ctx;
			} *staticBundling;
			struct PDSCH_Config__prb_BundlingType__dynamicBundling {
				long	*bundleSizeSet1;	/* OPTIONAL */
				long	*bundleSizeSet2;	/* OPTIONAL */
				
				/* Context for parsing across buffer boundaries */
				asn_struct_ctx_t _asn_ctx;
			} *dynamicBundling;
		};
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} prb_BundlingType;
	struct PDSCH_Config__zp_CSI_RS_ResourceToAddModList {
		A_SEQUENCE_OF(struct ZP_CSI_RS_Resource) list;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *zp_CSI_RS_ResourceToAddModList;
	struct PDSCH_Config__zp_CSI_RS_ResourceToReleaseList {
		A_SEQUENCE_OF(ZP_CSI_RS_ResourceId_t) list;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *zp_CSI_RS_ResourceToReleaseList;
	struct PDSCH_Config__aperiodic_ZP_CSI_RS_ResourceSetsToAddModList {
		A_SEQUENCE_OF(struct ZP_CSI_RS_ResourceSet) list;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *aperiodic_ZP_CSI_RS_ResourceSetsToAddModList;
	struct PDSCH_Config__aperiodic_ZP_CSI_RS_ResourceSetsToReleaseList {
		A_SEQUENCE_OF(ZP_CSI_RS_ResourceSetId_t) list;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *aperiodic_ZP_CSI_RS_ResourceSetsToReleaseList;
	struct PDSCH_Config__sp_ZP_CSI_RS_ResourceSetsToAddModList {
		A_SEQUENCE_OF(struct ZP_CSI_RS_ResourceSet) list;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *sp_ZP_CSI_RS_ResourceSetsToAddModList;
	struct PDSCH_Config__sp_ZP_CSI_RS_ResourceSetsToReleaseList {
		A_SEQUENCE_OF(ZP_CSI_RS_ResourceSetId_t) list;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *sp_ZP_CSI_RS_ResourceSetsToReleaseList;
	struct SetupRelease_ZP_CSI_RS_ResourceSet	*p_ZP_CSI_RS_ResourceSet;	/* OPTIONAL */
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} PDSCH_Config_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_vrb_ToPRB_Interleaver_9;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_resourceAllocation_12;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_pdsch_AggregationFactor_17;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_rbg_Size_27;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_mcs_Table_30;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_maxNrofCodeWordsScheduledByDCI_33;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_bundleSize_38;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_bundleSizeSet1_42;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_bundleSizeSet2_47;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_PDSCH_Config;
extern asn_SEQUENCE_specifics_t asn_SPC_PDSCH_Config_specs_1;
extern asn_TYPE_member_t asn_MBR_PDSCH_Config_1[24];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "SetupRelease.h"
#include "RateMatchPatternGroup.h"
#include "TCI-State.h"
#include "RateMatchPattern.h"
#include "ZP-CSI-RS-Resource.h"
#include "ZP-CSI-RS-ResourceSet.h"

#endif	/* _PDSCH_Config_H_ */
#include "asn_internal.h"
