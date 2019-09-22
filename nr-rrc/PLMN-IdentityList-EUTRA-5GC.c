/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "38331-f60.asn"
 * 	`asn1c -fcompound-names -findirect-choice -gen-PER -pdu=all -no-gen-example -no-gen-OER -fincludes-quoted -funnamed-unions -D nr-rrc-f60`
 */

#include "PLMN-IdentityList-EUTRA-5GC.h"

asn_per_constraints_t asn_PER_type_PLMN_IdentityList_EUTRA_5GC_constr_1 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 4,  4,  1,  12 }	/* (SIZE(1..12)) */,
	0, 0	/* No PER value map */
};
asn_TYPE_member_t asn_MBR_PLMN_IdentityList_EUTRA_5GC_1[] = {
	{ ATF_POINTER, 0, 0,
		-1 /* Ambiguous tag (CHOICE?) */,
		0,
		&asn_DEF_PLMN_Identity_EUTRA_5GC,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		""
		},
};
static const ber_tlv_tag_t asn_DEF_PLMN_IdentityList_EUTRA_5GC_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
asn_SET_OF_specifics_t asn_SPC_PLMN_IdentityList_EUTRA_5GC_specs_1 = {
	sizeof(struct PLMN_IdentityList_EUTRA_5GC),
	offsetof(struct PLMN_IdentityList_EUTRA_5GC, _asn_ctx),
	2,	/* XER encoding is XMLValueList */
};
asn_TYPE_descriptor_t asn_DEF_PLMN_IdentityList_EUTRA_5GC = {
	"PLMN-IdentityList-EUTRA-5GC",
	"PLMN-IdentityList-EUTRA-5GC",
	&asn_OP_SEQUENCE_OF,
	asn_DEF_PLMN_IdentityList_EUTRA_5GC_tags_1,
	sizeof(asn_DEF_PLMN_IdentityList_EUTRA_5GC_tags_1)
		/sizeof(asn_DEF_PLMN_IdentityList_EUTRA_5GC_tags_1[0]), /* 1 */
	asn_DEF_PLMN_IdentityList_EUTRA_5GC_tags_1,	/* Same as above */
	sizeof(asn_DEF_PLMN_IdentityList_EUTRA_5GC_tags_1)
		/sizeof(asn_DEF_PLMN_IdentityList_EUTRA_5GC_tags_1[0]), /* 1 */
	{ 0, &asn_PER_type_PLMN_IdentityList_EUTRA_5GC_constr_1, SEQUENCE_OF_constraint },
	asn_MBR_PLMN_IdentityList_EUTRA_5GC_1,
	1,	/* Single element */
	&asn_SPC_PLMN_IdentityList_EUTRA_5GC_specs_1	/* Additional specs */
};

