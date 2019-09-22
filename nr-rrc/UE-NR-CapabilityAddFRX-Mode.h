/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "38331-f60.asn"
 * 	`asn1c -fcompound-names -findirect-choice -gen-PER -pdu=all -no-gen-example -no-gen-OER -fincludes-quoted -funnamed-unions -D nr-rrc-f60`
 */

#ifndef	_UE_NR_CapabilityAddFRX_Mode_H_
#define	_UE_NR_CapabilityAddFRX_Mode_H_


#include "asn_application.h"

/* Including external dependencies */
#include "constr_SEQUENCE.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct Phy_ParametersFRX_Diff;
struct MeasAndMobParametersFRX_Diff;

/* UE-NR-CapabilityAddFRX-Mode */
typedef struct UE_NR_CapabilityAddFRX_Mode {
	struct Phy_ParametersFRX_Diff	*phy_ParametersFRX_Diff;	/* OPTIONAL */
	struct MeasAndMobParametersFRX_Diff	*measAndMobParametersFRX_Diff;	/* OPTIONAL */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} UE_NR_CapabilityAddFRX_Mode_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_UE_NR_CapabilityAddFRX_Mode;
extern asn_SEQUENCE_specifics_t asn_SPC_UE_NR_CapabilityAddFRX_Mode_specs_1;
extern asn_TYPE_member_t asn_MBR_UE_NR_CapabilityAddFRX_Mode_1[2];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "Phy-ParametersFRX-Diff.h"
#include "MeasAndMobParametersFRX-Diff.h"

#endif	/* _UE_NR_CapabilityAddFRX_Mode_H_ */
#include "asn_internal.h"
