/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "38331-f60.asn"
 * 	`asn1c -fcompound-names -findirect-choice -gen-PER -pdu=all -no-gen-example -fincludes-quoted -funnamed-unions -D nr-rrc`
 */

#ifndef	_MeasGapSharingConfig_H_
#define	_MeasGapSharingConfig_H_


#include "asn_application.h"

/* Including external dependencies */
#include "constr_SEQUENCE.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct SetupRelease_MeasGapSharingScheme;

/* MeasGapSharingConfig */
typedef struct MeasGapSharingConfig {
	struct SetupRelease_MeasGapSharingScheme	*gapSharingFR2;	/* OPTIONAL */
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	struct MeasGapSharingConfig__ext1 {
		struct SetupRelease_MeasGapSharingScheme	*gapSharingFR1;	/* OPTIONAL */
		struct SetupRelease_MeasGapSharingScheme	*gapSharingUE;	/* OPTIONAL */
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *ext1;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} MeasGapSharingConfig_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_MeasGapSharingConfig;
extern asn_SEQUENCE_specifics_t asn_SPC_MeasGapSharingConfig_specs_1;
extern asn_TYPE_member_t asn_MBR_MeasGapSharingConfig_1[2];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "SetupRelease.h"

#endif	/* _MeasGapSharingConfig_H_ */
#include "asn_internal.h"
