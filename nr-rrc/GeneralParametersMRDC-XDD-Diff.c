/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "38331-f60.asn"
 * 	`asn1c -fcompound-names -findirect-choice -gen-PER -pdu=all -no-gen-example -no-gen-OER -fincludes-quoted -funnamed-unions -D nr-rrc-f60`
 */

#include "GeneralParametersMRDC-XDD-Diff.h"

/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
static asn_per_constraints_t asn_PER_type_splitSRB_WithOneUL_Path_constr_2 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 0,  0,  0,  0 }	/* (0..0) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_splitDRB_withUL_Both_MCG_SCG_constr_4 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 0,  0,  0,  0 }	/* (0..0) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_srb3_constr_6 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 0,  0,  0,  0 }	/* (0..0) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_v2x_EUTRA_constr_8 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 0,  0,  0,  0 }	/* (0..0) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static const asn_INTEGER_enum_map_t asn_MAP_splitSRB_WithOneUL_Path_value2enum_2[] = {
	{ 0,	9,	"supported" }
};
static const unsigned int asn_MAP_splitSRB_WithOneUL_Path_enum2value_2[] = {
	0	/* supported(0) */
};
static const asn_INTEGER_specifics_t asn_SPC_splitSRB_WithOneUL_Path_specs_2 = {
	asn_MAP_splitSRB_WithOneUL_Path_value2enum_2,	/* "tag" => N; sorted by tag */
	asn_MAP_splitSRB_WithOneUL_Path_enum2value_2,	/* N => "tag"; sorted by N */
	1,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_splitSRB_WithOneUL_Path_tags_2[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_splitSRB_WithOneUL_Path_2 = {
	"splitSRB-WithOneUL-Path",
	"splitSRB-WithOneUL-Path",
	&asn_OP_NativeEnumerated,
	asn_DEF_splitSRB_WithOneUL_Path_tags_2,
	sizeof(asn_DEF_splitSRB_WithOneUL_Path_tags_2)
		/sizeof(asn_DEF_splitSRB_WithOneUL_Path_tags_2[0]) - 1, /* 1 */
	asn_DEF_splitSRB_WithOneUL_Path_tags_2,	/* Same as above */
	sizeof(asn_DEF_splitSRB_WithOneUL_Path_tags_2)
		/sizeof(asn_DEF_splitSRB_WithOneUL_Path_tags_2[0]), /* 2 */
	{ 0, &asn_PER_type_splitSRB_WithOneUL_Path_constr_2, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_splitSRB_WithOneUL_Path_specs_2	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_splitDRB_withUL_Both_MCG_SCG_value2enum_4[] = {
	{ 0,	9,	"supported" }
};
static const unsigned int asn_MAP_splitDRB_withUL_Both_MCG_SCG_enum2value_4[] = {
	0	/* supported(0) */
};
static const asn_INTEGER_specifics_t asn_SPC_splitDRB_withUL_Both_MCG_SCG_specs_4 = {
	asn_MAP_splitDRB_withUL_Both_MCG_SCG_value2enum_4,	/* "tag" => N; sorted by tag */
	asn_MAP_splitDRB_withUL_Both_MCG_SCG_enum2value_4,	/* N => "tag"; sorted by N */
	1,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_splitDRB_withUL_Both_MCG_SCG_tags_4[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_splitDRB_withUL_Both_MCG_SCG_4 = {
	"splitDRB-withUL-Both-MCG-SCG",
	"splitDRB-withUL-Both-MCG-SCG",
	&asn_OP_NativeEnumerated,
	asn_DEF_splitDRB_withUL_Both_MCG_SCG_tags_4,
	sizeof(asn_DEF_splitDRB_withUL_Both_MCG_SCG_tags_4)
		/sizeof(asn_DEF_splitDRB_withUL_Both_MCG_SCG_tags_4[0]) - 1, /* 1 */
	asn_DEF_splitDRB_withUL_Both_MCG_SCG_tags_4,	/* Same as above */
	sizeof(asn_DEF_splitDRB_withUL_Both_MCG_SCG_tags_4)
		/sizeof(asn_DEF_splitDRB_withUL_Both_MCG_SCG_tags_4[0]), /* 2 */
	{ 0, &asn_PER_type_splitDRB_withUL_Both_MCG_SCG_constr_4, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_splitDRB_withUL_Both_MCG_SCG_specs_4	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_srb3_value2enum_6[] = {
	{ 0,	9,	"supported" }
};
static const unsigned int asn_MAP_srb3_enum2value_6[] = {
	0	/* supported(0) */
};
static const asn_INTEGER_specifics_t asn_SPC_srb3_specs_6 = {
	asn_MAP_srb3_value2enum_6,	/* "tag" => N; sorted by tag */
	asn_MAP_srb3_enum2value_6,	/* N => "tag"; sorted by N */
	1,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_srb3_tags_6[] = {
	(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_srb3_6 = {
	"srb3",
	"srb3",
	&asn_OP_NativeEnumerated,
	asn_DEF_srb3_tags_6,
	sizeof(asn_DEF_srb3_tags_6)
		/sizeof(asn_DEF_srb3_tags_6[0]) - 1, /* 1 */
	asn_DEF_srb3_tags_6,	/* Same as above */
	sizeof(asn_DEF_srb3_tags_6)
		/sizeof(asn_DEF_srb3_tags_6[0]), /* 2 */
	{ 0, &asn_PER_type_srb3_constr_6, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_srb3_specs_6	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_v2x_EUTRA_value2enum_8[] = {
	{ 0,	9,	"supported" }
};
static const unsigned int asn_MAP_v2x_EUTRA_enum2value_8[] = {
	0	/* supported(0) */
};
static const asn_INTEGER_specifics_t asn_SPC_v2x_EUTRA_specs_8 = {
	asn_MAP_v2x_EUTRA_value2enum_8,	/* "tag" => N; sorted by tag */
	asn_MAP_v2x_EUTRA_enum2value_8,	/* N => "tag"; sorted by N */
	1,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_v2x_EUTRA_tags_8[] = {
	(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_v2x_EUTRA_8 = {
	"v2x-EUTRA",
	"v2x-EUTRA",
	&asn_OP_NativeEnumerated,
	asn_DEF_v2x_EUTRA_tags_8,
	sizeof(asn_DEF_v2x_EUTRA_tags_8)
		/sizeof(asn_DEF_v2x_EUTRA_tags_8[0]) - 1, /* 1 */
	asn_DEF_v2x_EUTRA_tags_8,	/* Same as above */
	sizeof(asn_DEF_v2x_EUTRA_tags_8)
		/sizeof(asn_DEF_v2x_EUTRA_tags_8[0]), /* 2 */
	{ 0, &asn_PER_type_v2x_EUTRA_constr_8, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_v2x_EUTRA_specs_8	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_GeneralParametersMRDC_XDD_Diff_1[] = {
	{ ATF_POINTER, 4, offsetof(struct GeneralParametersMRDC_XDD_Diff, splitSRB_WithOneUL_Path),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_splitSRB_WithOneUL_Path_2,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"splitSRB-WithOneUL-Path"
		},
	{ ATF_POINTER, 3, offsetof(struct GeneralParametersMRDC_XDD_Diff, splitDRB_withUL_Both_MCG_SCG),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_splitDRB_withUL_Both_MCG_SCG_4,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"splitDRB-withUL-Both-MCG-SCG"
		},
	{ ATF_POINTER, 2, offsetof(struct GeneralParametersMRDC_XDD_Diff, srb3),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_srb3_6,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"srb3"
		},
	{ ATF_POINTER, 1, offsetof(struct GeneralParametersMRDC_XDD_Diff, v2x_EUTRA),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_v2x_EUTRA_8,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"v2x-EUTRA"
		},
};
static const int asn_MAP_GeneralParametersMRDC_XDD_Diff_oms_1[] = { 0, 1, 2, 3 };
static const ber_tlv_tag_t asn_DEF_GeneralParametersMRDC_XDD_Diff_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_GeneralParametersMRDC_XDD_Diff_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* splitSRB-WithOneUL-Path */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* splitDRB-withUL-Both-MCG-SCG */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* srb3 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 } /* v2x-EUTRA */
};
asn_SEQUENCE_specifics_t asn_SPC_GeneralParametersMRDC_XDD_Diff_specs_1 = {
	sizeof(struct GeneralParametersMRDC_XDD_Diff),
	offsetof(struct GeneralParametersMRDC_XDD_Diff, _asn_ctx),
	asn_MAP_GeneralParametersMRDC_XDD_Diff_tag2el_1,
	4,	/* Count of tags in the map */
	asn_MAP_GeneralParametersMRDC_XDD_Diff_oms_1,	/* Optional members */
	4, 0,	/* Root/Additions */
	4,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_GeneralParametersMRDC_XDD_Diff = {
	"GeneralParametersMRDC-XDD-Diff",
	"GeneralParametersMRDC-XDD-Diff",
	&asn_OP_SEQUENCE,
	asn_DEF_GeneralParametersMRDC_XDD_Diff_tags_1,
	sizeof(asn_DEF_GeneralParametersMRDC_XDD_Diff_tags_1)
		/sizeof(asn_DEF_GeneralParametersMRDC_XDD_Diff_tags_1[0]), /* 1 */
	asn_DEF_GeneralParametersMRDC_XDD_Diff_tags_1,	/* Same as above */
	sizeof(asn_DEF_GeneralParametersMRDC_XDD_Diff_tags_1)
		/sizeof(asn_DEF_GeneralParametersMRDC_XDD_Diff_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_GeneralParametersMRDC_XDD_Diff_1,
	4,	/* Elements count */
	&asn_SPC_GeneralParametersMRDC_XDD_Diff_specs_1	/* Additional specs */
};

