/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "38331-f60.asn"
 * 	`asn1c -fcompound-names -findirect-choice -gen-PER -pdu=all -no-gen-example -no-gen-OER -fincludes-quoted -funnamed-unions -D nr-rrc-f60`
 */

#ifndef	_NRDC_Parameters_H_
#define	_NRDC_Parameters_H_


#include "asn_application.h"

/* Including external dependencies */
#include "OCTET_STRING.h"
#include "constr_SEQUENCE.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct MeasAndMobParametersMRDC;
struct GeneralParametersMRDC_XDD_Diff;
struct UE_MRDC_CapabilityAddXDD_Mode;
struct UE_MRDC_CapabilityAddFRX_Mode;

/* NRDC-Parameters */
typedef struct NRDC_Parameters {
	struct MeasAndMobParametersMRDC	*measAndMobParametersNRDC;	/* OPTIONAL */
	struct GeneralParametersMRDC_XDD_Diff	*generalParametersNRDC;	/* OPTIONAL */
	struct UE_MRDC_CapabilityAddXDD_Mode	*fdd_Add_UE_NRDC_Capabilities;	/* OPTIONAL */
	struct UE_MRDC_CapabilityAddXDD_Mode	*tdd_Add_UE_NRDC_Capabilities;	/* OPTIONAL */
	struct UE_MRDC_CapabilityAddFRX_Mode	*fr1_Add_UE_NRDC_Capabilities;	/* OPTIONAL */
	struct UE_MRDC_CapabilityAddFRX_Mode	*fr2_Add_UE_NRDC_Capabilities;	/* OPTIONAL */
	OCTET_STRING_t	*lateNonCriticalExtension;	/* OPTIONAL */
	struct NRDC_Parameters__nonCriticalExtension {
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *nonCriticalExtension;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} NRDC_Parameters_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_NRDC_Parameters;
extern asn_SEQUENCE_specifics_t asn_SPC_NRDC_Parameters_specs_1;
extern asn_TYPE_member_t asn_MBR_NRDC_Parameters_1[8];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "MeasAndMobParametersMRDC.h"
#include "GeneralParametersMRDC-XDD-Diff.h"
#include "UE-MRDC-CapabilityAddXDD-Mode.h"
#include "UE-MRDC-CapabilityAddFRX-Mode.h"

#endif	/* _NRDC_Parameters_H_ */
#include "asn_internal.h"
