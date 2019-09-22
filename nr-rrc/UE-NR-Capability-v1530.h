/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "38331-f60.asn"
 * 	`asn1c -fcompound-names -findirect-choice -gen-PER -pdu=all -no-gen-example -no-gen-OER -fincludes-quoted -funnamed-unions -D nr-rrc-f60`
 */

#ifndef	_UE_NR_Capability_v1530_H_
#define	_UE_NR_Capability_v1530_H_


#include "asn_application.h"

/* Including external dependencies */
#include "NativeEnumerated.h"
#include "constr_SEQUENCE.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum UE_NR_Capability_v1530__dummy {
	UE_NR_Capability_v1530__dummy_supported	= 0
} e_UE_NR_Capability_v1530__dummy;
typedef enum UE_NR_Capability_v1530__inactiveState {
	UE_NR_Capability_v1530__inactiveState_supported	= 0
} e_UE_NR_Capability_v1530__inactiveState;
typedef enum UE_NR_Capability_v1530__delayBudgetReporting {
	UE_NR_Capability_v1530__delayBudgetReporting_supported	= 0
} e_UE_NR_Capability_v1530__delayBudgetReporting;

/* Forward declarations */
struct UE_NR_CapabilityAddXDD_Mode_v1530;
struct InterRAT_Parameters;
struct UE_NR_Capability_v1540;

/* UE-NR-Capability-v1530 */
typedef struct UE_NR_Capability_v1530 {
	struct UE_NR_CapabilityAddXDD_Mode_v1530	*fdd_Add_UE_NR_Capabilities_v1530;	/* OPTIONAL */
	struct UE_NR_CapabilityAddXDD_Mode_v1530	*tdd_Add_UE_NR_Capabilities_v1530;	/* OPTIONAL */
	long	*dummy;	/* OPTIONAL */
	struct InterRAT_Parameters	*interRAT_Parameters;	/* OPTIONAL */
	long	*inactiveState;	/* OPTIONAL */
	long	*delayBudgetReporting;	/* OPTIONAL */
	struct UE_NR_Capability_v1540	*nonCriticalExtension;	/* OPTIONAL */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} UE_NR_Capability_v1530_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_dummy_4;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_inactiveState_7;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_delayBudgetReporting_9;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_UE_NR_Capability_v1530;
extern asn_SEQUENCE_specifics_t asn_SPC_UE_NR_Capability_v1530_specs_1;
extern asn_TYPE_member_t asn_MBR_UE_NR_Capability_v1530_1[7];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "UE-NR-CapabilityAddXDD-Mode-v1530.h"
#include "InterRAT-Parameters.h"
#include "UE-NR-Capability-v1540.h"

#endif	/* _UE_NR_Capability_v1530_H_ */
#include "asn_internal.h"
