/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "38331-f60.asn"
 * 	`asn1c -S /usr/local/share/asn1c -fcompound-names -fskeletons-copy -findirect-choice -gen-PER -pdu=all -D nr-rrc`
 */

#include "PhysicalCellGroupConfig.h"

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
static asn_oer_constraints_t asn_OER_type_harq_ACK_SpatialBundlingPUCCH_constr_2 CC_NOTUSED = {
	{ 0, 0 },
	-1};
static asn_per_constraints_t asn_PER_type_harq_ACK_SpatialBundlingPUCCH_constr_2 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 0,  0,  0,  0 }	/* (0..0) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_type_harq_ACK_SpatialBundlingPUSCH_constr_4 CC_NOTUSED = {
	{ 0, 0 },
	-1};
static asn_per_constraints_t asn_PER_type_harq_ACK_SpatialBundlingPUSCH_constr_4 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 0,  0,  0,  0 }	/* (0..0) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_type_pdsch_HARQ_ACK_Codebook_constr_7 CC_NOTUSED = {
	{ 0, 0 },
	-1};
static asn_per_constraints_t asn_PER_type_pdsch_HARQ_ACK_Codebook_constr_7 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 1,  1,  0,  1 }	/* (0..1) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_type_xScale_constr_20 CC_NOTUSED = {
	{ 0, 0 },
	-1};
static asn_per_constraints_t asn_PER_type_xScale_constr_20 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 2,  2,  0,  3 }	/* (0..3) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static const asn_INTEGER_enum_map_t asn_MAP_harq_ACK_SpatialBundlingPUCCH_value2enum_2[] = {
	{ 0,	4,	"true" }
};
static const unsigned int asn_MAP_harq_ACK_SpatialBundlingPUCCH_enum2value_2[] = {
	0	/* true(0) */
};
static const asn_INTEGER_specifics_t asn_SPC_harq_ACK_SpatialBundlingPUCCH_specs_2 = {
	asn_MAP_harq_ACK_SpatialBundlingPUCCH_value2enum_2,	/* "tag" => N; sorted by tag */
	asn_MAP_harq_ACK_SpatialBundlingPUCCH_enum2value_2,	/* N => "tag"; sorted by N */
	1,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_harq_ACK_SpatialBundlingPUCCH_tags_2[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_harq_ACK_SpatialBundlingPUCCH_2 = {
	"harq-ACK-SpatialBundlingPUCCH",
	"harq-ACK-SpatialBundlingPUCCH",
	&asn_OP_NativeEnumerated,
	asn_DEF_harq_ACK_SpatialBundlingPUCCH_tags_2,
	sizeof(asn_DEF_harq_ACK_SpatialBundlingPUCCH_tags_2)
		/sizeof(asn_DEF_harq_ACK_SpatialBundlingPUCCH_tags_2[0]) - 1, /* 1 */
	asn_DEF_harq_ACK_SpatialBundlingPUCCH_tags_2,	/* Same as above */
	sizeof(asn_DEF_harq_ACK_SpatialBundlingPUCCH_tags_2)
		/sizeof(asn_DEF_harq_ACK_SpatialBundlingPUCCH_tags_2[0]), /* 2 */
	{ &asn_OER_type_harq_ACK_SpatialBundlingPUCCH_constr_2, &asn_PER_type_harq_ACK_SpatialBundlingPUCCH_constr_2, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_harq_ACK_SpatialBundlingPUCCH_specs_2	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_harq_ACK_SpatialBundlingPUSCH_value2enum_4[] = {
	{ 0,	4,	"true" }
};
static const unsigned int asn_MAP_harq_ACK_SpatialBundlingPUSCH_enum2value_4[] = {
	0	/* true(0) */
};
static const asn_INTEGER_specifics_t asn_SPC_harq_ACK_SpatialBundlingPUSCH_specs_4 = {
	asn_MAP_harq_ACK_SpatialBundlingPUSCH_value2enum_4,	/* "tag" => N; sorted by tag */
	asn_MAP_harq_ACK_SpatialBundlingPUSCH_enum2value_4,	/* N => "tag"; sorted by N */
	1,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_harq_ACK_SpatialBundlingPUSCH_tags_4[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_harq_ACK_SpatialBundlingPUSCH_4 = {
	"harq-ACK-SpatialBundlingPUSCH",
	"harq-ACK-SpatialBundlingPUSCH",
	&asn_OP_NativeEnumerated,
	asn_DEF_harq_ACK_SpatialBundlingPUSCH_tags_4,
	sizeof(asn_DEF_harq_ACK_SpatialBundlingPUSCH_tags_4)
		/sizeof(asn_DEF_harq_ACK_SpatialBundlingPUSCH_tags_4[0]) - 1, /* 1 */
	asn_DEF_harq_ACK_SpatialBundlingPUSCH_tags_4,	/* Same as above */
	sizeof(asn_DEF_harq_ACK_SpatialBundlingPUSCH_tags_4)
		/sizeof(asn_DEF_harq_ACK_SpatialBundlingPUSCH_tags_4[0]), /* 2 */
	{ &asn_OER_type_harq_ACK_SpatialBundlingPUSCH_constr_4, &asn_PER_type_harq_ACK_SpatialBundlingPUSCH_constr_4, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_harq_ACK_SpatialBundlingPUSCH_specs_4	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_pdsch_HARQ_ACK_Codebook_value2enum_7[] = {
	{ 0,	10,	"semiStatic" },
	{ 1,	7,	"dynamic" }
};
static const unsigned int asn_MAP_pdsch_HARQ_ACK_Codebook_enum2value_7[] = {
	1,	/* dynamic(1) */
	0	/* semiStatic(0) */
};
static const asn_INTEGER_specifics_t asn_SPC_pdsch_HARQ_ACK_Codebook_specs_7 = {
	asn_MAP_pdsch_HARQ_ACK_Codebook_value2enum_7,	/* "tag" => N; sorted by tag */
	asn_MAP_pdsch_HARQ_ACK_Codebook_enum2value_7,	/* N => "tag"; sorted by N */
	2,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_pdsch_HARQ_ACK_Codebook_tags_7[] = {
	(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_pdsch_HARQ_ACK_Codebook_7 = {
	"pdsch-HARQ-ACK-Codebook",
	"pdsch-HARQ-ACK-Codebook",
	&asn_OP_NativeEnumerated,
	asn_DEF_pdsch_HARQ_ACK_Codebook_tags_7,
	sizeof(asn_DEF_pdsch_HARQ_ACK_Codebook_tags_7)
		/sizeof(asn_DEF_pdsch_HARQ_ACK_Codebook_tags_7[0]) - 1, /* 1 */
	asn_DEF_pdsch_HARQ_ACK_Codebook_tags_7,	/* Same as above */
	sizeof(asn_DEF_pdsch_HARQ_ACK_Codebook_tags_7)
		/sizeof(asn_DEF_pdsch_HARQ_ACK_Codebook_tags_7[0]), /* 2 */
	{ &asn_OER_type_pdsch_HARQ_ACK_Codebook_constr_7, &asn_PER_type_pdsch_HARQ_ACK_Codebook_constr_7, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_pdsch_HARQ_ACK_Codebook_specs_7	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_ext1_16[] = {
	{ ATF_POINTER, 2, offsetof(struct PhysicalCellGroupConfig__ext1, mcs_C_RNTI),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_RNTI_Value,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"mcs-C-RNTI"
		},
	{ ATF_POINTER, 1, offsetof(struct PhysicalCellGroupConfig__ext1, p_UE_FR1),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_P_Max,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"p-UE-FR1"
		},
};
static const int asn_MAP_ext1_oms_16[] = { 0, 1 };
static const ber_tlv_tag_t asn_DEF_ext1_tags_16[] = {
	(ASN_TAG_CLASS_CONTEXT | (9 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_ext1_tag2el_16[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* mcs-C-RNTI */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* p-UE-FR1 */
};
static asn_SEQUENCE_specifics_t asn_SPC_ext1_specs_16 = {
	sizeof(struct PhysicalCellGroupConfig__ext1),
	offsetof(struct PhysicalCellGroupConfig__ext1, _asn_ctx),
	asn_MAP_ext1_tag2el_16,
	2,	/* Count of tags in the map */
	asn_MAP_ext1_oms_16,	/* Optional members */
	2, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_ext1_16 = {
	"ext1",
	"ext1",
	&asn_OP_SEQUENCE,
	asn_DEF_ext1_tags_16,
	sizeof(asn_DEF_ext1_tags_16)
		/sizeof(asn_DEF_ext1_tags_16[0]) - 1, /* 1 */
	asn_DEF_ext1_tags_16,	/* Same as above */
	sizeof(asn_DEF_ext1_tags_16)
		/sizeof(asn_DEF_ext1_tags_16[0]), /* 2 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_ext1_16,
	2,	/* Elements count */
	&asn_SPC_ext1_specs_16	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_xScale_value2enum_20[] = {
	{ 0,	3,	"dB0" },
	{ 1,	3,	"dB6" },
	{ 2,	6,	"spare2" },
	{ 3,	6,	"spare1" }
};
static const unsigned int asn_MAP_xScale_enum2value_20[] = {
	0,	/* dB0(0) */
	1,	/* dB6(1) */
	3,	/* spare1(3) */
	2	/* spare2(2) */
};
static const asn_INTEGER_specifics_t asn_SPC_xScale_specs_20 = {
	asn_MAP_xScale_value2enum_20,	/* "tag" => N; sorted by tag */
	asn_MAP_xScale_enum2value_20,	/* N => "tag"; sorted by N */
	4,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_xScale_tags_20[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_xScale_20 = {
	"xScale",
	"xScale",
	&asn_OP_NativeEnumerated,
	asn_DEF_xScale_tags_20,
	sizeof(asn_DEF_xScale_tags_20)
		/sizeof(asn_DEF_xScale_tags_20[0]) - 1, /* 1 */
	asn_DEF_xScale_tags_20,	/* Same as above */
	sizeof(asn_DEF_xScale_tags_20)
		/sizeof(asn_DEF_xScale_tags_20[0]), /* 2 */
	{ &asn_OER_type_xScale_constr_20, &asn_PER_type_xScale_constr_20, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_xScale_specs_20	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_ext2_19[] = {
	{ ATF_POINTER, 1, offsetof(struct PhysicalCellGroupConfig__ext2, xScale),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_xScale_20,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"xScale"
		},
};
static const int asn_MAP_ext2_oms_19[] = { 0 };
static const ber_tlv_tag_t asn_DEF_ext2_tags_19[] = {
	(ASN_TAG_CLASS_CONTEXT | (10 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_ext2_tag2el_19[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 } /* xScale */
};
static asn_SEQUENCE_specifics_t asn_SPC_ext2_specs_19 = {
	sizeof(struct PhysicalCellGroupConfig__ext2),
	offsetof(struct PhysicalCellGroupConfig__ext2, _asn_ctx),
	asn_MAP_ext2_tag2el_19,
	1,	/* Count of tags in the map */
	asn_MAP_ext2_oms_19,	/* Optional members */
	1, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_ext2_19 = {
	"ext2",
	"ext2",
	&asn_OP_SEQUENCE,
	asn_DEF_ext2_tags_19,
	sizeof(asn_DEF_ext2_tags_19)
		/sizeof(asn_DEF_ext2_tags_19[0]) - 1, /* 1 */
	asn_DEF_ext2_tags_19,	/* Same as above */
	sizeof(asn_DEF_ext2_tags_19)
		/sizeof(asn_DEF_ext2_tags_19[0]), /* 2 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_ext2_19,
	1,	/* Elements count */
	&asn_SPC_ext2_specs_19	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_ext3_25[] = {
	{ ATF_POINTER, 1, offsetof(struct PhysicalCellGroupConfig__ext3, pdcch_BlindDetection),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_SetupRelease_PDCCH_BlindDetection,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"pdcch-BlindDetection"
		},
};
static const int asn_MAP_ext3_oms_25[] = { 0 };
static const ber_tlv_tag_t asn_DEF_ext3_tags_25[] = {
	(ASN_TAG_CLASS_CONTEXT | (11 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_ext3_tag2el_25[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 } /* pdcch-BlindDetection */
};
static asn_SEQUENCE_specifics_t asn_SPC_ext3_specs_25 = {
	sizeof(struct PhysicalCellGroupConfig__ext3),
	offsetof(struct PhysicalCellGroupConfig__ext3, _asn_ctx),
	asn_MAP_ext3_tag2el_25,
	1,	/* Count of tags in the map */
	asn_MAP_ext3_oms_25,	/* Optional members */
	1, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_ext3_25 = {
	"ext3",
	"ext3",
	&asn_OP_SEQUENCE,
	asn_DEF_ext3_tags_25,
	sizeof(asn_DEF_ext3_tags_25)
		/sizeof(asn_DEF_ext3_tags_25[0]) - 1, /* 1 */
	asn_DEF_ext3_tags_25,	/* Same as above */
	sizeof(asn_DEF_ext3_tags_25)
		/sizeof(asn_DEF_ext3_tags_25[0]), /* 2 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_ext3_25,
	1,	/* Elements count */
	&asn_SPC_ext3_specs_25	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_PhysicalCellGroupConfig_1[] = {
	{ ATF_POINTER, 3, offsetof(struct PhysicalCellGroupConfig, harq_ACK_SpatialBundlingPUCCH),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_harq_ACK_SpatialBundlingPUCCH_2,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"harq-ACK-SpatialBundlingPUCCH"
		},
	{ ATF_POINTER, 2, offsetof(struct PhysicalCellGroupConfig, harq_ACK_SpatialBundlingPUSCH),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_harq_ACK_SpatialBundlingPUSCH_4,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"harq-ACK-SpatialBundlingPUSCH"
		},
	{ ATF_POINTER, 1, offsetof(struct PhysicalCellGroupConfig, p_NR_FR1),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_P_Max,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"p-NR-FR1"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct PhysicalCellGroupConfig, pdsch_HARQ_ACK_Codebook),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_pdsch_HARQ_ACK_Codebook_7,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"pdsch-HARQ-ACK-Codebook"
		},
	{ ATF_POINTER, 8, offsetof(struct PhysicalCellGroupConfig, tpc_SRS_RNTI),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_RNTI_Value,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"tpc-SRS-RNTI"
		},
	{ ATF_POINTER, 7, offsetof(struct PhysicalCellGroupConfig, tpc_PUCCH_RNTI),
		(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_RNTI_Value,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"tpc-PUCCH-RNTI"
		},
	{ ATF_POINTER, 6, offsetof(struct PhysicalCellGroupConfig, tpc_PUSCH_RNTI),
		(ASN_TAG_CLASS_CONTEXT | (6 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_RNTI_Value,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"tpc-PUSCH-RNTI"
		},
	{ ATF_POINTER, 5, offsetof(struct PhysicalCellGroupConfig, sp_CSI_RNTI),
		(ASN_TAG_CLASS_CONTEXT | (7 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_RNTI_Value,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"sp-CSI-RNTI"
		},
	{ ATF_POINTER, 4, offsetof(struct PhysicalCellGroupConfig, cs_RNTI),
		(ASN_TAG_CLASS_CONTEXT | (8 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_SetupRelease_RNTI_Value,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"cs-RNTI"
		},
	{ ATF_POINTER, 3, offsetof(struct PhysicalCellGroupConfig, ext1),
		(ASN_TAG_CLASS_CONTEXT | (9 << 2)),
		0,
		&asn_DEF_ext1_16,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"ext1"
		},
	{ ATF_POINTER, 2, offsetof(struct PhysicalCellGroupConfig, ext2),
		(ASN_TAG_CLASS_CONTEXT | (10 << 2)),
		0,
		&asn_DEF_ext2_19,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"ext2"
		},
	{ ATF_POINTER, 1, offsetof(struct PhysicalCellGroupConfig, ext3),
		(ASN_TAG_CLASS_CONTEXT | (11 << 2)),
		0,
		&asn_DEF_ext3_25,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"ext3"
		},
};
static const int asn_MAP_PhysicalCellGroupConfig_oms_1[] = { 0, 1, 2, 4, 5, 6, 7, 8, 9, 10, 11 };
static const ber_tlv_tag_t asn_DEF_PhysicalCellGroupConfig_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_PhysicalCellGroupConfig_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* harq-ACK-SpatialBundlingPUCCH */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* harq-ACK-SpatialBundlingPUSCH */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* p-NR-FR1 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* pdsch-HARQ-ACK-Codebook */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 }, /* tpc-SRS-RNTI */
    { (ASN_TAG_CLASS_CONTEXT | (5 << 2)), 5, 0, 0 }, /* tpc-PUCCH-RNTI */
    { (ASN_TAG_CLASS_CONTEXT | (6 << 2)), 6, 0, 0 }, /* tpc-PUSCH-RNTI */
    { (ASN_TAG_CLASS_CONTEXT | (7 << 2)), 7, 0, 0 }, /* sp-CSI-RNTI */
    { (ASN_TAG_CLASS_CONTEXT | (8 << 2)), 8, 0, 0 }, /* cs-RNTI */
    { (ASN_TAG_CLASS_CONTEXT | (9 << 2)), 9, 0, 0 }, /* ext1 */
    { (ASN_TAG_CLASS_CONTEXT | (10 << 2)), 10, 0, 0 }, /* ext2 */
    { (ASN_TAG_CLASS_CONTEXT | (11 << 2)), 11, 0, 0 } /* ext3 */
};
asn_SEQUENCE_specifics_t asn_SPC_PhysicalCellGroupConfig_specs_1 = {
	sizeof(struct PhysicalCellGroupConfig),
	offsetof(struct PhysicalCellGroupConfig, _asn_ctx),
	asn_MAP_PhysicalCellGroupConfig_tag2el_1,
	12,	/* Count of tags in the map */
	asn_MAP_PhysicalCellGroupConfig_oms_1,	/* Optional members */
	8, 3,	/* Root/Additions */
	9,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_PhysicalCellGroupConfig = {
	"PhysicalCellGroupConfig",
	"PhysicalCellGroupConfig",
	&asn_OP_SEQUENCE,
	asn_DEF_PhysicalCellGroupConfig_tags_1,
	sizeof(asn_DEF_PhysicalCellGroupConfig_tags_1)
		/sizeof(asn_DEF_PhysicalCellGroupConfig_tags_1[0]), /* 1 */
	asn_DEF_PhysicalCellGroupConfig_tags_1,	/* Same as above */
	sizeof(asn_DEF_PhysicalCellGroupConfig_tags_1)
		/sizeof(asn_DEF_PhysicalCellGroupConfig_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_PhysicalCellGroupConfig_1,
	12,	/* Elements count */
	&asn_SPC_PhysicalCellGroupConfig_specs_1	/* Additional specs */
};

