/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "38331-f60.asn"
 * 	`asn1c -fcompound-names -findirect-choice -gen-PER -pdu=all -no-gen-example -fincludes-quoted -funnamed-unions -D nr-rrc`
 */

#ifndef	_PUSCH_ServingCellConfig_H_
#define	_PUSCH_ServingCellConfig_H_


#include "asn_application.h"

/* Including external dependencies */
#include "NativeEnumerated.h"
#include "NativeInteger.h"
#include "BOOLEAN.h"
#include "constr_SEQUENCE.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum PUSCH_ServingCellConfig__rateMatching {
	PUSCH_ServingCellConfig__rateMatching_limitedBufferRM	= 0
} e_PUSCH_ServingCellConfig__rateMatching;
typedef enum PUSCH_ServingCellConfig__xOverhead {
	PUSCH_ServingCellConfig__xOverhead_xoh6	= 0,
	PUSCH_ServingCellConfig__xOverhead_xoh12	= 1,
	PUSCH_ServingCellConfig__xOverhead_xoh18	= 2
} e_PUSCH_ServingCellConfig__xOverhead;

/* Forward declarations */
struct SetupRelease_PUSCH_CodeBlockGroupTransmission;

/* PUSCH-ServingCellConfig */
typedef struct PUSCH_ServingCellConfig {
	struct SetupRelease_PUSCH_CodeBlockGroupTransmission	*codeBlockGroupTransmission;	/* OPTIONAL */
	long	*rateMatching;	/* OPTIONAL */
	long	*xOverhead;	/* OPTIONAL */
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	struct PUSCH_ServingCellConfig__ext1 {
		long	*maxMIMO_Layers;	/* OPTIONAL */
		BOOLEAN_t	*processingType2Enabled;	/* OPTIONAL */
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *ext1;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} PUSCH_ServingCellConfig_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_rateMatching_3;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_xOverhead_5;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_PUSCH_ServingCellConfig;
extern asn_SEQUENCE_specifics_t asn_SPC_PUSCH_ServingCellConfig_specs_1;
extern asn_TYPE_member_t asn_MBR_PUSCH_ServingCellConfig_1[4];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "SetupRelease.h"

#endif	/* _PUSCH_ServingCellConfig_H_ */
#include "asn_internal.h"
