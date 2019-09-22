/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "38331-f60.asn"
 * 	`asn1c -S /usr/local/share/asn1c -fcompound-names -fskeletons-copy -findirect-choice -gen-PER -pdu=all -D nr-rrc`
 */

#ifndef	_MAC_ParametersCommon_H_
#define	_MAC_ParametersCommon_H_


#include <skeletons/asn_application.h>

/* Including external dependencies */
#include <skeletons/NativeEnumerated.h>
#include <skeletons/constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum MAC_ParametersCommon__lcp_Restriction {
	MAC_ParametersCommon__lcp_Restriction_supported	= 0
} e_MAC_ParametersCommon__lcp_Restriction;
typedef enum MAC_ParametersCommon__dummy {
	MAC_ParametersCommon__dummy_supported	= 0
} e_MAC_ParametersCommon__dummy;
typedef enum MAC_ParametersCommon__lch_ToSCellRestriction {
	MAC_ParametersCommon__lch_ToSCellRestriction_supported	= 0
} e_MAC_ParametersCommon__lch_ToSCellRestriction;
typedef enum MAC_ParametersCommon__ext1__recommendedBitRate {
	MAC_ParametersCommon__ext1__recommendedBitRate_supported	= 0
} e_MAC_ParametersCommon__ext1__recommendedBitRate;
typedef enum MAC_ParametersCommon__ext1__recommendedBitRateQuery {
	MAC_ParametersCommon__ext1__recommendedBitRateQuery_supported	= 0
} e_MAC_ParametersCommon__ext1__recommendedBitRateQuery;

/* MAC-ParametersCommon */
typedef struct MAC_ParametersCommon {
	long	*lcp_Restriction;	/* OPTIONAL */
	long	*dummy;	/* OPTIONAL */
	long	*lch_ToSCellRestriction;	/* OPTIONAL */
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	struct MAC_ParametersCommon__ext1 {
		long	*recommendedBitRate;	/* OPTIONAL */
		long	*recommendedBitRateQuery;	/* OPTIONAL */
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *ext1;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} MAC_ParametersCommon_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_lcp_Restriction_2;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_dummy_4;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_lch_ToSCellRestriction_6;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_recommendedBitRate_10;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_recommendedBitRateQuery_12;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_MAC_ParametersCommon;
extern asn_SEQUENCE_specifics_t asn_SPC_MAC_ParametersCommon_specs_1;
extern asn_TYPE_member_t asn_MBR_MAC_ParametersCommon_1[4];

#ifdef __cplusplus
}
#endif

#endif	/* _MAC_ParametersCommon_H_ */
#include <skeletons/asn_internal.h>
