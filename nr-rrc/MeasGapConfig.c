/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "38331-f60.asn"
 * 	`asn1c -fcompound-names -findirect-choice -gen-PER -pdu=all -no-gen-example -no-gen-OER -fincludes-quoted -funnamed-unions -D nr-rrc-f60`
 */

#include "MeasGapConfig.h"

static asn_TYPE_member_t asn_MBR_ext1_4[] = {
	{ ATF_POINTER, 2, offsetof(struct MeasGapConfig__ext1, gapFR1),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_SetupRelease_GapConfig,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"gapFR1"
		},
	{ ATF_POINTER, 1, offsetof(struct MeasGapConfig__ext1, gapUE),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_SetupRelease_GapConfig,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"gapUE"
		},
};
static const int asn_MAP_ext1_oms_4[] = { 0, 1 };
static const ber_tlv_tag_t asn_DEF_ext1_tags_4[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_ext1_tag2el_4[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* gapFR1 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* gapUE */
};
static asn_SEQUENCE_specifics_t asn_SPC_ext1_specs_4 = {
	sizeof(struct MeasGapConfig__ext1),
	offsetof(struct MeasGapConfig__ext1, _asn_ctx),
	asn_MAP_ext1_tag2el_4,
	2,	/* Count of tags in the map */
	asn_MAP_ext1_oms_4,	/* Optional members */
	2, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_ext1_4 = {
	"ext1",
	"ext1",
	&asn_OP_SEQUENCE,
	asn_DEF_ext1_tags_4,
	sizeof(asn_DEF_ext1_tags_4)
		/sizeof(asn_DEF_ext1_tags_4[0]) - 1, /* 1 */
	asn_DEF_ext1_tags_4,	/* Same as above */
	sizeof(asn_DEF_ext1_tags_4)
		/sizeof(asn_DEF_ext1_tags_4[0]), /* 2 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_ext1_4,
	2,	/* Elements count */
	&asn_SPC_ext1_specs_4	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_MeasGapConfig_1[] = {
	{ ATF_POINTER, 2, offsetof(struct MeasGapConfig, gapFR2),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_SetupRelease_GapConfig,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"gapFR2"
		},
	{ ATF_POINTER, 1, offsetof(struct MeasGapConfig, ext1),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		0,
		&asn_DEF_ext1_4,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"ext1"
		},
};
static const int asn_MAP_MeasGapConfig_oms_1[] = { 0, 1 };
static const ber_tlv_tag_t asn_DEF_MeasGapConfig_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_MeasGapConfig_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* gapFR2 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* ext1 */
};
asn_SEQUENCE_specifics_t asn_SPC_MeasGapConfig_specs_1 = {
	sizeof(struct MeasGapConfig),
	offsetof(struct MeasGapConfig, _asn_ctx),
	asn_MAP_MeasGapConfig_tag2el_1,
	2,	/* Count of tags in the map */
	asn_MAP_MeasGapConfig_oms_1,	/* Optional members */
	1, 1,	/* Root/Additions */
	1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_MeasGapConfig = {
	"MeasGapConfig",
	"MeasGapConfig",
	&asn_OP_SEQUENCE,
	asn_DEF_MeasGapConfig_tags_1,
	sizeof(asn_DEF_MeasGapConfig_tags_1)
		/sizeof(asn_DEF_MeasGapConfig_tags_1[0]), /* 1 */
	asn_DEF_MeasGapConfig_tags_1,	/* Same as above */
	sizeof(asn_DEF_MeasGapConfig_tags_1)
		/sizeof(asn_DEF_MeasGapConfig_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_MeasGapConfig_1,
	2,	/* Elements count */
	&asn_SPC_MeasGapConfig_specs_1	/* Additional specs */
};

