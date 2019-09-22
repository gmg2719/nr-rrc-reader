/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "38331-f60.asn"
 * 	`asn1c -S /usr/local/share/asn1c -fcompound-names -fskeletons-copy -findirect-choice -gen-PER -pdu=all -D nr-rrc`
 */

#ifndef	_EUTRA_FreqNeighCellInfo_H_
#define	_EUTRA_FreqNeighCellInfo_H_


#include <skeletons/asn_application.h>

/* Including external dependencies */
#include <skeletons/NativeInteger.h>
#include <skeletons/constr_SEQUENCE.h>

#include "EUTRA-PhysCellId.h"
#include "EUTRA-Q-OffsetRange.h"

#ifdef __cplusplus
extern "C" {
#endif

/* EUTRA-FreqNeighCellInfo */
typedef struct EUTRA_FreqNeighCellInfo {
	EUTRA_PhysCellId_t	 physCellId;
	EUTRA_Q_OffsetRange_t	 dummy;
	long	*q_RxLevMinOffsetCell;	/* OPTIONAL */
	long	*q_QualMinOffsetCell;	/* OPTIONAL */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} EUTRA_FreqNeighCellInfo_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_EUTRA_FreqNeighCellInfo;
extern asn_SEQUENCE_specifics_t asn_SPC_EUTRA_FreqNeighCellInfo_specs_1;
extern asn_TYPE_member_t asn_MBR_EUTRA_FreqNeighCellInfo_1[4];

#ifdef __cplusplus
}
#endif

#endif	/* _EUTRA_FreqNeighCellInfo_H_ */
#include <skeletons/asn_internal.h>
