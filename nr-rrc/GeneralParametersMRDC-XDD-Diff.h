/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "38331-f60.asn"
 * 	`asn1c -S /usr/local/share/asn1c -fcompound-names -fskeletons-copy -findirect-choice -gen-PER -pdu=all -D nr-rrc`
 */

#ifndef	_GeneralParametersMRDC_XDD_Diff_H_
#define	_GeneralParametersMRDC_XDD_Diff_H_


#include <skeletons/asn_application.h>

/* Including external dependencies */
#include <skeletons/NativeEnumerated.h>
#include <skeletons/constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum GeneralParametersMRDC_XDD_Diff__splitSRB_WithOneUL_Path {
	GeneralParametersMRDC_XDD_Diff__splitSRB_WithOneUL_Path_supported	= 0
} e_GeneralParametersMRDC_XDD_Diff__splitSRB_WithOneUL_Path;
typedef enum GeneralParametersMRDC_XDD_Diff__splitDRB_withUL_Both_MCG_SCG {
	GeneralParametersMRDC_XDD_Diff__splitDRB_withUL_Both_MCG_SCG_supported	= 0
} e_GeneralParametersMRDC_XDD_Diff__splitDRB_withUL_Both_MCG_SCG;
typedef enum GeneralParametersMRDC_XDD_Diff__srb3 {
	GeneralParametersMRDC_XDD_Diff__srb3_supported	= 0
} e_GeneralParametersMRDC_XDD_Diff__srb3;
typedef enum GeneralParametersMRDC_XDD_Diff__v2x_EUTRA {
	GeneralParametersMRDC_XDD_Diff__v2x_EUTRA_supported	= 0
} e_GeneralParametersMRDC_XDD_Diff__v2x_EUTRA;

/* GeneralParametersMRDC-XDD-Diff */
typedef struct GeneralParametersMRDC_XDD_Diff {
	long	*splitSRB_WithOneUL_Path;	/* OPTIONAL */
	long	*splitDRB_withUL_Both_MCG_SCG;	/* OPTIONAL */
	long	*srb3;	/* OPTIONAL */
	long	*v2x_EUTRA;	/* OPTIONAL */
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} GeneralParametersMRDC_XDD_Diff_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_splitSRB_WithOneUL_Path_2;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_splitDRB_withUL_Both_MCG_SCG_4;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_srb3_6;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_v2x_EUTRA_8;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_GeneralParametersMRDC_XDD_Diff;
extern asn_SEQUENCE_specifics_t asn_SPC_GeneralParametersMRDC_XDD_Diff_specs_1;
extern asn_TYPE_member_t asn_MBR_GeneralParametersMRDC_XDD_Diff_1[4];

#ifdef __cplusplus
}
#endif

#endif	/* _GeneralParametersMRDC_XDD_Diff_H_ */
#include <skeletons/asn_internal.h>
