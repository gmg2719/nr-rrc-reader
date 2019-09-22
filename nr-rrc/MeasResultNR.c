/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "38331-f60.asn"
 * 	`asn1c -S /usr/local/share/asn1c -fcompound-names -fskeletons-copy -findirect-choice -gen-PER -pdu=all -D nr-rrc`
 */

#include "MeasResultNR.h"

static asn_TYPE_member_t asn_MBR_cellResults_4[] = {
	{ ATF_POINTER, 2, offsetof(struct MeasResultNR__measResult__cellResults, resultsSSB_Cell),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_MeasQuantityResults,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"resultsSSB-Cell"
		},
	{ ATF_POINTER, 1, offsetof(struct MeasResultNR__measResult__cellResults, resultsCSI_RS_Cell),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_MeasQuantityResults,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"resultsCSI-RS-Cell"
		},
};
static const int asn_MAP_cellResults_oms_4[] = { 0, 1 };
static const ber_tlv_tag_t asn_DEF_cellResults_tags_4[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_cellResults_tag2el_4[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* resultsSSB-Cell */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* resultsCSI-RS-Cell */
};
static asn_SEQUENCE_specifics_t asn_SPC_cellResults_specs_4 = {
	sizeof(struct MeasResultNR__measResult__cellResults),
	offsetof(struct MeasResultNR__measResult__cellResults, _asn_ctx),
	asn_MAP_cellResults_tag2el_4,
	2,	/* Count of tags in the map */
	asn_MAP_cellResults_oms_4,	/* Optional members */
	2, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_cellResults_4 = {
	"cellResults",
	"cellResults",
	&asn_OP_SEQUENCE,
	asn_DEF_cellResults_tags_4,
	sizeof(asn_DEF_cellResults_tags_4)
		/sizeof(asn_DEF_cellResults_tags_4[0]) - 1, /* 1 */
	asn_DEF_cellResults_tags_4,	/* Same as above */
	sizeof(asn_DEF_cellResults_tags_4)
		/sizeof(asn_DEF_cellResults_tags_4[0]), /* 2 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_cellResults_4,
	2,	/* Elements count */
	&asn_SPC_cellResults_specs_4	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_rsIndexResults_7[] = {
	{ ATF_POINTER, 2, offsetof(struct MeasResultNR__measResult__rsIndexResults, resultsSSB_Indexes),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ResultsPerSSB_IndexList,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"resultsSSB-Indexes"
		},
	{ ATF_POINTER, 1, offsetof(struct MeasResultNR__measResult__rsIndexResults, resultsCSI_RS_Indexes),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ResultsPerCSI_RS_IndexList,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"resultsCSI-RS-Indexes"
		},
};
static const int asn_MAP_rsIndexResults_oms_7[] = { 0, 1 };
static const ber_tlv_tag_t asn_DEF_rsIndexResults_tags_7[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_rsIndexResults_tag2el_7[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* resultsSSB-Indexes */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* resultsCSI-RS-Indexes */
};
static asn_SEQUENCE_specifics_t asn_SPC_rsIndexResults_specs_7 = {
	sizeof(struct MeasResultNR__measResult__rsIndexResults),
	offsetof(struct MeasResultNR__measResult__rsIndexResults, _asn_ctx),
	asn_MAP_rsIndexResults_tag2el_7,
	2,	/* Count of tags in the map */
	asn_MAP_rsIndexResults_oms_7,	/* Optional members */
	2, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_rsIndexResults_7 = {
	"rsIndexResults",
	"rsIndexResults",
	&asn_OP_SEQUENCE,
	asn_DEF_rsIndexResults_tags_7,
	sizeof(asn_DEF_rsIndexResults_tags_7)
		/sizeof(asn_DEF_rsIndexResults_tags_7[0]) - 1, /* 1 */
	asn_DEF_rsIndexResults_tags_7,	/* Same as above */
	sizeof(asn_DEF_rsIndexResults_tags_7)
		/sizeof(asn_DEF_rsIndexResults_tags_7[0]), /* 2 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_rsIndexResults_7,
	2,	/* Elements count */
	&asn_SPC_rsIndexResults_specs_7	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_measResult_3[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct MeasResultNR__measResult, cellResults),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		0,
		&asn_DEF_cellResults_4,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"cellResults"
		},
	{ ATF_POINTER, 1, offsetof(struct MeasResultNR__measResult, rsIndexResults),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		0,
		&asn_DEF_rsIndexResults_7,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"rsIndexResults"
		},
};
static const int asn_MAP_measResult_oms_3[] = { 1 };
static const ber_tlv_tag_t asn_DEF_measResult_tags_3[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_measResult_tag2el_3[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* cellResults */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* rsIndexResults */
};
static asn_SEQUENCE_specifics_t asn_SPC_measResult_specs_3 = {
	sizeof(struct MeasResultNR__measResult),
	offsetof(struct MeasResultNR__measResult, _asn_ctx),
	asn_MAP_measResult_tag2el_3,
	2,	/* Count of tags in the map */
	asn_MAP_measResult_oms_3,	/* Optional members */
	1, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_measResult_3 = {
	"measResult",
	"measResult",
	&asn_OP_SEQUENCE,
	asn_DEF_measResult_tags_3,
	sizeof(asn_DEF_measResult_tags_3)
		/sizeof(asn_DEF_measResult_tags_3[0]) - 1, /* 1 */
	asn_DEF_measResult_tags_3,	/* Same as above */
	sizeof(asn_DEF_measResult_tags_3)
		/sizeof(asn_DEF_measResult_tags_3[0]), /* 2 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_measResult_3,
	2,	/* Elements count */
	&asn_SPC_measResult_specs_3	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_ext1_11[] = {
	{ ATF_POINTER, 1, offsetof(struct MeasResultNR__ext1, cgi_Info),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_CGI_InfoNR,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"cgi-Info"
		},
};
static const int asn_MAP_ext1_oms_11[] = { 0 };
static const ber_tlv_tag_t asn_DEF_ext1_tags_11[] = {
	(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_ext1_tag2el_11[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 } /* cgi-Info */
};
static asn_SEQUENCE_specifics_t asn_SPC_ext1_specs_11 = {
	sizeof(struct MeasResultNR__ext1),
	offsetof(struct MeasResultNR__ext1, _asn_ctx),
	asn_MAP_ext1_tag2el_11,
	1,	/* Count of tags in the map */
	asn_MAP_ext1_oms_11,	/* Optional members */
	1, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_ext1_11 = {
	"ext1",
	"ext1",
	&asn_OP_SEQUENCE,
	asn_DEF_ext1_tags_11,
	sizeof(asn_DEF_ext1_tags_11)
		/sizeof(asn_DEF_ext1_tags_11[0]) - 1, /* 1 */
	asn_DEF_ext1_tags_11,	/* Same as above */
	sizeof(asn_DEF_ext1_tags_11)
		/sizeof(asn_DEF_ext1_tags_11[0]), /* 2 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_ext1_11,
	1,	/* Elements count */
	&asn_SPC_ext1_specs_11	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_MeasResultNR_1[] = {
	{ ATF_POINTER, 1, offsetof(struct MeasResultNR, physCellId),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_PhysCellId,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"physCellId"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct MeasResultNR, measResult),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		0,
		&asn_DEF_measResult_3,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"measResult"
		},
	{ ATF_POINTER, 1, offsetof(struct MeasResultNR, ext1),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		0,
		&asn_DEF_ext1_11,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"ext1"
		},
};
static const int asn_MAP_MeasResultNR_oms_1[] = { 0, 2 };
static const ber_tlv_tag_t asn_DEF_MeasResultNR_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_MeasResultNR_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* physCellId */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* measResult */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 } /* ext1 */
};
asn_SEQUENCE_specifics_t asn_SPC_MeasResultNR_specs_1 = {
	sizeof(struct MeasResultNR),
	offsetof(struct MeasResultNR, _asn_ctx),
	asn_MAP_MeasResultNR_tag2el_1,
	3,	/* Count of tags in the map */
	asn_MAP_MeasResultNR_oms_1,	/* Optional members */
	1, 1,	/* Root/Additions */
	2,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_MeasResultNR = {
	"MeasResultNR",
	"MeasResultNR",
	&asn_OP_SEQUENCE,
	asn_DEF_MeasResultNR_tags_1,
	sizeof(asn_DEF_MeasResultNR_tags_1)
		/sizeof(asn_DEF_MeasResultNR_tags_1[0]), /* 1 */
	asn_DEF_MeasResultNR_tags_1,	/* Same as above */
	sizeof(asn_DEF_MeasResultNR_tags_1)
		/sizeof(asn_DEF_MeasResultNR_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_MeasResultNR_1,
	3,	/* Elements count */
	&asn_SPC_MeasResultNR_specs_1	/* Additional specs */
};

