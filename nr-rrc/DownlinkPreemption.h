/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "38331-f60.asn"
 * 	`asn1c -fcompound-names -findirect-choice -gen-PER -pdu=all -no-gen-example -no-gen-OER -fincludes-quoted -funnamed-unions -D nr-rrc-f60`
 */

#ifndef	_DownlinkPreemption_H_
#define	_DownlinkPreemption_H_


#include "asn_application.h"

/* Including external dependencies */
#include "RNTI-Value.h"
#include "NativeEnumerated.h"
#include "NativeInteger.h"
#include "asn_SEQUENCE_OF.h"
#include "constr_SEQUENCE_OF.h"
#include "constr_SEQUENCE.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum DownlinkPreemption__timeFrequencySet {
	DownlinkPreemption__timeFrequencySet_set0	= 0,
	DownlinkPreemption__timeFrequencySet_set1	= 1
} e_DownlinkPreemption__timeFrequencySet;

/* Forward declarations */
struct INT_ConfigurationPerServingCell;

/* DownlinkPreemption */
typedef struct DownlinkPreemption {
	RNTI_Value_t	 int_RNTI;
	long	 timeFrequencySet;
	long	 dci_PayloadSize;
	struct DownlinkPreemption__int_ConfigurationPerServingCell {
		A_SEQUENCE_OF(struct INT_ConfigurationPerServingCell) list;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} int_ConfigurationPerServingCell;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} DownlinkPreemption_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_timeFrequencySet_3;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_DownlinkPreemption;
extern asn_SEQUENCE_specifics_t asn_SPC_DownlinkPreemption_specs_1;
extern asn_TYPE_member_t asn_MBR_DownlinkPreemption_1[4];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "INT-ConfigurationPerServingCell.h"

#endif	/* _DownlinkPreemption_H_ */
#include "asn_internal.h"
