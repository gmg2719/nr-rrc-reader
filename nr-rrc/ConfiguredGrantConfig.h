/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "38331-f60.asn"
 * 	`asn1c -fcompound-names -findirect-choice -gen-PER -pdu=all -no-gen-example -no-gen-OER -fincludes-quoted -funnamed-unions -D nr-rrc-f60`
 */

#ifndef	_ConfiguredGrantConfig_H_
#define	_ConfiguredGrantConfig_H_


#include "asn_application.h"

/* Including external dependencies */
#include "NativeEnumerated.h"
#include "DMRS-UplinkConfig.h"
#include "P0-PUSCH-AlphaSetId.h"
#include "NativeInteger.h"
#include "BIT_STRING.h"
#include "constr_SEQUENCE.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum ConfiguredGrantConfig__frequencyHopping {
	ConfiguredGrantConfig__frequencyHopping_intraSlot	= 0,
	ConfiguredGrantConfig__frequencyHopping_interSlot	= 1
} e_ConfiguredGrantConfig__frequencyHopping;
typedef enum ConfiguredGrantConfig__mcs_Table {
	ConfiguredGrantConfig__mcs_Table_qam256	= 0,
	ConfiguredGrantConfig__mcs_Table_qam64LowSE	= 1
} e_ConfiguredGrantConfig__mcs_Table;
typedef enum ConfiguredGrantConfig__mcs_TableTransformPrecoder {
	ConfiguredGrantConfig__mcs_TableTransformPrecoder_qam256	= 0,
	ConfiguredGrantConfig__mcs_TableTransformPrecoder_qam64LowSE	= 1
} e_ConfiguredGrantConfig__mcs_TableTransformPrecoder;
typedef enum ConfiguredGrantConfig__resourceAllocation {
	ConfiguredGrantConfig__resourceAllocation_resourceAllocationType0	= 0,
	ConfiguredGrantConfig__resourceAllocation_resourceAllocationType1	= 1,
	ConfiguredGrantConfig__resourceAllocation_dynamicSwitch	= 2
} e_ConfiguredGrantConfig__resourceAllocation;
typedef enum ConfiguredGrantConfig__rbg_Size {
	ConfiguredGrantConfig__rbg_Size_config2	= 0
} e_ConfiguredGrantConfig__rbg_Size;
typedef enum ConfiguredGrantConfig__powerControlLoopToUse {
	ConfiguredGrantConfig__powerControlLoopToUse_n0	= 0,
	ConfiguredGrantConfig__powerControlLoopToUse_n1	= 1
} e_ConfiguredGrantConfig__powerControlLoopToUse;
typedef enum ConfiguredGrantConfig__transformPrecoder {
	ConfiguredGrantConfig__transformPrecoder_enabled	= 0,
	ConfiguredGrantConfig__transformPrecoder_disabled	= 1
} e_ConfiguredGrantConfig__transformPrecoder;
typedef enum ConfiguredGrantConfig__repK {
	ConfiguredGrantConfig__repK_n1	= 0,
	ConfiguredGrantConfig__repK_n2	= 1,
	ConfiguredGrantConfig__repK_n4	= 2,
	ConfiguredGrantConfig__repK_n8	= 3
} e_ConfiguredGrantConfig__repK;
typedef enum ConfiguredGrantConfig__repK_RV {
	ConfiguredGrantConfig__repK_RV_s1_0231	= 0,
	ConfiguredGrantConfig__repK_RV_s2_0303	= 1,
	ConfiguredGrantConfig__repK_RV_s3_0000	= 2
} e_ConfiguredGrantConfig__repK_RV;
typedef enum ConfiguredGrantConfig__periodicity {
	ConfiguredGrantConfig__periodicity_sym2	= 0,
	ConfiguredGrantConfig__periodicity_sym7	= 1,
	ConfiguredGrantConfig__periodicity_sym1x14	= 2,
	ConfiguredGrantConfig__periodicity_sym2x14	= 3,
	ConfiguredGrantConfig__periodicity_sym4x14	= 4,
	ConfiguredGrantConfig__periodicity_sym5x14	= 5,
	ConfiguredGrantConfig__periodicity_sym8x14	= 6,
	ConfiguredGrantConfig__periodicity_sym10x14	= 7,
	ConfiguredGrantConfig__periodicity_sym16x14	= 8,
	ConfiguredGrantConfig__periodicity_sym20x14	= 9,
	ConfiguredGrantConfig__periodicity_sym32x14	= 10,
	ConfiguredGrantConfig__periodicity_sym40x14	= 11,
	ConfiguredGrantConfig__periodicity_sym64x14	= 12,
	ConfiguredGrantConfig__periodicity_sym80x14	= 13,
	ConfiguredGrantConfig__periodicity_sym128x14	= 14,
	ConfiguredGrantConfig__periodicity_sym160x14	= 15,
	ConfiguredGrantConfig__periodicity_sym256x14	= 16,
	ConfiguredGrantConfig__periodicity_sym320x14	= 17,
	ConfiguredGrantConfig__periodicity_sym512x14	= 18,
	ConfiguredGrantConfig__periodicity_sym640x14	= 19,
	ConfiguredGrantConfig__periodicity_sym1024x14	= 20,
	ConfiguredGrantConfig__periodicity_sym1280x14	= 21,
	ConfiguredGrantConfig__periodicity_sym2560x14	= 22,
	ConfiguredGrantConfig__periodicity_sym5120x14	= 23,
	ConfiguredGrantConfig__periodicity_sym6	= 24,
	ConfiguredGrantConfig__periodicity_sym1x12	= 25,
	ConfiguredGrantConfig__periodicity_sym2x12	= 26,
	ConfiguredGrantConfig__periodicity_sym4x12	= 27,
	ConfiguredGrantConfig__periodicity_sym5x12	= 28,
	ConfiguredGrantConfig__periodicity_sym8x12	= 29,
	ConfiguredGrantConfig__periodicity_sym10x12	= 30,
	ConfiguredGrantConfig__periodicity_sym16x12	= 31,
	ConfiguredGrantConfig__periodicity_sym20x12	= 32,
	ConfiguredGrantConfig__periodicity_sym32x12	= 33,
	ConfiguredGrantConfig__periodicity_sym40x12	= 34,
	ConfiguredGrantConfig__periodicity_sym64x12	= 35,
	ConfiguredGrantConfig__periodicity_sym80x12	= 36,
	ConfiguredGrantConfig__periodicity_sym128x12	= 37,
	ConfiguredGrantConfig__periodicity_sym160x12	= 38,
	ConfiguredGrantConfig__periodicity_sym256x12	= 39,
	ConfiguredGrantConfig__periodicity_sym320x12	= 40,
	ConfiguredGrantConfig__periodicity_sym512x12	= 41,
	ConfiguredGrantConfig__periodicity_sym640x12	= 42,
	ConfiguredGrantConfig__periodicity_sym1280x12	= 43,
	ConfiguredGrantConfig__periodicity_sym2560x12	= 44
} e_ConfiguredGrantConfig__periodicity;

/* Forward declarations */
struct SetupRelease_CG_UCI_OnPUSCH;

/* ConfiguredGrantConfig */
typedef struct ConfiguredGrantConfig {
	long	*frequencyHopping;	/* OPTIONAL */
	DMRS_UplinkConfig_t	 cg_DMRS_Configuration;
	long	*mcs_Table;	/* OPTIONAL */
	long	*mcs_TableTransformPrecoder;	/* OPTIONAL */
	struct SetupRelease_CG_UCI_OnPUSCH	*uci_OnPUSCH;	/* OPTIONAL */
	long	 resourceAllocation;
	long	*rbg_Size;	/* OPTIONAL */
	long	 powerControlLoopToUse;
	P0_PUSCH_AlphaSetId_t	 p0_PUSCH_Alpha;
	long	*transformPrecoder;	/* OPTIONAL */
	long	 nrofHARQ_Processes;
	long	 repK;
	long	*repK_RV;	/* OPTIONAL */
	long	 periodicity;
	long	*configuredGrantTimer;	/* OPTIONAL */
	struct ConfiguredGrantConfig__rrc_ConfiguredUplinkGrant {
		long	 timeDomainOffset;
		long	 timeDomainAllocation;
		BIT_STRING_t	 frequencyDomainAllocation;
		long	 antennaPort;
		long	*dmrs_SeqInitialization;	/* OPTIONAL */
		long	 precodingAndNumberOfLayers;
		long	*srs_ResourceIndicator;	/* OPTIONAL */
		long	 mcsAndTBS;
		long	*frequencyHoppingOffset;	/* OPTIONAL */
		long	 pathlossReferenceIndex;
		/*
		 * This type is extensible,
		 * possible extensions are below.
		 */
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *rrc_ConfiguredUplinkGrant;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} ConfiguredGrantConfig_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_frequencyHopping_2;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_mcs_Table_6;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_mcs_TableTransformPrecoder_9;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_resourceAllocation_13;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_rbg_Size_17;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_powerControlLoopToUse_19;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_transformPrecoder_23;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_repK_27;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_repK_RV_32;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_periodicity_36;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_ConfiguredGrantConfig;
extern asn_SEQUENCE_specifics_t asn_SPC_ConfiguredGrantConfig_specs_1;
extern asn_TYPE_member_t asn_MBR_ConfiguredGrantConfig_1[16];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "SetupRelease.h"

#endif	/* _ConfiguredGrantConfig_H_ */
#include "asn_internal.h"
