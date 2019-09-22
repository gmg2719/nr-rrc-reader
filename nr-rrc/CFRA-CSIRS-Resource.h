/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "38331-f60.asn"
 * 	`asn1c -fcompound-names -findirect-choice -gen-PER -pdu=all -no-gen-example -no-gen-OER -fincludes-quoted -funnamed-unions -D nr-rrc-f60`
 */

#ifndef	_CFRA_CSIRS_Resource_H_
#define	_CFRA_CSIRS_Resource_H_


#include "asn_application.h"

/* Including external dependencies */
#include "CSI-RS-Index.h"
#include "NativeInteger.h"
#include "asn_SEQUENCE_OF.h"
#include "constr_SEQUENCE_OF.h"
#include "constr_SEQUENCE.h"

#ifdef __cplusplus
extern "C" {
#endif

/* CFRA-CSIRS-Resource */
typedef struct CFRA_CSIRS_Resource {
	CSI_RS_Index_t	 csi_RS;
	struct CFRA_CSIRS_Resource__ra_OccasionList {
		A_SEQUENCE_OF(long) list;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} ra_OccasionList;
	long	 ra_PreambleIndex;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} CFRA_CSIRS_Resource_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_CFRA_CSIRS_Resource;
extern asn_SEQUENCE_specifics_t asn_SPC_CFRA_CSIRS_Resource_specs_1;
extern asn_TYPE_member_t asn_MBR_CFRA_CSIRS_Resource_1[3];

#ifdef __cplusplus
}
#endif

#endif	/* _CFRA_CSIRS_Resource_H_ */
#include "asn_internal.h"
