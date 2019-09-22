/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "38331-f60.asn"
 * 	`asn1c -fcompound-names -findirect-choice -gen-PER -pdu=all -no-gen-example -fincludes-quoted -funnamed-unions -D nr-rrc`
 */

#include "UAC-BarringPerPLMN.h"

static int
memb_uac_ImplicitACBarringList_constraint_3(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	size_t size;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	/* Determine the number of elements */
	size = _A_CSEQUENCE_FROM_VOID(sptr)->count;
	
	if((size == 63)) {
		/* Perform validation of the inner elements */
		return td->encoding_constraints.general_constraints(td, sptr, ctfailcb, app_key);
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static int
memb_plmn_IdentityIndex_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 1 && value <= 12)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static asn_oer_constraints_t asn_OER_type_uac_ImplicitACBarringList_constr_4 CC_NOTUSED = {
	{ 0, 0 },
	63	/* (SIZE(63..63)) */};
static asn_per_constraints_t asn_PER_type_uac_ImplicitACBarringList_constr_4 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 0,  0,  63,  63 }	/* (SIZE(63..63)) */,
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_memb_uac_ImplicitACBarringList_constr_4 CC_NOTUSED = {
	{ 0, 0 },
	63	/* (SIZE(63..63)) */};
static asn_per_constraints_t asn_PER_memb_uac_ImplicitACBarringList_constr_4 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 0,  0,  63,  63 }	/* (SIZE(63..63)) */,
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_type_uac_ACBarringListType_constr_3 CC_NOTUSED = {
	{ 0, 0 },
	-1};
static asn_per_constraints_t asn_PER_type_uac_ACBarringListType_constr_3 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 1,  1,  0,  1 }	/* (0..1) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_memb_plmn_IdentityIndex_constr_2 CC_NOTUSED = {
	{ 1, 1 }	/* (1..12) */,
	-1};
static asn_per_constraints_t asn_PER_memb_plmn_IdentityIndex_constr_2 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 4,  4,  1,  12 }	/* (1..12) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_TYPE_member_t asn_MBR_uac_ImplicitACBarringList_4[] = {
	{ ATF_POINTER, 0, 0,
		(ASN_TAG_CLASS_UNIVERSAL | (2 << 2)),
		0,
		&asn_DEF_UAC_BarringInfoSetIndex,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		""
		},
};
static const ber_tlv_tag_t asn_DEF_uac_ImplicitACBarringList_tags_4[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_SET_OF_specifics_t asn_SPC_uac_ImplicitACBarringList_specs_4 = {
	sizeof(struct UAC_BarringPerPLMN__uac_ACBarringListType__uac_ImplicitACBarringList),
	offsetof(struct UAC_BarringPerPLMN__uac_ACBarringListType__uac_ImplicitACBarringList, _asn_ctx),
	0,	/* XER encoding is XMLDelimitedItemList */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_uac_ImplicitACBarringList_4 = {
	"uac-ImplicitACBarringList",
	"uac-ImplicitACBarringList",
	&asn_OP_SEQUENCE_OF,
	asn_DEF_uac_ImplicitACBarringList_tags_4,
	sizeof(asn_DEF_uac_ImplicitACBarringList_tags_4)
		/sizeof(asn_DEF_uac_ImplicitACBarringList_tags_4[0]) - 1, /* 1 */
	asn_DEF_uac_ImplicitACBarringList_tags_4,	/* Same as above */
	sizeof(asn_DEF_uac_ImplicitACBarringList_tags_4)
		/sizeof(asn_DEF_uac_ImplicitACBarringList_tags_4[0]), /* 2 */
	{ &asn_OER_type_uac_ImplicitACBarringList_constr_4, &asn_PER_type_uac_ImplicitACBarringList_constr_4, SEQUENCE_OF_constraint },
	asn_MBR_uac_ImplicitACBarringList_4,
	1,	/* Single element */
	&asn_SPC_uac_ImplicitACBarringList_specs_4	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_uac_ACBarringListType_3[] = {
	{ ATF_POINTER, 0, offsetof(struct UAC_BarringPerPLMN__uac_ACBarringListType, uac_ImplicitACBarringList),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		0,
		&asn_DEF_uac_ImplicitACBarringList_4,
		0,
		{ &asn_OER_memb_uac_ImplicitACBarringList_constr_4, &asn_PER_memb_uac_ImplicitACBarringList_constr_4,  memb_uac_ImplicitACBarringList_constraint_3 },
		0, 0, /* No default value */
		"uac-ImplicitACBarringList"
		},
	{ ATF_POINTER, 0, offsetof(struct UAC_BarringPerPLMN__uac_ACBarringListType, uac_ExplicitACBarringList),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_UAC_BarringPerCatList,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"uac-ExplicitACBarringList"
		},
};
static const asn_TYPE_tag2member_t asn_MAP_uac_ACBarringListType_tag2el_3[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* uac-ImplicitACBarringList */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* uac-ExplicitACBarringList */
};
static asn_CHOICE_specifics_t asn_SPC_uac_ACBarringListType_specs_3 = {
	sizeof(struct UAC_BarringPerPLMN__uac_ACBarringListType),
	offsetof(struct UAC_BarringPerPLMN__uac_ACBarringListType, _asn_ctx),
	offsetof(struct UAC_BarringPerPLMN__uac_ACBarringListType, present),
	sizeof(((struct UAC_BarringPerPLMN__uac_ACBarringListType *)0)->present),
	asn_MAP_uac_ACBarringListType_tag2el_3,
	2,	/* Count of tags in the map */
	0, 0,
	-1	/* Extensions start */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_uac_ACBarringListType_3 = {
	"uac-ACBarringListType",
	"uac-ACBarringListType",
	&asn_OP_CHOICE,
	0,	/* No effective tags (pointer) */
	0,	/* No effective tags (count) */
	0,	/* No tags (pointer) */
	0,	/* No tags (count) */
	{ &asn_OER_type_uac_ACBarringListType_constr_3, &asn_PER_type_uac_ACBarringListType_constr_3, CHOICE_constraint },
	asn_MBR_uac_ACBarringListType_3,
	2,	/* Elements count */
	&asn_SPC_uac_ACBarringListType_specs_3	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_UAC_BarringPerPLMN_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct UAC_BarringPerPLMN, plmn_IdentityIndex),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ &asn_OER_memb_plmn_IdentityIndex_constr_2, &asn_PER_memb_plmn_IdentityIndex_constr_2,  memb_plmn_IdentityIndex_constraint_1 },
		0, 0, /* No default value */
		"plmn-IdentityIndex"
		},
	{ ATF_POINTER, 1, offsetof(struct UAC_BarringPerPLMN, uac_ACBarringListType),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_uac_ACBarringListType_3,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"uac-ACBarringListType"
		},
};
static const int asn_MAP_UAC_BarringPerPLMN_oms_1[] = { 1 };
static const ber_tlv_tag_t asn_DEF_UAC_BarringPerPLMN_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_UAC_BarringPerPLMN_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* plmn-IdentityIndex */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* uac-ACBarringListType */
};
asn_SEQUENCE_specifics_t asn_SPC_UAC_BarringPerPLMN_specs_1 = {
	sizeof(struct UAC_BarringPerPLMN),
	offsetof(struct UAC_BarringPerPLMN, _asn_ctx),
	asn_MAP_UAC_BarringPerPLMN_tag2el_1,
	2,	/* Count of tags in the map */
	asn_MAP_UAC_BarringPerPLMN_oms_1,	/* Optional members */
	1, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_UAC_BarringPerPLMN = {
	"UAC-BarringPerPLMN",
	"UAC-BarringPerPLMN",
	&asn_OP_SEQUENCE,
	asn_DEF_UAC_BarringPerPLMN_tags_1,
	sizeof(asn_DEF_UAC_BarringPerPLMN_tags_1)
		/sizeof(asn_DEF_UAC_BarringPerPLMN_tags_1[0]), /* 1 */
	asn_DEF_UAC_BarringPerPLMN_tags_1,	/* Same as above */
	sizeof(asn_DEF_UAC_BarringPerPLMN_tags_1)
		/sizeof(asn_DEF_UAC_BarringPerPLMN_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_UAC_BarringPerPLMN_1,
	2,	/* Elements count */
	&asn_SPC_UAC_BarringPerPLMN_specs_1	/* Additional specs */
};

