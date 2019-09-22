/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "38331-f60.asn"
 * 	`asn1c -S /usr/local/share/asn1c -fcompound-names -fskeletons-copy -findirect-choice -gen-PER -pdu=all -D nr-rrc`
 */

#ifndef	_FreqPriorityEUTRA_H_
#define	_FreqPriorityEUTRA_H_


#include <skeletons/asn_application.h>

/* Including external dependencies */
#include <skeletons/constr_SEQUENCE.h>

#include "ARFCN-ValueEUTRA.h"
#include "CellReselectionPriority.h"
#include "CellReselectionSubPriority.h"

#ifdef __cplusplus
extern "C" {
#endif

/* FreqPriorityEUTRA */
typedef struct FreqPriorityEUTRA {
	ARFCN_ValueEUTRA_t	 carrierFreq;
	CellReselectionPriority_t	 cellReselectionPriority;
	CellReselectionSubPriority_t	*cellReselectionSubPriority;	/* OPTIONAL */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} FreqPriorityEUTRA_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_FreqPriorityEUTRA;
extern asn_SEQUENCE_specifics_t asn_SPC_FreqPriorityEUTRA_specs_1;
extern asn_TYPE_member_t asn_MBR_FreqPriorityEUTRA_1[3];

#ifdef __cplusplus
}
#endif

#endif	/* _FreqPriorityEUTRA_H_ */
#include <skeletons/asn_internal.h>
