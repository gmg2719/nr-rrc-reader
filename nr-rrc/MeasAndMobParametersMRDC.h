/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "38331-f60.asn"
 * 	`asn1c -fcompound-names -findirect-choice -gen-PER -pdu=all -no-gen-example -no-gen-OER -fincludes-quoted -funnamed-unions -D nr-rrc-f60`
 */

#ifndef	_MeasAndMobParametersMRDC_H_
#define	_MeasAndMobParametersMRDC_H_


#include "asn_application.h"

/* Including external dependencies */
#include "constr_SEQUENCE.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct MeasAndMobParametersMRDC_Common;
struct MeasAndMobParametersMRDC_XDD_Diff;
struct MeasAndMobParametersMRDC_FRX_Diff;

/* MeasAndMobParametersMRDC */
typedef struct MeasAndMobParametersMRDC {
	struct MeasAndMobParametersMRDC_Common	*measAndMobParametersMRDC_Common;	/* OPTIONAL */
	struct MeasAndMobParametersMRDC_XDD_Diff	*measAndMobParametersMRDC_XDD_Diff;	/* OPTIONAL */
	struct MeasAndMobParametersMRDC_FRX_Diff	*measAndMobParametersMRDC_FRX_Diff;	/* OPTIONAL */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} MeasAndMobParametersMRDC_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_MeasAndMobParametersMRDC;
extern asn_SEQUENCE_specifics_t asn_SPC_MeasAndMobParametersMRDC_specs_1;
extern asn_TYPE_member_t asn_MBR_MeasAndMobParametersMRDC_1[3];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "MeasAndMobParametersMRDC-Common.h"
#include "MeasAndMobParametersMRDC-XDD-Diff.h"
#include "MeasAndMobParametersMRDC-FRX-Diff.h"

#endif	/* _MeasAndMobParametersMRDC_H_ */
#include "asn_internal.h"
