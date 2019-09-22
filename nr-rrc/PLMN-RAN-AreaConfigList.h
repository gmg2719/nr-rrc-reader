/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "38331-f60.asn"
 * 	`asn1c -fcompound-names -findirect-choice -gen-PER -pdu=all -no-gen-example -no-gen-OER -fincludes-quoted -funnamed-unions -D nr-rrc-f60`
 */

#ifndef	_PLMN_RAN_AreaConfigList_H_
#define	_PLMN_RAN_AreaConfigList_H_


#include "asn_application.h"

/* Including external dependencies */
#include "asn_SEQUENCE_OF.h"
#include "constr_SEQUENCE_OF.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct PLMN_RAN_AreaConfig;

/* PLMN-RAN-AreaConfigList */
typedef struct PLMN_RAN_AreaConfigList {
	A_SEQUENCE_OF(struct PLMN_RAN_AreaConfig) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} PLMN_RAN_AreaConfigList_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_PLMN_RAN_AreaConfigList;
extern asn_SET_OF_specifics_t asn_SPC_PLMN_RAN_AreaConfigList_specs_1;
extern asn_TYPE_member_t asn_MBR_PLMN_RAN_AreaConfigList_1[1];
extern asn_per_constraints_t asn_PER_type_PLMN_RAN_AreaConfigList_constr_1;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "PLMN-RAN-AreaConfig.h"

#endif	/* _PLMN_RAN_AreaConfigList_H_ */
#include "asn_internal.h"
