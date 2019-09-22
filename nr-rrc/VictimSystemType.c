/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-InterNodeDefinitions"
 * 	found in "38331-f60.asn"
 * 	`asn1c -fcompound-names -findirect-choice -gen-PER -pdu=all -no-gen-example -no-gen-OER -fincludes-quoted -funnamed-unions -D nr-rrc-f60`
 */

#include "VictimSystemType.h"

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
/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
static asn_per_constraints_t asn_PER_type_gps_constr_2 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 0,  0,  0,  0 }	/* (0..0) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_glonass_constr_4 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 0,  0,  0,  0 }	/* (0..0) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_bds_constr_6 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 0,  0,  0,  0 }	/* (0..0) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_galileo_constr_8 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 0,  0,  0,  0 }	/* (0..0) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_wlan_constr_10 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 0,  0,  0,  0 }	/* (0..0) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_bluetooth_constr_12 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 0,  0,  0,  0 }	/* (0..0) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static const asn_INTEGER_enum_map_t asn_MAP_gps_value2enum_2[] = {
	{ 0,	4,	"true" }
};
static const unsigned int asn_MAP_gps_enum2value_2[] = {
	0	/* true(0) */
};
static const asn_INTEGER_specifics_t asn_SPC_gps_specs_2 = {
	asn_MAP_gps_value2enum_2,	/* "tag" => N; sorted by tag */
	asn_MAP_gps_enum2value_2,	/* N => "tag"; sorted by N */
	1,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_gps_tags_2[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_gps_2 = {
	"gps",
	"gps",
	&asn_OP_NativeEnumerated,
	asn_DEF_gps_tags_2,
	sizeof(asn_DEF_gps_tags_2)
		/sizeof(asn_DEF_gps_tags_2[0]) - 1, /* 1 */
	asn_DEF_gps_tags_2,	/* Same as above */
	sizeof(asn_DEF_gps_tags_2)
		/sizeof(asn_DEF_gps_tags_2[0]), /* 2 */
	{ 0, &asn_PER_type_gps_constr_2, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_gps_specs_2	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_glonass_value2enum_4[] = {
	{ 0,	4,	"true" }
};
static const unsigned int asn_MAP_glonass_enum2value_4[] = {
	0	/* true(0) */
};
static const asn_INTEGER_specifics_t asn_SPC_glonass_specs_4 = {
	asn_MAP_glonass_value2enum_4,	/* "tag" => N; sorted by tag */
	asn_MAP_glonass_enum2value_4,	/* N => "tag"; sorted by N */
	1,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_glonass_tags_4[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_glonass_4 = {
	"glonass",
	"glonass",
	&asn_OP_NativeEnumerated,
	asn_DEF_glonass_tags_4,
	sizeof(asn_DEF_glonass_tags_4)
		/sizeof(asn_DEF_glonass_tags_4[0]) - 1, /* 1 */
	asn_DEF_glonass_tags_4,	/* Same as above */
	sizeof(asn_DEF_glonass_tags_4)
		/sizeof(asn_DEF_glonass_tags_4[0]), /* 2 */
	{ 0, &asn_PER_type_glonass_constr_4, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_glonass_specs_4	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_bds_value2enum_6[] = {
	{ 0,	4,	"true" }
};
static const unsigned int asn_MAP_bds_enum2value_6[] = {
	0	/* true(0) */
};
static const asn_INTEGER_specifics_t asn_SPC_bds_specs_6 = {
	asn_MAP_bds_value2enum_6,	/* "tag" => N; sorted by tag */
	asn_MAP_bds_enum2value_6,	/* N => "tag"; sorted by N */
	1,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_bds_tags_6[] = {
	(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_bds_6 = {
	"bds",
	"bds",
	&asn_OP_NativeEnumerated,
	asn_DEF_bds_tags_6,
	sizeof(asn_DEF_bds_tags_6)
		/sizeof(asn_DEF_bds_tags_6[0]) - 1, /* 1 */
	asn_DEF_bds_tags_6,	/* Same as above */
	sizeof(asn_DEF_bds_tags_6)
		/sizeof(asn_DEF_bds_tags_6[0]), /* 2 */
	{ 0, &asn_PER_type_bds_constr_6, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_bds_specs_6	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_galileo_value2enum_8[] = {
	{ 0,	4,	"true" }
};
static const unsigned int asn_MAP_galileo_enum2value_8[] = {
	0	/* true(0) */
};
static const asn_INTEGER_specifics_t asn_SPC_galileo_specs_8 = {
	asn_MAP_galileo_value2enum_8,	/* "tag" => N; sorted by tag */
	asn_MAP_galileo_enum2value_8,	/* N => "tag"; sorted by N */
	1,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_galileo_tags_8[] = {
	(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_galileo_8 = {
	"galileo",
	"galileo",
	&asn_OP_NativeEnumerated,
	asn_DEF_galileo_tags_8,
	sizeof(asn_DEF_galileo_tags_8)
		/sizeof(asn_DEF_galileo_tags_8[0]) - 1, /* 1 */
	asn_DEF_galileo_tags_8,	/* Same as above */
	sizeof(asn_DEF_galileo_tags_8)
		/sizeof(asn_DEF_galileo_tags_8[0]), /* 2 */
	{ 0, &asn_PER_type_galileo_constr_8, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_galileo_specs_8	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_wlan_value2enum_10[] = {
	{ 0,	4,	"true" }
};
static const unsigned int asn_MAP_wlan_enum2value_10[] = {
	0	/* true(0) */
};
static const asn_INTEGER_specifics_t asn_SPC_wlan_specs_10 = {
	asn_MAP_wlan_value2enum_10,	/* "tag" => N; sorted by tag */
	asn_MAP_wlan_enum2value_10,	/* N => "tag"; sorted by N */
	1,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_wlan_tags_10[] = {
	(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_wlan_10 = {
	"wlan",
	"wlan",
	&asn_OP_NativeEnumerated,
	asn_DEF_wlan_tags_10,
	sizeof(asn_DEF_wlan_tags_10)
		/sizeof(asn_DEF_wlan_tags_10[0]) - 1, /* 1 */
	asn_DEF_wlan_tags_10,	/* Same as above */
	sizeof(asn_DEF_wlan_tags_10)
		/sizeof(asn_DEF_wlan_tags_10[0]), /* 2 */
	{ 0, &asn_PER_type_wlan_constr_10, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_wlan_specs_10	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_bluetooth_value2enum_12[] = {
	{ 0,	4,	"true" }
};
static const unsigned int asn_MAP_bluetooth_enum2value_12[] = {
	0	/* true(0) */
};
static const asn_INTEGER_specifics_t asn_SPC_bluetooth_specs_12 = {
	asn_MAP_bluetooth_value2enum_12,	/* "tag" => N; sorted by tag */
	asn_MAP_bluetooth_enum2value_12,	/* N => "tag"; sorted by N */
	1,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_bluetooth_tags_12[] = {
	(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_bluetooth_12 = {
	"bluetooth",
	"bluetooth",
	&asn_OP_NativeEnumerated,
	asn_DEF_bluetooth_tags_12,
	sizeof(asn_DEF_bluetooth_tags_12)
		/sizeof(asn_DEF_bluetooth_tags_12[0]) - 1, /* 1 */
	asn_DEF_bluetooth_tags_12,	/* Same as above */
	sizeof(asn_DEF_bluetooth_tags_12)
		/sizeof(asn_DEF_bluetooth_tags_12[0]), /* 2 */
	{ 0, &asn_PER_type_bluetooth_constr_12, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_bluetooth_specs_12	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_VictimSystemType_1[] = {
	{ ATF_POINTER, 6, offsetof(struct VictimSystemType, gps),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_gps_2,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"gps"
		},
	{ ATF_POINTER, 5, offsetof(struct VictimSystemType, glonass),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_glonass_4,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"glonass"
		},
	{ ATF_POINTER, 4, offsetof(struct VictimSystemType, bds),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_bds_6,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"bds"
		},
	{ ATF_POINTER, 3, offsetof(struct VictimSystemType, galileo),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_galileo_8,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"galileo"
		},
	{ ATF_POINTER, 2, offsetof(struct VictimSystemType, wlan),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_wlan_10,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"wlan"
		},
	{ ATF_POINTER, 1, offsetof(struct VictimSystemType, bluetooth),
		(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_bluetooth_12,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"bluetooth"
		},
};
static const int asn_MAP_VictimSystemType_oms_1[] = { 0, 1, 2, 3, 4, 5 };
static const ber_tlv_tag_t asn_DEF_VictimSystemType_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_VictimSystemType_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* gps */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* glonass */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* bds */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* galileo */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 }, /* wlan */
    { (ASN_TAG_CLASS_CONTEXT | (5 << 2)), 5, 0, 0 } /* bluetooth */
};
asn_SEQUENCE_specifics_t asn_SPC_VictimSystemType_specs_1 = {
	sizeof(struct VictimSystemType),
	offsetof(struct VictimSystemType, _asn_ctx),
	asn_MAP_VictimSystemType_tag2el_1,
	6,	/* Count of tags in the map */
	asn_MAP_VictimSystemType_oms_1,	/* Optional members */
	6, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_VictimSystemType = {
	"VictimSystemType",
	"VictimSystemType",
	&asn_OP_SEQUENCE,
	asn_DEF_VictimSystemType_tags_1,
	sizeof(asn_DEF_VictimSystemType_tags_1)
		/sizeof(asn_DEF_VictimSystemType_tags_1[0]), /* 1 */
	asn_DEF_VictimSystemType_tags_1,	/* Same as above */
	sizeof(asn_DEF_VictimSystemType_tags_1)
		/sizeof(asn_DEF_VictimSystemType_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_VictimSystemType_1,
	6,	/* Elements count */
	&asn_SPC_VictimSystemType_specs_1	/* Additional specs */
};

