/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "38331-f60.asn"
 * 	`asn1c -fcompound-names -findirect-choice -gen-PER -pdu=all -no-gen-example -fincludes-quoted -funnamed-unions -D nr-rrc`
 */

#include "RedirectedCarrierInfo-EUTRA.h"

/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
static asn_oer_constraints_t asn_OER_type_cnType_constr_3 CC_NOTUSED = {
	{ 0, 0 },
	-1};
static asn_per_constraints_t asn_PER_type_cnType_constr_3 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 1,  1,  0,  1 }	/* (0..1) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static const asn_INTEGER_enum_map_t asn_MAP_cnType_value2enum_3[] = {
	{ 0,	3,	"epc" },
	{ 1,	6,	"fiveGC" }
};
static const unsigned int asn_MAP_cnType_enum2value_3[] = {
	0,	/* epc(0) */
	1	/* fiveGC(1) */
};
static const asn_INTEGER_specifics_t asn_SPC_cnType_specs_3 = {
	asn_MAP_cnType_value2enum_3,	/* "tag" => N; sorted by tag */
	asn_MAP_cnType_enum2value_3,	/* N => "tag"; sorted by N */
	2,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_cnType_tags_3[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_cnType_3 = {
	"cnType",
	"cnType",
	&asn_OP_NativeEnumerated,
	asn_DEF_cnType_tags_3,
	sizeof(asn_DEF_cnType_tags_3)
		/sizeof(asn_DEF_cnType_tags_3[0]) - 1, /* 1 */
	asn_DEF_cnType_tags_3,	/* Same as above */
	sizeof(asn_DEF_cnType_tags_3)
		/sizeof(asn_DEF_cnType_tags_3[0]), /* 2 */
	{ &asn_OER_type_cnType_constr_3, &asn_PER_type_cnType_constr_3, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_cnType_specs_3	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_RedirectedCarrierInfo_EUTRA_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct RedirectedCarrierInfo_EUTRA, eutraFrequency),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ARFCN_ValueEUTRA,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"eutraFrequency"
		},
	{ ATF_POINTER, 1, offsetof(struct RedirectedCarrierInfo_EUTRA, cnType),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_cnType_3,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"cnType"
		},
};
static const int asn_MAP_RedirectedCarrierInfo_EUTRA_oms_1[] = { 1 };
static const ber_tlv_tag_t asn_DEF_RedirectedCarrierInfo_EUTRA_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_RedirectedCarrierInfo_EUTRA_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* eutraFrequency */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* cnType */
};
asn_SEQUENCE_specifics_t asn_SPC_RedirectedCarrierInfo_EUTRA_specs_1 = {
	sizeof(struct RedirectedCarrierInfo_EUTRA),
	offsetof(struct RedirectedCarrierInfo_EUTRA, _asn_ctx),
	asn_MAP_RedirectedCarrierInfo_EUTRA_tag2el_1,
	2,	/* Count of tags in the map */
	asn_MAP_RedirectedCarrierInfo_EUTRA_oms_1,	/* Optional members */
	1, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_RedirectedCarrierInfo_EUTRA = {
	"RedirectedCarrierInfo-EUTRA",
	"RedirectedCarrierInfo-EUTRA",
	&asn_OP_SEQUENCE,
	asn_DEF_RedirectedCarrierInfo_EUTRA_tags_1,
	sizeof(asn_DEF_RedirectedCarrierInfo_EUTRA_tags_1)
		/sizeof(asn_DEF_RedirectedCarrierInfo_EUTRA_tags_1[0]), /* 1 */
	asn_DEF_RedirectedCarrierInfo_EUTRA_tags_1,	/* Same as above */
	sizeof(asn_DEF_RedirectedCarrierInfo_EUTRA_tags_1)
		/sizeof(asn_DEF_RedirectedCarrierInfo_EUTRA_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_RedirectedCarrierInfo_EUTRA_1,
	2,	/* Elements count */
	&asn_SPC_RedirectedCarrierInfo_EUTRA_specs_1	/* Additional specs */
};

