/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "38331-f60.asn"
 * 	`asn1c -S /usr/local/share/asn1c -fcompound-names -fskeletons-copy -findirect-choice -gen-PER -pdu=all -D nr-rrc`
 */

#include "RLC-BearerConfig.h"

/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
static asn_oer_constraints_t asn_OER_type_servedRadioBearer_constr_3 CC_NOTUSED = {
	{ 0, 0 },
	-1};
static asn_per_constraints_t asn_PER_type_servedRadioBearer_constr_3 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 1,  1,  0,  1 }	/* (0..1) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_type_reestablishRLC_constr_6 CC_NOTUSED = {
	{ 0, 0 },
	-1};
static asn_per_constraints_t asn_PER_type_reestablishRLC_constr_6 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 0,  0,  0,  0 }	/* (0..0) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_TYPE_member_t asn_MBR_servedRadioBearer_3[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct RLC_BearerConfig__servedRadioBearer, choice.srb_Identity),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_SRB_Identity,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"srb-Identity"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct RLC_BearerConfig__servedRadioBearer, choice.drb_Identity),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_DRB_Identity,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"drb-Identity"
		},
};
static const asn_TYPE_tag2member_t asn_MAP_servedRadioBearer_tag2el_3[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* srb-Identity */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* drb-Identity */
};
static asn_CHOICE_specifics_t asn_SPC_servedRadioBearer_specs_3 = {
	sizeof(struct RLC_BearerConfig__servedRadioBearer),
	offsetof(struct RLC_BearerConfig__servedRadioBearer, _asn_ctx),
	offsetof(struct RLC_BearerConfig__servedRadioBearer, present),
	sizeof(((struct RLC_BearerConfig__servedRadioBearer *)0)->present),
	asn_MAP_servedRadioBearer_tag2el_3,
	2,	/* Count of tags in the map */
	0, 0,
	-1	/* Extensions start */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_servedRadioBearer_3 = {
	"servedRadioBearer",
	"servedRadioBearer",
	&asn_OP_CHOICE,
	0,	/* No effective tags (pointer) */
	0,	/* No effective tags (count) */
	0,	/* No tags (pointer) */
	0,	/* No tags (count) */
	{ &asn_OER_type_servedRadioBearer_constr_3, &asn_PER_type_servedRadioBearer_constr_3, CHOICE_constraint },
	asn_MBR_servedRadioBearer_3,
	2,	/* Elements count */
	&asn_SPC_servedRadioBearer_specs_3	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_reestablishRLC_value2enum_6[] = {
	{ 0,	4,	"true" }
};
static const unsigned int asn_MAP_reestablishRLC_enum2value_6[] = {
	0	/* true(0) */
};
static const asn_INTEGER_specifics_t asn_SPC_reestablishRLC_specs_6 = {
	asn_MAP_reestablishRLC_value2enum_6,	/* "tag" => N; sorted by tag */
	asn_MAP_reestablishRLC_enum2value_6,	/* N => "tag"; sorted by N */
	1,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_reestablishRLC_tags_6[] = {
	(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_reestablishRLC_6 = {
	"reestablishRLC",
	"reestablishRLC",
	&asn_OP_NativeEnumerated,
	asn_DEF_reestablishRLC_tags_6,
	sizeof(asn_DEF_reestablishRLC_tags_6)
		/sizeof(asn_DEF_reestablishRLC_tags_6[0]) - 1, /* 1 */
	asn_DEF_reestablishRLC_tags_6,	/* Same as above */
	sizeof(asn_DEF_reestablishRLC_tags_6)
		/sizeof(asn_DEF_reestablishRLC_tags_6[0]), /* 2 */
	{ &asn_OER_type_reestablishRLC_constr_6, &asn_PER_type_reestablishRLC_constr_6, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_reestablishRLC_specs_6	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_RLC_BearerConfig_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct RLC_BearerConfig, logicalChannelIdentity),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LogicalChannelIdentity,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"logicalChannelIdentity"
		},
	{ ATF_POINTER, 4, offsetof(struct RLC_BearerConfig, servedRadioBearer),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_servedRadioBearer_3,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"servedRadioBearer"
		},
	{ ATF_POINTER, 3, offsetof(struct RLC_BearerConfig, reestablishRLC),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_reestablishRLC_6,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"reestablishRLC"
		},
	{ ATF_POINTER, 2, offsetof(struct RLC_BearerConfig, rlc_Config),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_RLC_Config,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"rlc-Config"
		},
	{ ATF_POINTER, 1, offsetof(struct RLC_BearerConfig, mac_LogicalChannelConfig),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LogicalChannelConfig,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"mac-LogicalChannelConfig"
		},
};
static const int asn_MAP_RLC_BearerConfig_oms_1[] = { 1, 2, 3, 4 };
static const ber_tlv_tag_t asn_DEF_RLC_BearerConfig_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_RLC_BearerConfig_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* logicalChannelIdentity */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* servedRadioBearer */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* reestablishRLC */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* rlc-Config */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 } /* mac-LogicalChannelConfig */
};
asn_SEQUENCE_specifics_t asn_SPC_RLC_BearerConfig_specs_1 = {
	sizeof(struct RLC_BearerConfig),
	offsetof(struct RLC_BearerConfig, _asn_ctx),
	asn_MAP_RLC_BearerConfig_tag2el_1,
	5,	/* Count of tags in the map */
	asn_MAP_RLC_BearerConfig_oms_1,	/* Optional members */
	4, 0,	/* Root/Additions */
	5,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_RLC_BearerConfig = {
	"RLC-BearerConfig",
	"RLC-BearerConfig",
	&asn_OP_SEQUENCE,
	asn_DEF_RLC_BearerConfig_tags_1,
	sizeof(asn_DEF_RLC_BearerConfig_tags_1)
		/sizeof(asn_DEF_RLC_BearerConfig_tags_1[0]), /* 1 */
	asn_DEF_RLC_BearerConfig_tags_1,	/* Same as above */
	sizeof(asn_DEF_RLC_BearerConfig_tags_1)
		/sizeof(asn_DEF_RLC_BearerConfig_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_RLC_BearerConfig_1,
	5,	/* Elements count */
	&asn_SPC_RLC_BearerConfig_specs_1	/* Additional specs */
};

