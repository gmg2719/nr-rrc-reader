/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-InterNodeDefinitions"
 * 	found in "38331-f60.asn"
 * 	`asn1c -S /usr/local/share/asn1c -fcompound-names -fskeletons-copy -findirect-choice -gen-PER -pdu=all -D nr-rrc`
 */

#ifndef	_CandidateServingFreqListEUTRA_H_
#define	_CandidateServingFreqListEUTRA_H_


#include <skeletons/asn_application.h>

/* Including external dependencies */
#include <skeletons/asn_SEQUENCE_OF.h>
#include <skeletons/constr_SEQUENCE_OF.h>

#include "ARFCN-ValueEUTRA.h"

#ifdef __cplusplus
extern "C" {
#endif

/* CandidateServingFreqListEUTRA */
typedef struct CandidateServingFreqListEUTRA {
	A_SEQUENCE_OF(ARFCN_ValueEUTRA_t) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} CandidateServingFreqListEUTRA_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_CandidateServingFreqListEUTRA;
extern asn_SET_OF_specifics_t asn_SPC_CandidateServingFreqListEUTRA_specs_1;
extern asn_TYPE_member_t asn_MBR_CandidateServingFreqListEUTRA_1[1];
extern asn_per_constraints_t asn_PER_type_CandidateServingFreqListEUTRA_constr_1;

#ifdef __cplusplus
}
#endif

#endif	/* _CandidateServingFreqListEUTRA_H_ */
#include <skeletons/asn_internal.h>