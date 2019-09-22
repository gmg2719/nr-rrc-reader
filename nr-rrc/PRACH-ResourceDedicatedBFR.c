/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "38331-f60.asn"
 * 	`asn1c -S /usr/local/share/asn1c -fcompound-names -fskeletons-copy -findirect-choice -gen-PER -pdu=all -D nr-rrc`
 */

#include "PRACH-ResourceDedicatedBFR.h"

static asn_oer_constraints_t asn_OER_type_PRACH_ResourceDedicatedBFR_constr_1 CC_NOTUSED = {
	{ 0, 0 },
	-1};
asn_per_constraints_t asn_PER_type_PRACH_ResourceDedicatedBFR_constr_1 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 1,  1,  0,  1 }	/* (0..1) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
asn_TYPE_member_t asn_MBR_PRACH_ResourceDedicatedBFR_1[] = {
	{ ATF_POINTER, 0, offsetof(struct PRACH_ResourceDedicatedBFR, choice.ssb),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BFR_SSB_Resource,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"ssb"
		},
	{ ATF_POINTER, 0, offsetof(struct PRACH_ResourceDedicatedBFR, choice.csi_RS),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BFR_CSIRS_Resource,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"csi-RS"
		},
};
static const asn_TYPE_tag2member_t asn_MAP_PRACH_ResourceDedicatedBFR_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* ssb */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* csi-RS */
};
asn_CHOICE_specifics_t asn_SPC_PRACH_ResourceDedicatedBFR_specs_1 = {
	sizeof(struct PRACH_ResourceDedicatedBFR),
	offsetof(struct PRACH_ResourceDedicatedBFR, _asn_ctx),
	offsetof(struct PRACH_ResourceDedicatedBFR, present),
	sizeof(((struct PRACH_ResourceDedicatedBFR *)0)->present),
	asn_MAP_PRACH_ResourceDedicatedBFR_tag2el_1,
	2,	/* Count of tags in the map */
	0, 0,
	-1	/* Extensions start */
};
asn_TYPE_descriptor_t asn_DEF_PRACH_ResourceDedicatedBFR = {
	"PRACH-ResourceDedicatedBFR",
	"PRACH-ResourceDedicatedBFR",
	&asn_OP_CHOICE,
	0,	/* No effective tags (pointer) */
	0,	/* No effective tags (count) */
	0,	/* No tags (pointer) */
	0,	/* No tags (count) */
	{ &asn_OER_type_PRACH_ResourceDedicatedBFR_constr_1, &asn_PER_type_PRACH_ResourceDedicatedBFR_constr_1, CHOICE_constraint },
	asn_MBR_PRACH_ResourceDedicatedBFR_1,
	2,	/* Elements count */
	&asn_SPC_PRACH_ResourceDedicatedBFR_specs_1	/* Additional specs */
};

