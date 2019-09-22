/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "38331-f60.asn"
 * 	`asn1c -fcompound-names -findirect-choice -gen-PER -pdu=all -no-gen-example -fincludes-quoted -funnamed-unions -D nr-rrc`
 */

#ifndef	_BetaOffsets_H_
#define	_BetaOffsets_H_


#include "asn_application.h"

/* Including external dependencies */
#include "NativeInteger.h"
#include "constr_SEQUENCE.h"

#ifdef __cplusplus
extern "C" {
#endif

/* BetaOffsets */
typedef struct BetaOffsets {
	long	*betaOffsetACK_Index1;	/* OPTIONAL */
	long	*betaOffsetACK_Index2;	/* OPTIONAL */
	long	*betaOffsetACK_Index3;	/* OPTIONAL */
	long	*betaOffsetCSI_Part1_Index1;	/* OPTIONAL */
	long	*betaOffsetCSI_Part1_Index2;	/* OPTIONAL */
	long	*betaOffsetCSI_Part2_Index1;	/* OPTIONAL */
	long	*betaOffsetCSI_Part2_Index2;	/* OPTIONAL */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} BetaOffsets_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_BetaOffsets;
extern asn_SEQUENCE_specifics_t asn_SPC_BetaOffsets_specs_1;
extern asn_TYPE_member_t asn_MBR_BetaOffsets_1[7];

#ifdef __cplusplus
}
#endif

#endif	/* _BetaOffsets_H_ */
#include "asn_internal.h"
