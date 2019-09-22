/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "38331-f60.asn"
 * 	`asn1c -S /usr/local/share/asn1c -fcompound-names -fskeletons-copy -findirect-choice -gen-PER -pdu=all -D nr-rrc`
 */

#ifndef	_Phy_ParametersFR2_H_
#define	_Phy_ParametersFR2_H_


#include <skeletons/asn_application.h>

/* Including external dependencies */
#include <skeletons/NativeEnumerated.h>
#include <skeletons/constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum Phy_ParametersFR2__dummy {
	Phy_ParametersFR2__dummy_supported	= 0
} e_Phy_ParametersFR2__dummy;
typedef enum Phy_ParametersFR2__pdsch_RE_MappingFR2_PerSymbol {
	Phy_ParametersFR2__pdsch_RE_MappingFR2_PerSymbol_n6	= 0,
	Phy_ParametersFR2__pdsch_RE_MappingFR2_PerSymbol_n20	= 1
} e_Phy_ParametersFR2__pdsch_RE_MappingFR2_PerSymbol;
typedef enum Phy_ParametersFR2__ext1__pCell_FR2 {
	Phy_ParametersFR2__ext1__pCell_FR2_supported	= 0
} e_Phy_ParametersFR2__ext1__pCell_FR2;
typedef enum Phy_ParametersFR2__ext1__pdsch_RE_MappingFR2_PerSlot {
	Phy_ParametersFR2__ext1__pdsch_RE_MappingFR2_PerSlot_n16	= 0,
	Phy_ParametersFR2__ext1__pdsch_RE_MappingFR2_PerSlot_n32	= 1,
	Phy_ParametersFR2__ext1__pdsch_RE_MappingFR2_PerSlot_n48	= 2,
	Phy_ParametersFR2__ext1__pdsch_RE_MappingFR2_PerSlot_n64	= 3,
	Phy_ParametersFR2__ext1__pdsch_RE_MappingFR2_PerSlot_n80	= 4,
	Phy_ParametersFR2__ext1__pdsch_RE_MappingFR2_PerSlot_n96	= 5,
	Phy_ParametersFR2__ext1__pdsch_RE_MappingFR2_PerSlot_n112	= 6,
	Phy_ParametersFR2__ext1__pdsch_RE_MappingFR2_PerSlot_n128	= 7,
	Phy_ParametersFR2__ext1__pdsch_RE_MappingFR2_PerSlot_n144	= 8,
	Phy_ParametersFR2__ext1__pdsch_RE_MappingFR2_PerSlot_n160	= 9,
	Phy_ParametersFR2__ext1__pdsch_RE_MappingFR2_PerSlot_n176	= 10,
	Phy_ParametersFR2__ext1__pdsch_RE_MappingFR2_PerSlot_n192	= 11,
	Phy_ParametersFR2__ext1__pdsch_RE_MappingFR2_PerSlot_n208	= 12,
	Phy_ParametersFR2__ext1__pdsch_RE_MappingFR2_PerSlot_n224	= 13,
	Phy_ParametersFR2__ext1__pdsch_RE_MappingFR2_PerSlot_n240	= 14,
	Phy_ParametersFR2__ext1__pdsch_RE_MappingFR2_PerSlot_n256	= 15
} e_Phy_ParametersFR2__ext1__pdsch_RE_MappingFR2_PerSlot;

/* Phy-ParametersFR2 */
typedef struct Phy_ParametersFR2 {
	long	*dummy;	/* OPTIONAL */
	long	*pdsch_RE_MappingFR2_PerSymbol;	/* OPTIONAL */
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	struct Phy_ParametersFR2__ext1 {
		long	*pCell_FR2;	/* OPTIONAL */
		long	*pdsch_RE_MappingFR2_PerSlot;	/* OPTIONAL */
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *ext1;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} Phy_ParametersFR2_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_dummy_2;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_pdsch_RE_MappingFR2_PerSymbol_4;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_pCell_FR2_9;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_pdsch_RE_MappingFR2_PerSlot_11;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_Phy_ParametersFR2;
extern asn_SEQUENCE_specifics_t asn_SPC_Phy_ParametersFR2_specs_1;
extern asn_TYPE_member_t asn_MBR_Phy_ParametersFR2_1[3];

#ifdef __cplusplus
}
#endif

#endif	/* _Phy_ParametersFR2_H_ */
#include <skeletons/asn_internal.h>
