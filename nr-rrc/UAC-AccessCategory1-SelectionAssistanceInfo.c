/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "38331-f60.asn"
 * 	`asn1c -S /usr/local/share/asn1c -fcompound-names -fskeletons-copy -findirect-choice -gen-PER -pdu=all -D nr-rrc`
 */

#include "UAC-AccessCategory1-SelectionAssistanceInfo.h"

/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
static asn_oer_constraints_t asn_OER_type_UAC_AccessCategory1_SelectionAssistanceInfo_constr_1 CC_NOTUSED = {
	{ 0, 0 },
	-1};
asn_per_constraints_t asn_PER_type_UAC_AccessCategory1_SelectionAssistanceInfo_constr_1 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 2,  2,  0,  2 }	/* (0..2) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static const asn_INTEGER_enum_map_t asn_MAP_UAC_AccessCategory1_SelectionAssistanceInfo_value2enum_1[] = {
	{ 0,	1,	"a" },
	{ 1,	1,	"b" },
	{ 2,	1,	"c" }
};
static const unsigned int asn_MAP_UAC_AccessCategory1_SelectionAssistanceInfo_enum2value_1[] = {
	0,	/* a(0) */
	1,	/* b(1) */
	2	/* c(2) */
};
const asn_INTEGER_specifics_t asn_SPC_UAC_AccessCategory1_SelectionAssistanceInfo_specs_1 = {
	asn_MAP_UAC_AccessCategory1_SelectionAssistanceInfo_value2enum_1,	/* "tag" => N; sorted by tag */
	asn_MAP_UAC_AccessCategory1_SelectionAssistanceInfo_enum2value_1,	/* N => "tag"; sorted by N */
	3,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_UAC_AccessCategory1_SelectionAssistanceInfo_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
asn_TYPE_descriptor_t asn_DEF_UAC_AccessCategory1_SelectionAssistanceInfo = {
	"UAC-AccessCategory1-SelectionAssistanceInfo",
	"UAC-AccessCategory1-SelectionAssistanceInfo",
	&asn_OP_NativeEnumerated,
	asn_DEF_UAC_AccessCategory1_SelectionAssistanceInfo_tags_1,
	sizeof(asn_DEF_UAC_AccessCategory1_SelectionAssistanceInfo_tags_1)
		/sizeof(asn_DEF_UAC_AccessCategory1_SelectionAssistanceInfo_tags_1[0]), /* 1 */
	asn_DEF_UAC_AccessCategory1_SelectionAssistanceInfo_tags_1,	/* Same as above */
	sizeof(asn_DEF_UAC_AccessCategory1_SelectionAssistanceInfo_tags_1)
		/sizeof(asn_DEF_UAC_AccessCategory1_SelectionAssistanceInfo_tags_1[0]), /* 1 */
	{ &asn_OER_type_UAC_AccessCategory1_SelectionAssistanceInfo_constr_1, &asn_PER_type_UAC_AccessCategory1_SelectionAssistanceInfo_constr_1, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_UAC_AccessCategory1_SelectionAssistanceInfo_specs_1	/* Additional specs */
};

