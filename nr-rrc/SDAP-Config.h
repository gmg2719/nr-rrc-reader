/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "38331-f60.asn"
 * 	`asn1c -S /usr/local/share/asn1c -fcompound-names -fskeletons-copy -findirect-choice -gen-PER -pdu=all -D nr-rrc`
 */

#ifndef	_SDAP_Config_H_
#define	_SDAP_Config_H_


#include <skeletons/asn_application.h>

/* Including external dependencies */
#include <skeletons/BOOLEAN.h>
#include <skeletons/NativeEnumerated.h>
#include <skeletons/asn_SEQUENCE_OF.h>
#include <skeletons/constr_SEQUENCE.h>
#include <skeletons/constr_SEQUENCE_OF.h>

#include "PDU-SessionID.h"
#include "QFI.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum SDAP_Config__sdap_HeaderDL {
	SDAP_Config__sdap_HeaderDL_present	= 0,
	SDAP_Config__sdap_HeaderDL_absent	= 1
} e_SDAP_Config__sdap_HeaderDL;
typedef enum SDAP_Config__sdap_HeaderUL {
	SDAP_Config__sdap_HeaderUL_present	= 0,
	SDAP_Config__sdap_HeaderUL_absent	= 1
} e_SDAP_Config__sdap_HeaderUL;

/* SDAP-Config */
typedef struct SDAP_Config {
	PDU_SessionID_t	 pdu_Session;
	long	 sdap_HeaderDL;
	long	 sdap_HeaderUL;
	BOOLEAN_t	 defaultDRB;
	struct SDAP_Config__mappedQoS_FlowsToAdd {
		A_SEQUENCE_OF(QFI_t) list;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *mappedQoS_FlowsToAdd;
	struct SDAP_Config__mappedQoS_FlowsToRelease {
		A_SEQUENCE_OF(QFI_t) list;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *mappedQoS_FlowsToRelease;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} SDAP_Config_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_sdap_HeaderDL_3;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_sdap_HeaderUL_6;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_SDAP_Config;
extern asn_SEQUENCE_specifics_t asn_SPC_SDAP_Config_specs_1;
extern asn_TYPE_member_t asn_MBR_SDAP_Config_1[6];

#ifdef __cplusplus
}
#endif

#endif	/* _SDAP_Config_H_ */
#include <skeletons/asn_internal.h>
