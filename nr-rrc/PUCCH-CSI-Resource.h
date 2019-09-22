/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "38331-f60.asn"
 * 	`asn1c -S /usr/local/share/asn1c -fcompound-names -fskeletons-copy -findirect-choice -gen-PER -pdu=all -D nr-rrc`
 */

#ifndef	_PUCCH_CSI_Resource_H_
#define	_PUCCH_CSI_Resource_H_


#include <skeletons/asn_application.h>

/* Including external dependencies */
#include <skeletons/constr_SEQUENCE.h>

#include "BWP-Id.h"
#include "PUCCH-ResourceId.h"

#ifdef __cplusplus
extern "C" {
#endif

/* PUCCH-CSI-Resource */
typedef struct PUCCH_CSI_Resource {
	BWP_Id_t	 uplinkBandwidthPartId;
	PUCCH_ResourceId_t	 pucch_Resource;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} PUCCH_CSI_Resource_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_PUCCH_CSI_Resource;
extern asn_SEQUENCE_specifics_t asn_SPC_PUCCH_CSI_Resource_specs_1;
extern asn_TYPE_member_t asn_MBR_PUCCH_CSI_Resource_1[2];

#ifdef __cplusplus
}
#endif

#endif	/* _PUCCH_CSI_Resource_H_ */
#include <skeletons/asn_internal.h>