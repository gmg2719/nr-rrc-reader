/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "38331-f60.asn"
 * 	`asn1c -S /usr/local/share/asn1c -fcompound-names -fskeletons-copy -findirect-choice -gen-PER -pdu=all -D nr-rrc`
 */

#include "BandCombinationList-v1550.h"

static asn_oer_constraints_t asn_OER_type_BandCombinationList_v1550_constr_1 CC_NOTUSED = {
	{ 0, 0 },
	-1	/* (SIZE(1..65536)) */};
asn_per_constraints_t asn_PER_type_BandCombinationList_v1550_constr_1 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 16, -1,  1,  65536 }	/* (SIZE(1..65536)) */,
	0, 0	/* No PER value map */
};
asn_TYPE_member_t asn_MBR_BandCombinationList_v1550_1[] = {
	{ ATF_POINTER, 0, 0,
		(ASN_TAG_CLASS_UNIVERSAL | (16 << 2)),
		0,
		&asn_DEF_BandCombination_v1550,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		""
		},
};
static const ber_tlv_tag_t asn_DEF_BandCombinationList_v1550_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
asn_SET_OF_specifics_t asn_SPC_BandCombinationList_v1550_specs_1 = {
	sizeof(struct BandCombinationList_v1550),
	offsetof(struct BandCombinationList_v1550, _asn_ctx),
	0,	/* XER encoding is XMLDelimitedItemList */
};
asn_TYPE_descriptor_t asn_DEF_BandCombinationList_v1550 = {
	"BandCombinationList-v1550",
	"BandCombinationList-v1550",
	&asn_OP_SEQUENCE_OF,
	asn_DEF_BandCombinationList_v1550_tags_1,
	sizeof(asn_DEF_BandCombinationList_v1550_tags_1)
		/sizeof(asn_DEF_BandCombinationList_v1550_tags_1[0]), /* 1 */
	asn_DEF_BandCombinationList_v1550_tags_1,	/* Same as above */
	sizeof(asn_DEF_BandCombinationList_v1550_tags_1)
		/sizeof(asn_DEF_BandCombinationList_v1550_tags_1[0]), /* 1 */
	{ &asn_OER_type_BandCombinationList_v1550_constr_1, &asn_PER_type_BandCombinationList_v1550_constr_1, SEQUENCE_OF_constraint },
	asn_MBR_BandCombinationList_v1550_1,
	1,	/* Single element */
	&asn_SPC_BandCombinationList_v1550_specs_1	/* Additional specs */
};

