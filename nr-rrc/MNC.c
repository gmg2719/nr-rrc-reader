/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "38331-f60.asn"
 * 	`asn1c -fcompound-names -findirect-choice -gen-PER -pdu=all -no-gen-example -fincludes-quoted -funnamed-unions -D nr-rrc`
 */

#include "MNC.h"

static asn_oer_constraints_t asn_OER_type_MNC_constr_1 CC_NOTUSED = {
	{ 0, 0 },
	-1	/* (SIZE(2..3)) */};
asn_per_constraints_t asn_PER_type_MNC_constr_1 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 1,  1,  2,  3 }	/* (SIZE(2..3)) */,
	0, 0	/* No PER value map */
};
asn_TYPE_member_t asn_MBR_MNC_1[] = {
	{ ATF_POINTER, 0, 0,
		(ASN_TAG_CLASS_UNIVERSAL | (2 << 2)),
		0,
		&asn_DEF_MCC_MNC_Digit,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		""
		},
};
static const ber_tlv_tag_t asn_DEF_MNC_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
asn_SET_OF_specifics_t asn_SPC_MNC_specs_1 = {
	sizeof(struct MNC),
	offsetof(struct MNC, _asn_ctx),
	0,	/* XER encoding is XMLDelimitedItemList */
};
asn_TYPE_descriptor_t asn_DEF_MNC = {
	"MNC",
	"MNC",
	&asn_OP_SEQUENCE_OF,
	asn_DEF_MNC_tags_1,
	sizeof(asn_DEF_MNC_tags_1)
		/sizeof(asn_DEF_MNC_tags_1[0]), /* 1 */
	asn_DEF_MNC_tags_1,	/* Same as above */
	sizeof(asn_DEF_MNC_tags_1)
		/sizeof(asn_DEF_MNC_tags_1[0]), /* 1 */
	{ &asn_OER_type_MNC_constr_1, &asn_PER_type_MNC_constr_1, SEQUENCE_OF_constraint },
	asn_MBR_MNC_1,
	1,	/* Single element */
	&asn_SPC_MNC_specs_1	/* Additional specs */
};

