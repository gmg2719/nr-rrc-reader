/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "38331-f60.asn"
 * 	`asn1c -fcompound-names -findirect-choice -gen-PER -pdu=all -no-gen-example -fincludes-quoted -funnamed-unions -D nr-rrc`
 */

#ifndef	_MeasResult2EUTRA_H_
#define	_MeasResult2EUTRA_H_


#include "asn_application.h"

/* Including external dependencies */
#include "ARFCN-ValueEUTRA.h"
#include "constr_SEQUENCE.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct MeasResultEUTRA;

/* MeasResult2EUTRA */
typedef struct MeasResult2EUTRA {
	ARFCN_ValueEUTRA_t	 carrierFreq;
	struct MeasResultEUTRA	*measResultServingCell;	/* OPTIONAL */
	struct MeasResultEUTRA	*measResultBestNeighCell;	/* OPTIONAL */
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} MeasResult2EUTRA_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_MeasResult2EUTRA;
extern asn_SEQUENCE_specifics_t asn_SPC_MeasResult2EUTRA_specs_1;
extern asn_TYPE_member_t asn_MBR_MeasResult2EUTRA_1[3];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "MeasResultEUTRA.h"

#endif	/* _MeasResult2EUTRA_H_ */
#include "asn_internal.h"
