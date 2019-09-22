/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "38331-f60.asn"
 * 	`asn1c -S /usr/local/share/asn1c -fcompound-names -fskeletons-copy -findirect-choice -gen-PER -pdu=all -D nr-rrc`
 */

#ifndef	_BandCombination_v1540_H_
#define	_BandCombination_v1540_H_


#include <skeletons/asn_application.h>

/* Including external dependencies */
#include <skeletons/asn_SEQUENCE_OF.h>
#include <skeletons/constr_SEQUENCE.h>
#include <skeletons/constr_SEQUENCE_OF.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct CA_ParametersNR_v1540;
struct BandParameters_v1540;

/* BandCombination-v1540 */
typedef struct BandCombination_v1540 {
	struct BandCombination_v1540__bandList_v1540 {
		A_SEQUENCE_OF(struct BandParameters_v1540) list;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} bandList_v1540;
	struct CA_ParametersNR_v1540	*ca_ParametersNR_v1540;	/* OPTIONAL */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} BandCombination_v1540_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_BandCombination_v1540;
extern asn_SEQUENCE_specifics_t asn_SPC_BandCombination_v1540_specs_1;
extern asn_TYPE_member_t asn_MBR_BandCombination_v1540_1[2];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "CA-ParametersNR-v1540.h"
#include "BandParameters-v1540.h"

#endif	/* _BandCombination_v1540_H_ */
#include <skeletons/asn_internal.h>
