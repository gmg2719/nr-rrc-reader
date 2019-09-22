/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "38331-f60.asn"
 * 	`asn1c -fcompound-names -findirect-choice -gen-PER -pdu=all -no-gen-example -no-gen-OER -fincludes-quoted -funnamed-unions -D nr-rrc-f60`
 */

#ifndef	_ZP_CSI_RS_ResourceSet_H_
#define	_ZP_CSI_RS_ResourceSet_H_


#include "asn_application.h"

/* Including external dependencies */
#include "ZP-CSI-RS-ResourceSetId.h"
#include "ZP-CSI-RS-ResourceId.h"
#include "asn_SEQUENCE_OF.h"
#include "constr_SEQUENCE_OF.h"
#include "constr_SEQUENCE.h"

#ifdef __cplusplus
extern "C" {
#endif

/* ZP-CSI-RS-ResourceSet */
typedef struct ZP_CSI_RS_ResourceSet {
	ZP_CSI_RS_ResourceSetId_t	 zp_CSI_RS_ResourceSetId;
	struct ZP_CSI_RS_ResourceSet__zp_CSI_RS_ResourceIdList {
		A_SEQUENCE_OF(ZP_CSI_RS_ResourceId_t) list;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} zp_CSI_RS_ResourceIdList;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} ZP_CSI_RS_ResourceSet_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_ZP_CSI_RS_ResourceSet;
extern asn_SEQUENCE_specifics_t asn_SPC_ZP_CSI_RS_ResourceSet_specs_1;
extern asn_TYPE_member_t asn_MBR_ZP_CSI_RS_ResourceSet_1[2];

#ifdef __cplusplus
}
#endif

#endif	/* _ZP_CSI_RS_ResourceSet_H_ */
#include "asn_internal.h"
