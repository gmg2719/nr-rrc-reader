/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "38331-f60.asn"
 * 	`asn1c -S /usr/local/share/asn1c -fcompound-names -fskeletons-copy -findirect-choice -gen-PER -pdu=all -D nr-rrc`
 */

#ifndef	_PLMN_RAN_AreaCellList_H_
#define	_PLMN_RAN_AreaCellList_H_


#include <skeletons/asn_application.h>

/* Including external dependencies */
#include <skeletons/asn_SEQUENCE_OF.h>
#include <skeletons/constr_SEQUENCE_OF.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct PLMN_RAN_AreaCell;

/* PLMN-RAN-AreaCellList */
typedef struct PLMN_RAN_AreaCellList {
	A_SEQUENCE_OF(struct PLMN_RAN_AreaCell) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} PLMN_RAN_AreaCellList_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_PLMN_RAN_AreaCellList;
extern asn_SET_OF_specifics_t asn_SPC_PLMN_RAN_AreaCellList_specs_1;
extern asn_TYPE_member_t asn_MBR_PLMN_RAN_AreaCellList_1[1];
extern asn_per_constraints_t asn_PER_type_PLMN_RAN_AreaCellList_constr_1;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "PLMN-RAN-AreaCell.h"

#endif	/* _PLMN_RAN_AreaCellList_H_ */
#include <skeletons/asn_internal.h>
