/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-InterNodeDefinitions"
 * 	found in "38331-f60.asn"
 * 	`asn1c -fcompound-names -findirect-choice -gen-PER -pdu=all -no-gen-example -no-gen-OER -fincludes-quoted -funnamed-unions -D nr-rrc-f60`
 */

#ifndef	_MRDC_AssistanceInfo_H_
#define	_MRDC_AssistanceInfo_H_


#include "asn_application.h"

/* Including external dependencies */
#include "asn_SEQUENCE_OF.h"
#include "constr_SEQUENCE_OF.h"
#include "constr_SEQUENCE.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct AffectedCarrierFreqCombInfoMRDC;

/* MRDC-AssistanceInfo */
typedef struct MRDC_AssistanceInfo {
	struct MRDC_AssistanceInfo__affectedCarrierFreqCombInfoListMRDC {
		A_SEQUENCE_OF(struct AffectedCarrierFreqCombInfoMRDC) list;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} affectedCarrierFreqCombInfoListMRDC;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} MRDC_AssistanceInfo_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_MRDC_AssistanceInfo;
extern asn_SEQUENCE_specifics_t asn_SPC_MRDC_AssistanceInfo_specs_1;
extern asn_TYPE_member_t asn_MBR_MRDC_AssistanceInfo_1[1];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "AffectedCarrierFreqCombInfoMRDC.h"

#endif	/* _MRDC_AssistanceInfo_H_ */
#include "asn_internal.h"
