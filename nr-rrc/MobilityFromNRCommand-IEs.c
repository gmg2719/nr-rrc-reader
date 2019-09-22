/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "38331-f60.asn"
 * 	`asn1c -S /usr/local/share/asn1c -fcompound-names -fskeletons-copy -findirect-choice -gen-PER -pdu=all -D nr-rrc`
 */

#include "MobilityFromNRCommand-IEs.h"

/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
static asn_oer_constraints_t asn_OER_type_targetRAT_Type_constr_2 CC_NOTUSED = {
	{ 0, 0 },
	-1};
static asn_per_constraints_t asn_PER_type_targetRAT_Type_constr_2 CC_NOTUSED = {
	{ APC_CONSTRAINED | APC_EXTENSIBLE,  2,  2,  0,  3 }	/* (0..3,...) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static const asn_INTEGER_enum_map_t asn_MAP_targetRAT_Type_value2enum_2[] = {
	{ 0,	5,	"eutra" },
	{ 1,	6,	"spare3" },
	{ 2,	6,	"spare2" },
	{ 3,	6,	"spare1" }
	/* This list is extensible */
};
static const unsigned int asn_MAP_targetRAT_Type_enum2value_2[] = {
	0,	/* eutra(0) */
	3,	/* spare1(3) */
	2,	/* spare2(2) */
	1	/* spare3(1) */
	/* This list is extensible */
};
static const asn_INTEGER_specifics_t asn_SPC_targetRAT_Type_specs_2 = {
	asn_MAP_targetRAT_Type_value2enum_2,	/* "tag" => N; sorted by tag */
	asn_MAP_targetRAT_Type_enum2value_2,	/* N => "tag"; sorted by N */
	4,	/* Number of elements in the maps */
	5,	/* Extensions before this member */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_targetRAT_Type_tags_2[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_targetRAT_Type_2 = {
	"targetRAT-Type",
	"targetRAT-Type",
	&asn_OP_NativeEnumerated,
	asn_DEF_targetRAT_Type_tags_2,
	sizeof(asn_DEF_targetRAT_Type_tags_2)
		/sizeof(asn_DEF_targetRAT_Type_tags_2[0]) - 1, /* 1 */
	asn_DEF_targetRAT_Type_tags_2,	/* Same as above */
	sizeof(asn_DEF_targetRAT_Type_tags_2)
		/sizeof(asn_DEF_targetRAT_Type_tags_2[0]), /* 2 */
	{ &asn_OER_type_targetRAT_Type_constr_2, &asn_PER_type_targetRAT_Type_constr_2, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_targetRAT_Type_specs_2	/* Additional specs */
};

static const ber_tlv_tag_t asn_DEF_nonCriticalExtension_tags_11[] = {
	(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_SEQUENCE_specifics_t asn_SPC_nonCriticalExtension_specs_11 = {
	sizeof(struct MobilityFromNRCommand_IEs__nonCriticalExtension),
	offsetof(struct MobilityFromNRCommand_IEs__nonCriticalExtension, _asn_ctx),
	0,	/* No top level tags */
	0,	/* No tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_nonCriticalExtension_11 = {
	"nonCriticalExtension",
	"nonCriticalExtension",
	&asn_OP_SEQUENCE,
	asn_DEF_nonCriticalExtension_tags_11,
	sizeof(asn_DEF_nonCriticalExtension_tags_11)
		/sizeof(asn_DEF_nonCriticalExtension_tags_11[0]) - 1, /* 1 */
	asn_DEF_nonCriticalExtension_tags_11,	/* Same as above */
	sizeof(asn_DEF_nonCriticalExtension_tags_11)
		/sizeof(asn_DEF_nonCriticalExtension_tags_11[0]), /* 2 */
	{ 0, 0, SEQUENCE_constraint },
	0, 0,	/* No members */
	&asn_SPC_nonCriticalExtension_specs_11	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_MobilityFromNRCommand_IEs_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct MobilityFromNRCommand_IEs, targetRAT_Type),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_targetRAT_Type_2,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"targetRAT-Type"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct MobilityFromNRCommand_IEs, targetRAT_MessageContainer),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_OCTET_STRING,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"targetRAT-MessageContainer"
		},
	{ ATF_POINTER, 3, offsetof(struct MobilityFromNRCommand_IEs, nas_SecurityParamFromNR),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_OCTET_STRING,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"nas-SecurityParamFromNR"
		},
	{ ATF_POINTER, 2, offsetof(struct MobilityFromNRCommand_IEs, lateNonCriticalExtension),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_OCTET_STRING,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"lateNonCriticalExtension"
		},
	{ ATF_POINTER, 1, offsetof(struct MobilityFromNRCommand_IEs, nonCriticalExtension),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		0,
		&asn_DEF_nonCriticalExtension_11,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"nonCriticalExtension"
		},
};
static const int asn_MAP_MobilityFromNRCommand_IEs_oms_1[] = { 2, 3, 4 };
static const ber_tlv_tag_t asn_DEF_MobilityFromNRCommand_IEs_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_MobilityFromNRCommand_IEs_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* targetRAT-Type */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* targetRAT-MessageContainer */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* nas-SecurityParamFromNR */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* lateNonCriticalExtension */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 } /* nonCriticalExtension */
};
asn_SEQUENCE_specifics_t asn_SPC_MobilityFromNRCommand_IEs_specs_1 = {
	sizeof(struct MobilityFromNRCommand_IEs),
	offsetof(struct MobilityFromNRCommand_IEs, _asn_ctx),
	asn_MAP_MobilityFromNRCommand_IEs_tag2el_1,
	5,	/* Count of tags in the map */
	asn_MAP_MobilityFromNRCommand_IEs_oms_1,	/* Optional members */
	3, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_MobilityFromNRCommand_IEs = {
	"MobilityFromNRCommand-IEs",
	"MobilityFromNRCommand-IEs",
	&asn_OP_SEQUENCE,
	asn_DEF_MobilityFromNRCommand_IEs_tags_1,
	sizeof(asn_DEF_MobilityFromNRCommand_IEs_tags_1)
		/sizeof(asn_DEF_MobilityFromNRCommand_IEs_tags_1[0]), /* 1 */
	asn_DEF_MobilityFromNRCommand_IEs_tags_1,	/* Same as above */
	sizeof(asn_DEF_MobilityFromNRCommand_IEs_tags_1)
		/sizeof(asn_DEF_MobilityFromNRCommand_IEs_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_MobilityFromNRCommand_IEs_1,
	5,	/* Elements count */
	&asn_SPC_MobilityFromNRCommand_IEs_specs_1	/* Additional specs */
};

