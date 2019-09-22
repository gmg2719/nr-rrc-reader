/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-InterNodeDefinitions"
 * 	found in "38331-f60.asn"
 * 	`asn1c -fcompound-names -findirect-choice -gen-PER -pdu=all -no-gen-example -no-gen-OER -fincludes-quoted -funnamed-unions -D nr-rrc-f60`
 */

#ifndef	_PH_TypeListMCG_H_
#define	_PH_TypeListMCG_H_


#include "asn_application.h"

/* Including external dependencies */
#include "asn_SEQUENCE_OF.h"
#include "constr_SEQUENCE_OF.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct PH_InfoMCG;

/* PH-TypeListMCG */
typedef struct PH_TypeListMCG {
	A_SEQUENCE_OF(struct PH_InfoMCG) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} PH_TypeListMCG_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_PH_TypeListMCG;
extern asn_SET_OF_specifics_t asn_SPC_PH_TypeListMCG_specs_1;
extern asn_TYPE_member_t asn_MBR_PH_TypeListMCG_1[1];
extern asn_per_constraints_t asn_PER_type_PH_TypeListMCG_constr_1;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "PH-InfoMCG.h"

#endif	/* _PH_TypeListMCG_H_ */
#include "asn_internal.h"
