/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "38331-f60.asn"
 * 	`asn1c -S /usr/local/share/asn1c -fcompound-names -fskeletons-copy -findirect-choice -gen-PER -pdu=all -D nr-rrc`
 */

#ifndef	_DRB_ToReleaseList_H_
#define	_DRB_ToReleaseList_H_


#include <skeletons/asn_application.h>

/* Including external dependencies */
#include <skeletons/asn_SEQUENCE_OF.h>
#include <skeletons/constr_SEQUENCE_OF.h>

#include "DRB-Identity.h"

#ifdef __cplusplus
extern "C" {
#endif

/* DRB-ToReleaseList */
typedef struct DRB_ToReleaseList {
	A_SEQUENCE_OF(DRB_Identity_t) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} DRB_ToReleaseList_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_DRB_ToReleaseList;
extern asn_SET_OF_specifics_t asn_SPC_DRB_ToReleaseList_specs_1;
extern asn_TYPE_member_t asn_MBR_DRB_ToReleaseList_1[1];
extern asn_per_constraints_t asn_PER_type_DRB_ToReleaseList_constr_1;

#ifdef __cplusplus
}
#endif

#endif	/* _DRB_ToReleaseList_H_ */
#include <skeletons/asn_internal.h>
