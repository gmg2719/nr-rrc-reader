/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "38331-f60.asn"
 * 	`asn1c -S /usr/local/share/asn1c -fcompound-names -fskeletons-copy -findirect-choice -gen-PER -pdu=all -D nr-rrc`
 */

#ifndef	_OtherConfig_v1540_H_
#define	_OtherConfig_v1540_H_


#include <skeletons/asn_application.h>

/* Including external dependencies */
#include <skeletons/constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct SetupRelease_OverheatingAssistanceConfig;

/* OtherConfig-v1540 */
typedef struct OtherConfig_v1540 {
	struct SetupRelease_OverheatingAssistanceConfig	*overheatingAssistanceConfig;	/* OPTIONAL */
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} OtherConfig_v1540_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_OtherConfig_v1540;
extern asn_SEQUENCE_specifics_t asn_SPC_OtherConfig_v1540_specs_1;
extern asn_TYPE_member_t asn_MBR_OtherConfig_v1540_1[1];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "SetupRelease.h"

#endif	/* _OtherConfig_v1540_H_ */
#include <skeletons/asn_internal.h>
