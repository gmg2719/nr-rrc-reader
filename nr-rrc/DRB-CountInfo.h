/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "38331-f60.asn"
 * 	`asn1c -S /usr/local/share/asn1c -fcompound-names -fskeletons-copy -findirect-choice -gen-PER -pdu=all -D nr-rrc`
 */

#ifndef	_DRB_CountInfo_H_
#define	_DRB_CountInfo_H_


#include <skeletons/asn_application.h>

/* Including external dependencies */
#include <skeletons/NativeInteger.h>
#include <skeletons/constr_SEQUENCE.h>

#include "DRB-Identity.h"

#ifdef __cplusplus
extern "C" {
#endif

/* DRB-CountInfo */
typedef struct DRB_CountInfo {
	DRB_Identity_t	 drb_Identity;
	unsigned long	 count_Uplink;
	unsigned long	 count_Downlink;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} DRB_CountInfo_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_count_Uplink_3;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_count_Downlink_4;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_DRB_CountInfo;
extern asn_SEQUENCE_specifics_t asn_SPC_DRB_CountInfo_specs_1;
extern asn_TYPE_member_t asn_MBR_DRB_CountInfo_1[3];

#ifdef __cplusplus
}
#endif

#endif	/* _DRB_CountInfo_H_ */
#include <skeletons/asn_internal.h>
