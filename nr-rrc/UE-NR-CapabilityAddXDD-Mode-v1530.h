/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "38331-f60.asn"
 * 	`asn1c -fcompound-names -findirect-choice -gen-PER -pdu=all -no-gen-example -fincludes-quoted -funnamed-unions -D nr-rrc`
 */

#ifndef	_UE_NR_CapabilityAddXDD_Mode_v1530_H_
#define	_UE_NR_CapabilityAddXDD_Mode_v1530_H_


#include "asn_application.h"

/* Including external dependencies */
#include "EUTRA-ParametersXDD-Diff.h"
#include "constr_SEQUENCE.h"

#ifdef __cplusplus
extern "C" {
#endif

/* UE-NR-CapabilityAddXDD-Mode-v1530 */
typedef struct UE_NR_CapabilityAddXDD_Mode_v1530 {
	EUTRA_ParametersXDD_Diff_t	 eutra_ParametersXDD_Diff;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} UE_NR_CapabilityAddXDD_Mode_v1530_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_UE_NR_CapabilityAddXDD_Mode_v1530;
extern asn_SEQUENCE_specifics_t asn_SPC_UE_NR_CapabilityAddXDD_Mode_v1530_specs_1;
extern asn_TYPE_member_t asn_MBR_UE_NR_CapabilityAddXDD_Mode_v1530_1[1];

#ifdef __cplusplus
}
#endif

#endif	/* _UE_NR_CapabilityAddXDD_Mode_v1530_H_ */
#include "asn_internal.h"
