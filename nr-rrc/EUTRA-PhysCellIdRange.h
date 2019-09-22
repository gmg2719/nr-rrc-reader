/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "38331-f60.asn"
 * 	`asn1c -S /usr/local/share/asn1c -fcompound-names -fskeletons-copy -findirect-choice -gen-PER -pdu=all -D nr-rrc`
 */

#ifndef	_EUTRA_PhysCellIdRange_H_
#define	_EUTRA_PhysCellIdRange_H_


#include <skeletons/asn_application.h>

/* Including external dependencies */
#include <skeletons/NativeEnumerated.h>
#include <skeletons/constr_SEQUENCE.h>

#include "EUTRA-PhysCellId.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum EUTRA_PhysCellIdRange__range {
	EUTRA_PhysCellIdRange__range_n4	= 0,
	EUTRA_PhysCellIdRange__range_n8	= 1,
	EUTRA_PhysCellIdRange__range_n12	= 2,
	EUTRA_PhysCellIdRange__range_n16	= 3,
	EUTRA_PhysCellIdRange__range_n24	= 4,
	EUTRA_PhysCellIdRange__range_n32	= 5,
	EUTRA_PhysCellIdRange__range_n48	= 6,
	EUTRA_PhysCellIdRange__range_n64	= 7,
	EUTRA_PhysCellIdRange__range_n84	= 8,
	EUTRA_PhysCellIdRange__range_n96	= 9,
	EUTRA_PhysCellIdRange__range_n128	= 10,
	EUTRA_PhysCellIdRange__range_n168	= 11,
	EUTRA_PhysCellIdRange__range_n252	= 12,
	EUTRA_PhysCellIdRange__range_n504	= 13,
	EUTRA_PhysCellIdRange__range_spare2	= 14,
	EUTRA_PhysCellIdRange__range_spare1	= 15
} e_EUTRA_PhysCellIdRange__range;

/* EUTRA-PhysCellIdRange */
typedef struct EUTRA_PhysCellIdRange {
	EUTRA_PhysCellId_t	 start;
	long	*range;	/* OPTIONAL */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} EUTRA_PhysCellIdRange_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_range_3;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_EUTRA_PhysCellIdRange;
extern asn_SEQUENCE_specifics_t asn_SPC_EUTRA_PhysCellIdRange_specs_1;
extern asn_TYPE_member_t asn_MBR_EUTRA_PhysCellIdRange_1[2];

#ifdef __cplusplus
}
#endif

#endif	/* _EUTRA_PhysCellIdRange_H_ */
#include <skeletons/asn_internal.h>
