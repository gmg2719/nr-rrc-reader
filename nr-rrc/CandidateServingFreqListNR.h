/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-InterNodeDefinitions"
 * 	found in "38331-f60.asn"
 * 	`asn1c -S /usr/local/share/asn1c -fcompound-names -fskeletons-copy -findirect-choice -gen-PER -pdu=all -D nr-rrc`
 */

#ifndef	_CandidateServingFreqListNR_H_
#define	_CandidateServingFreqListNR_H_


#include <skeletons/asn_application.h>

/* Including external dependencies */
#include <skeletons/asn_SEQUENCE_OF.h>
#include <skeletons/constr_SEQUENCE_OF.h>

#include "ARFCN-ValueNR.h"

#ifdef __cplusplus
extern "C" {
#endif

/* CandidateServingFreqListNR */
typedef struct CandidateServingFreqListNR {
	A_SEQUENCE_OF(ARFCN_ValueNR_t) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} CandidateServingFreqListNR_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_CandidateServingFreqListNR;
extern asn_SET_OF_specifics_t asn_SPC_CandidateServingFreqListNR_specs_1;
extern asn_TYPE_member_t asn_MBR_CandidateServingFreqListNR_1[1];
extern asn_per_constraints_t asn_PER_type_CandidateServingFreqListNR_constr_1;

#ifdef __cplusplus
}
#endif

#endif	/* _CandidateServingFreqListNR_H_ */
#include <skeletons/asn_internal.h>