/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "38331-f60.asn"
 * 	`asn1c -fcompound-names -findirect-choice -gen-PER -pdu=all -no-gen-example -no-gen-OER -fincludes-quoted -funnamed-unions -D nr-rrc-f60`
 */

#include "SupportedBandwidth.h"

/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
static asn_per_constraints_t asn_PER_type_fr1_constr_2 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 4,  4,  0,  10 }	/* (0..10) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_fr2_constr_14 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 2,  2,  0,  3 }	/* (0..3) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
asn_per_constraints_t asn_PER_type_SupportedBandwidth_constr_1 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 1,  1,  0,  1 }	/* (0..1) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static const asn_INTEGER_enum_map_t asn_MAP_fr1_value2enum_2[] = {
	{ 0,	4,	"mhz5" },
	{ 1,	5,	"mhz10" },
	{ 2,	5,	"mhz15" },
	{ 3,	5,	"mhz20" },
	{ 4,	5,	"mhz25" },
	{ 5,	5,	"mhz30" },
	{ 6,	5,	"mhz40" },
	{ 7,	5,	"mhz50" },
	{ 8,	5,	"mhz60" },
	{ 9,	5,	"mhz80" },
	{ 10,	6,	"mhz100" }
};
static const unsigned int asn_MAP_fr1_enum2value_2[] = {
	1,	/* mhz10(1) */
	10,	/* mhz100(10) */
	2,	/* mhz15(2) */
	3,	/* mhz20(3) */
	4,	/* mhz25(4) */
	5,	/* mhz30(5) */
	6,	/* mhz40(6) */
	0,	/* mhz5(0) */
	7,	/* mhz50(7) */
	8,	/* mhz60(8) */
	9	/* mhz80(9) */
};
static const asn_INTEGER_specifics_t asn_SPC_fr1_specs_2 = {
	asn_MAP_fr1_value2enum_2,	/* "tag" => N; sorted by tag */
	asn_MAP_fr1_enum2value_2,	/* N => "tag"; sorted by N */
	11,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_fr1_tags_2[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_fr1_2 = {
	"fr1",
	"fr1",
	&asn_OP_NativeEnumerated,
	asn_DEF_fr1_tags_2,
	sizeof(asn_DEF_fr1_tags_2)
		/sizeof(asn_DEF_fr1_tags_2[0]) - 1, /* 1 */
	asn_DEF_fr1_tags_2,	/* Same as above */
	sizeof(asn_DEF_fr1_tags_2)
		/sizeof(asn_DEF_fr1_tags_2[0]), /* 2 */
	{ 0, &asn_PER_type_fr1_constr_2, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_fr1_specs_2	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_fr2_value2enum_14[] = {
	{ 0,	5,	"mhz50" },
	{ 1,	6,	"mhz100" },
	{ 2,	6,	"mhz200" },
	{ 3,	6,	"mhz400" }
};
static const unsigned int asn_MAP_fr2_enum2value_14[] = {
	1,	/* mhz100(1) */
	2,	/* mhz200(2) */
	3,	/* mhz400(3) */
	0	/* mhz50(0) */
};
static const asn_INTEGER_specifics_t asn_SPC_fr2_specs_14 = {
	asn_MAP_fr2_value2enum_14,	/* "tag" => N; sorted by tag */
	asn_MAP_fr2_enum2value_14,	/* N => "tag"; sorted by N */
	4,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_fr2_tags_14[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_fr2_14 = {
	"fr2",
	"fr2",
	&asn_OP_NativeEnumerated,
	asn_DEF_fr2_tags_14,
	sizeof(asn_DEF_fr2_tags_14)
		/sizeof(asn_DEF_fr2_tags_14[0]) - 1, /* 1 */
	asn_DEF_fr2_tags_14,	/* Same as above */
	sizeof(asn_DEF_fr2_tags_14)
		/sizeof(asn_DEF_fr2_tags_14[0]), /* 2 */
	{ 0, &asn_PER_type_fr2_constr_14, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_fr2_specs_14	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_SupportedBandwidth_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct SupportedBandwidth, fr1),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_fr1_2,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"fr1"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct SupportedBandwidth, fr2),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_fr2_14,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"fr2"
		},
};
static const asn_TYPE_tag2member_t asn_MAP_SupportedBandwidth_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* fr1 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* fr2 */
};
asn_CHOICE_specifics_t asn_SPC_SupportedBandwidth_specs_1 = {
	sizeof(struct SupportedBandwidth),
	offsetof(struct SupportedBandwidth, _asn_ctx),
	offsetof(struct SupportedBandwidth, present),
	sizeof(((struct SupportedBandwidth *)0)->present),
	asn_MAP_SupportedBandwidth_tag2el_1,
	2,	/* Count of tags in the map */
	0, 0,
	-1	/* Extensions start */
};
asn_TYPE_descriptor_t asn_DEF_SupportedBandwidth = {
	"SupportedBandwidth",
	"SupportedBandwidth",
	&asn_OP_CHOICE,
	0,	/* No effective tags (pointer) */
	0,	/* No effective tags (count) */
	0,	/* No tags (pointer) */
	0,	/* No tags (count) */
	{ 0, &asn_PER_type_SupportedBandwidth_constr_1, CHOICE_constraint },
	asn_MBR_SupportedBandwidth_1,
	2,	/* Elements count */
	&asn_SPC_SupportedBandwidth_specs_1	/* Additional specs */
};

