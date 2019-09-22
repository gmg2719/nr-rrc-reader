/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "38331-f60.asn"
 * 	`asn1c -fcompound-names -findirect-choice -gen-PER -pdu=all -no-gen-example -fincludes-quoted -funnamed-unions -D nr-rrc`
 */

#ifndef	_UplinkTxDirectCurrentBWP_H_
#define	_UplinkTxDirectCurrentBWP_H_


#include "asn_application.h"

/* Including external dependencies */
#include "BWP-Id.h"
#include "BOOLEAN.h"
#include "NativeInteger.h"
#include "constr_SEQUENCE.h"

#ifdef __cplusplus
extern "C" {
#endif

/* UplinkTxDirectCurrentBWP */
typedef struct UplinkTxDirectCurrentBWP {
	BWP_Id_t	 bwp_Id;
	BOOLEAN_t	 shift7dot5kHz;
	long	 txDirectCurrentLocation;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} UplinkTxDirectCurrentBWP_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_UplinkTxDirectCurrentBWP;
extern asn_SEQUENCE_specifics_t asn_SPC_UplinkTxDirectCurrentBWP_specs_1;
extern asn_TYPE_member_t asn_MBR_UplinkTxDirectCurrentBWP_1[3];

#ifdef __cplusplus
}
#endif

#endif	/* _UplinkTxDirectCurrentBWP_H_ */
#include "asn_internal.h"
