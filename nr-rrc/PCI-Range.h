/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "38331-f60.asn"
 * 	`asn1c -fcompound-names -findirect-choice -gen-PER -pdu=all -no-gen-example -no-gen-OER -fincludes-quoted -funnamed-unions -D nr-rrc-f60`
 */

#ifndef	_PCI_Range_H_
#define	_PCI_Range_H_


#include "asn_application.h"

/* Including external dependencies */
#include "PhysCellId.h"
#include "NativeEnumerated.h"
#include "constr_SEQUENCE.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum PCI_Range__range {
	PCI_Range__range_n4	= 0,
	PCI_Range__range_n8	= 1,
	PCI_Range__range_n12	= 2,
	PCI_Range__range_n16	= 3,
	PCI_Range__range_n24	= 4,
	PCI_Range__range_n32	= 5,
	PCI_Range__range_n48	= 6,
	PCI_Range__range_n64	= 7,
	PCI_Range__range_n84	= 8,
	PCI_Range__range_n96	= 9,
	PCI_Range__range_n128	= 10,
	PCI_Range__range_n168	= 11,
	PCI_Range__range_n252	= 12,
	PCI_Range__range_n504	= 13,
	PCI_Range__range_n1008	= 14,
	PCI_Range__range_spare1	= 15
} e_PCI_Range__range;

/* PCI-Range */
typedef struct PCI_Range {
	PhysCellId_t	 start;
	long	*range;	/* OPTIONAL */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} PCI_Range_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_range_3;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_PCI_Range;
extern asn_SEQUENCE_specifics_t asn_SPC_PCI_Range_specs_1;
extern asn_TYPE_member_t asn_MBR_PCI_Range_1[2];

#ifdef __cplusplus
}
#endif

#endif	/* _PCI_Range_H_ */
#include "asn_internal.h"
