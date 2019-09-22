/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "38331-f60.asn"
 * 	`asn1c -fcompound-names -findirect-choice -gen-PER -pdu=all -no-gen-example -no-gen-OER -fincludes-quoted -funnamed-unions -D nr-rrc-f60`
 */

#ifndef	_ProcessingParameters_H_
#define	_ProcessingParameters_H_


#include "asn_application.h"

/* Including external dependencies */
#include "NativeEnumerated.h"
#include "NumberOfCarriers.h"
#include "constr_SEQUENCE.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum ProcessingParameters__fallback {
	ProcessingParameters__fallback_sc	= 0,
	ProcessingParameters__fallback_cap1_only	= 1
} e_ProcessingParameters__fallback;

/* ProcessingParameters */
typedef struct ProcessingParameters {
	long	 fallback;
	struct ProcessingParameters__differentTB_PerSlot {
		NumberOfCarriers_t	*upto1;	/* OPTIONAL */
		NumberOfCarriers_t	*upto2;	/* OPTIONAL */
		NumberOfCarriers_t	*upto4;	/* OPTIONAL */
		NumberOfCarriers_t	*upto7;	/* OPTIONAL */
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *differentTB_PerSlot;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} ProcessingParameters_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_fallback_2;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_ProcessingParameters;
extern asn_SEQUENCE_specifics_t asn_SPC_ProcessingParameters_specs_1;
extern asn_TYPE_member_t asn_MBR_ProcessingParameters_1[2];

#ifdef __cplusplus
}
#endif

#endif	/* _ProcessingParameters_H_ */
#include "asn_internal.h"
