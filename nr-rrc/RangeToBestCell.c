/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "38331-f60.asn"
 * 	`asn1c -fcompound-names -findirect-choice -gen-PER -pdu=all -no-gen-example -fincludes-quoted -funnamed-unions -D nr-rrc`
 */

#include "RangeToBestCell.h"

/*
 * This type is implemented using Q_OffsetRange,
 * so here we adjust the DEF accordingly.
 */
static asn_oer_constraints_t asn_OER_type_RangeToBestCell_constr_1 CC_NOTUSED = {
	{ 0, 0 },
	-1};
asn_per_constraints_t asn_PER_type_RangeToBestCell_constr_1 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 5,  5,  0,  30 }	/* (0..30) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static const ber_tlv_tag_t asn_DEF_RangeToBestCell_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
asn_TYPE_descriptor_t asn_DEF_RangeToBestCell = {
	"RangeToBestCell",
	"RangeToBestCell",
	&asn_OP_NativeEnumerated,
	asn_DEF_RangeToBestCell_tags_1,
	sizeof(asn_DEF_RangeToBestCell_tags_1)
		/sizeof(asn_DEF_RangeToBestCell_tags_1[0]), /* 1 */
	asn_DEF_RangeToBestCell_tags_1,	/* Same as above */
	sizeof(asn_DEF_RangeToBestCell_tags_1)
		/sizeof(asn_DEF_RangeToBestCell_tags_1[0]), /* 1 */
	{ 0, 0, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_Q_OffsetRange_specs_1	/* Additional specs */
};

