/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "38331-f60.asn"
 * 	`asn1c -fcompound-names -findirect-choice -gen-PER -pdu=all -no-gen-example -fincludes-quoted -funnamed-unions -D nr-rrc`
 */

#include "MeasTriggerQuantityEUTRA.h"

static asn_oer_constraints_t asn_OER_type_MeasTriggerQuantityEUTRA_constr_1 CC_NOTUSED = {
	{ 0, 0 },
	-1};
asn_per_constraints_t asn_PER_type_MeasTriggerQuantityEUTRA_constr_1 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 2,  2,  0,  2 }	/* (0..2) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
asn_TYPE_member_t asn_MBR_MeasTriggerQuantityEUTRA_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct MeasTriggerQuantityEUTRA, rsrp),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_RSRP_RangeEUTRA,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"rsrp"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct MeasTriggerQuantityEUTRA, rsrq),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_RSRQ_RangeEUTRA,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"rsrq"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct MeasTriggerQuantityEUTRA, sinr),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_SINR_RangeEUTRA,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"sinr"
		},
};
static const asn_TYPE_tag2member_t asn_MAP_MeasTriggerQuantityEUTRA_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* rsrp */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* rsrq */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 } /* sinr */
};
asn_CHOICE_specifics_t asn_SPC_MeasTriggerQuantityEUTRA_specs_1 = {
	sizeof(struct MeasTriggerQuantityEUTRA),
	offsetof(struct MeasTriggerQuantityEUTRA, _asn_ctx),
	offsetof(struct MeasTriggerQuantityEUTRA, present),
	sizeof(((struct MeasTriggerQuantityEUTRA *)0)->present),
	asn_MAP_MeasTriggerQuantityEUTRA_tag2el_1,
	3,	/* Count of tags in the map */
	0, 0,
	-1	/* Extensions start */
};
asn_TYPE_descriptor_t asn_DEF_MeasTriggerQuantityEUTRA = {
	"MeasTriggerQuantityEUTRA",
	"MeasTriggerQuantityEUTRA",
	&asn_OP_CHOICE,
	0,	/* No effective tags (pointer) */
	0,	/* No effective tags (count) */
	0,	/* No tags (pointer) */
	0,	/* No tags (count) */
	{ &asn_OER_type_MeasTriggerQuantityEUTRA_constr_1, &asn_PER_type_MeasTriggerQuantityEUTRA_constr_1, CHOICE_constraint },
	asn_MBR_MeasTriggerQuantityEUTRA_1,
	3,	/* Elements count */
	&asn_SPC_MeasTriggerQuantityEUTRA_specs_1	/* Additional specs */
};

