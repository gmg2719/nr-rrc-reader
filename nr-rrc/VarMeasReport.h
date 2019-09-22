/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-UE-Variables"
 * 	found in "38331-f60.asn"
 * 	`asn1c -fcompound-names -findirect-choice -gen-PER -pdu=all -no-gen-example -fincludes-quoted -funnamed-unions -D nr-rrc`
 */

#ifndef	_VarMeasReport_H_
#define	_VarMeasReport_H_


#include "asn_application.h"

/* Including external dependencies */
#include "MeasId.h"
#include "NativeInteger.h"
#include "constr_SEQUENCE.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct CellsTriggeredList;

/* VarMeasReport */
typedef struct VarMeasReport {
	MeasId_t	 measId;
	struct CellsTriggeredList	*cellsTriggeredList;	/* OPTIONAL */
	long	 numberOfReportsSent;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} VarMeasReport_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_VarMeasReport;
extern asn_SEQUENCE_specifics_t asn_SPC_VarMeasReport_specs_1;
extern asn_TYPE_member_t asn_MBR_VarMeasReport_1[3];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "CellsTriggeredList.h"

#endif	/* _VarMeasReport_H_ */
#include "asn_internal.h"
