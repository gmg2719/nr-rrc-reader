/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "38331-f60.asn"
 * 	`asn1c -S /usr/local/share/asn1c -fcompound-names -fskeletons-copy -findirect-choice -gen-PER -pdu=all -D nr-rrc`
 */

#ifndef	_IMS_ParametersCommon_H_
#define	_IMS_ParametersCommon_H_


#include <skeletons/asn_application.h>

/* Including external dependencies */
#include <skeletons/NativeEnumerated.h>
#include <skeletons/constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum IMS_ParametersCommon__voiceOverEUTRA_5GC {
	IMS_ParametersCommon__voiceOverEUTRA_5GC_supported	= 0
} e_IMS_ParametersCommon__voiceOverEUTRA_5GC;
typedef enum IMS_ParametersCommon__ext1__voiceOverSCG_BearerEUTRA_5GC {
	IMS_ParametersCommon__ext1__voiceOverSCG_BearerEUTRA_5GC_supported	= 0
} e_IMS_ParametersCommon__ext1__voiceOverSCG_BearerEUTRA_5GC;

/* IMS-ParametersCommon */
typedef struct IMS_ParametersCommon {
	long	*voiceOverEUTRA_5GC;	/* OPTIONAL */
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	struct IMS_ParametersCommon__ext1 {
		long	*voiceOverSCG_BearerEUTRA_5GC;	/* OPTIONAL */
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *ext1;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} IMS_ParametersCommon_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_voiceOverEUTRA_5GC_2;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_voiceOverSCG_BearerEUTRA_5GC_6;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_IMS_ParametersCommon;
extern asn_SEQUENCE_specifics_t asn_SPC_IMS_ParametersCommon_specs_1;
extern asn_TYPE_member_t asn_MBR_IMS_ParametersCommon_1[2];

#ifdef __cplusplus
}
#endif

#endif	/* _IMS_ParametersCommon_H_ */
#include <skeletons/asn_internal.h>
