/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "38331-f60.asn"
 * 	`asn1c -fcompound-names -findirect-choice -gen-PER -pdu=all -no-gen-example -fincludes-quoted -funnamed-unions -D nr-rrc`
 */

#ifndef	_PUSCH_CodeBlockGroupTransmission_H_
#define	_PUSCH_CodeBlockGroupTransmission_H_


#include "asn_application.h"

/* Including external dependencies */
#include "NativeEnumerated.h"
#include "constr_SEQUENCE.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum PUSCH_CodeBlockGroupTransmission__maxCodeBlockGroupsPerTransportBlock {
	PUSCH_CodeBlockGroupTransmission__maxCodeBlockGroupsPerTransportBlock_n2	= 0,
	PUSCH_CodeBlockGroupTransmission__maxCodeBlockGroupsPerTransportBlock_n4	= 1,
	PUSCH_CodeBlockGroupTransmission__maxCodeBlockGroupsPerTransportBlock_n6	= 2,
	PUSCH_CodeBlockGroupTransmission__maxCodeBlockGroupsPerTransportBlock_n8	= 3
} e_PUSCH_CodeBlockGroupTransmission__maxCodeBlockGroupsPerTransportBlock;

/* PUSCH-CodeBlockGroupTransmission */
typedef struct PUSCH_CodeBlockGroupTransmission {
	long	 maxCodeBlockGroupsPerTransportBlock;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} PUSCH_CodeBlockGroupTransmission_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_maxCodeBlockGroupsPerTransportBlock_2;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_PUSCH_CodeBlockGroupTransmission;
extern asn_SEQUENCE_specifics_t asn_SPC_PUSCH_CodeBlockGroupTransmission_specs_1;
extern asn_TYPE_member_t asn_MBR_PUSCH_CodeBlockGroupTransmission_1[1];

#ifdef __cplusplus
}
#endif

#endif	/* _PUSCH_CodeBlockGroupTransmission_H_ */
#include "asn_internal.h"
