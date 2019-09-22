/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "38331-f60.asn"
 * 	`asn1c -fcompound-names -findirect-choice -gen-PER -pdu=all -no-gen-example -fincludes-quoted -funnamed-unions -D nr-rrc`
 */

#ifndef	_SpCellConfig_H_
#define	_SpCellConfig_H_


#include "asn_application.h"

/* Including external dependencies */
#include "ServCellIndex.h"
#include "NativeEnumerated.h"
#include "constr_SEQUENCE.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum SpCellConfig__rlmInSyncOutOfSyncThreshold {
	SpCellConfig__rlmInSyncOutOfSyncThreshold_n1	= 0
} e_SpCellConfig__rlmInSyncOutOfSyncThreshold;

/* Forward declarations */
struct ReconfigurationWithSync;
struct SetupRelease_RLF_TimersAndConstants;
struct ServingCellConfig;

/* SpCellConfig */
typedef struct SpCellConfig {
	ServCellIndex_t	*servCellIndex;	/* OPTIONAL */
	struct ReconfigurationWithSync	*reconfigurationWithSync;	/* OPTIONAL */
	struct SetupRelease_RLF_TimersAndConstants	*rlf_TimersAndConstants;	/* OPTIONAL */
	long	*rlmInSyncOutOfSyncThreshold;	/* OPTIONAL */
	struct ServingCellConfig	*spCellConfigDedicated;	/* OPTIONAL */
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} SpCellConfig_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_rlmInSyncOutOfSyncThreshold_5;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_SpCellConfig;
extern asn_SEQUENCE_specifics_t asn_SPC_SpCellConfig_specs_1;
extern asn_TYPE_member_t asn_MBR_SpCellConfig_1[5];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "ReconfigurationWithSync.h"
#include "SetupRelease.h"
#include "ServingCellConfig.h"

#endif	/* _SpCellConfig_H_ */
#include "asn_internal.h"
