/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "38331-f60.asn"
 * 	`asn1c -S /usr/local/share/asn1c -fcompound-names -fskeletons-copy -findirect-choice -gen-PER -pdu=all -D nr-rrc`
 */

#include "SDAP-Parameters.h"

/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
static asn_oer_constraints_t asn_OER_type_as_ReflectiveQoS_constr_2 CC_NOTUSED = {
	{ 0, 0 },
	-1};
static asn_per_constraints_t asn_PER_type_as_ReflectiveQoS_constr_2 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 0,  0,  0,  0 }	/* (0..0) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static const asn_INTEGER_enum_map_t asn_MAP_as_ReflectiveQoS_value2enum_2[] = {
	{ 0,	4,	"true" }
};
static const unsigned int asn_MAP_as_ReflectiveQoS_enum2value_2[] = {
	0	/* true(0) */
};
static const asn_INTEGER_specifics_t asn_SPC_as_ReflectiveQoS_specs_2 = {
	asn_MAP_as_ReflectiveQoS_value2enum_2,	/* "tag" => N; sorted by tag */
	asn_MAP_as_ReflectiveQoS_enum2value_2,	/* N => "tag"; sorted by N */
	1,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_as_ReflectiveQoS_tags_2[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_as_ReflectiveQoS_2 = {
	"as-ReflectiveQoS",
	"as-ReflectiveQoS",
	&asn_OP_NativeEnumerated,
	asn_DEF_as_ReflectiveQoS_tags_2,
	sizeof(asn_DEF_as_ReflectiveQoS_tags_2)
		/sizeof(asn_DEF_as_ReflectiveQoS_tags_2[0]) - 1, /* 1 */
	asn_DEF_as_ReflectiveQoS_tags_2,	/* Same as above */
	sizeof(asn_DEF_as_ReflectiveQoS_tags_2)
		/sizeof(asn_DEF_as_ReflectiveQoS_tags_2[0]), /* 2 */
	{ &asn_OER_type_as_ReflectiveQoS_constr_2, &asn_PER_type_as_ReflectiveQoS_constr_2, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_as_ReflectiveQoS_specs_2	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_SDAP_Parameters_1[] = {
	{ ATF_POINTER, 1, offsetof(struct SDAP_Parameters, as_ReflectiveQoS),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_as_ReflectiveQoS_2,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"as-ReflectiveQoS"
		},
};
static const int asn_MAP_SDAP_Parameters_oms_1[] = { 0 };
static const ber_tlv_tag_t asn_DEF_SDAP_Parameters_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_SDAP_Parameters_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 } /* as-ReflectiveQoS */
};
asn_SEQUENCE_specifics_t asn_SPC_SDAP_Parameters_specs_1 = {
	sizeof(struct SDAP_Parameters),
	offsetof(struct SDAP_Parameters, _asn_ctx),
	asn_MAP_SDAP_Parameters_tag2el_1,
	1,	/* Count of tags in the map */
	asn_MAP_SDAP_Parameters_oms_1,	/* Optional members */
	1, 0,	/* Root/Additions */
	1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_SDAP_Parameters = {
	"SDAP-Parameters",
	"SDAP-Parameters",
	&asn_OP_SEQUENCE,
	asn_DEF_SDAP_Parameters_tags_1,
	sizeof(asn_DEF_SDAP_Parameters_tags_1)
		/sizeof(asn_DEF_SDAP_Parameters_tags_1[0]), /* 1 */
	asn_DEF_SDAP_Parameters_tags_1,	/* Same as above */
	sizeof(asn_DEF_SDAP_Parameters_tags_1)
		/sizeof(asn_DEF_SDAP_Parameters_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_SDAP_Parameters_1,
	1,	/* Elements count */
	&asn_SPC_SDAP_Parameters_specs_1	/* Additional specs */
};

