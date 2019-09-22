/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "38331-f60.asn"
 * 	`asn1c -fcompound-names -findirect-choice -gen-PER -pdu=all -no-gen-example -no-gen-OER -fincludes-quoted -funnamed-unions -D nr-rrc-f60`
 */

#ifndef	_CSI_SemiPersistentOnPUSCH_TriggerStateList_H_
#define	_CSI_SemiPersistentOnPUSCH_TriggerStateList_H_


#include "asn_application.h"

/* Including external dependencies */
#include "asn_SEQUENCE_OF.h"
#include "constr_SEQUENCE_OF.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct CSI_SemiPersistentOnPUSCH_TriggerState;

/* CSI-SemiPersistentOnPUSCH-TriggerStateList */
typedef struct CSI_SemiPersistentOnPUSCH_TriggerStateList {
	A_SEQUENCE_OF(struct CSI_SemiPersistentOnPUSCH_TriggerState) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} CSI_SemiPersistentOnPUSCH_TriggerStateList_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_CSI_SemiPersistentOnPUSCH_TriggerStateList;
extern asn_SET_OF_specifics_t asn_SPC_CSI_SemiPersistentOnPUSCH_TriggerStateList_specs_1;
extern asn_TYPE_member_t asn_MBR_CSI_SemiPersistentOnPUSCH_TriggerStateList_1[1];
extern asn_per_constraints_t asn_PER_type_CSI_SemiPersistentOnPUSCH_TriggerStateList_constr_1;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "CSI-SemiPersistentOnPUSCH-TriggerState.h"

#endif	/* _CSI_SemiPersistentOnPUSCH_TriggerStateList_H_ */
#include "asn_internal.h"
