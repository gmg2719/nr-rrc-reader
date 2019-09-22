/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "38331-f60.asn"
 * 	`asn1c -fcompound-names -findirect-choice -gen-PER -pdu=all -no-gen-example -fincludes-quoted -funnamed-unions -D nr-rrc`
 */

#ifndef	_MeasResultFreqList_H_
#define	_MeasResultFreqList_H_


#include "asn_application.h"

/* Including external dependencies */
#include "asn_SEQUENCE_OF.h"
#include "constr_SEQUENCE_OF.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct MeasResult2NR;

/* MeasResultFreqList */
typedef struct MeasResultFreqList {
	A_SEQUENCE_OF(struct MeasResult2NR) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} MeasResultFreqList_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_MeasResultFreqList;
extern asn_SET_OF_specifics_t asn_SPC_MeasResultFreqList_specs_1;
extern asn_TYPE_member_t asn_MBR_MeasResultFreqList_1[1];
extern asn_per_constraints_t asn_PER_type_MeasResultFreqList_constr_1;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "MeasResult2NR.h"

#endif	/* _MeasResultFreqList_H_ */
#include "asn_internal.h"
