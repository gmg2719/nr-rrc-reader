/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "38331-f60.asn"
 * 	`asn1c -fcompound-names -findirect-choice -gen-PER -pdu=all -no-gen-example -no-gen-OER -fincludes-quoted -funnamed-unions -D nr-rrc-f60`
 */

#include "PLMN-RAN-AreaConfig.h"

static int
memb_ran_Area_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
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
	
	if((size >= 1 && size <= 16)) {
		/* Perform validation of the inner elements */
		return td->encoding_constraints.general_constraints(td, sptr, ctfailcb, app_key);
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static asn_per_constraints_t asn_PER_type_ran_Area_constr_3 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 4,  4,  1,  16 }	/* (SIZE(1..16)) */,
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_ran_Area_constr_3 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 4,  4,  1,  16 }	/* (SIZE(1..16)) */,
	0, 0	/* No PER value map */
};
static asn_TYPE_member_t asn_MBR_ran_Area_3[] = {
	{ ATF_POINTER, 0, 0,
		(ASN_TAG_CLASS_UNIVERSAL | (16 << 2)),
		0,
		&asn_DEF_RAN_AreaConfig,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		""
		},
};
static const ber_tlv_tag_t asn_DEF_ran_Area_tags_3[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_SET_OF_specifics_t asn_SPC_ran_Area_specs_3 = {
	sizeof(struct PLMN_RAN_AreaConfig__ran_Area),
	offsetof(struct PLMN_RAN_AreaConfig__ran_Area, _asn_ctx),
	0,	/* XER encoding is XMLDelimitedItemList */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_ran_Area_3 = {
	"ran-Area",
	"ran-Area",
	&asn_OP_SEQUENCE_OF,
	asn_DEF_ran_Area_tags_3,
	sizeof(asn_DEF_ran_Area_tags_3)
		/sizeof(asn_DEF_ran_Area_tags_3[0]) - 1, /* 1 */
	asn_DEF_ran_Area_tags_3,	/* Same as above */
	sizeof(asn_DEF_ran_Area_tags_3)
		/sizeof(asn_DEF_ran_Area_tags_3[0]), /* 2 */
	{ 0, &asn_PER_type_ran_Area_constr_3, SEQUENCE_OF_constraint },
	asn_MBR_ran_Area_3,
	1,	/* Single element */
	&asn_SPC_ran_Area_specs_3	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_PLMN_RAN_AreaConfig_1[] = {
	{ ATF_POINTER, 1, offsetof(struct PLMN_RAN_AreaConfig, plmn_Identity),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_PLMN_Identity,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"plmn-Identity"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct PLMN_RAN_AreaConfig, ran_Area),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		0,
		&asn_DEF_ran_Area_3,
		0,
		{ 0, &asn_PER_memb_ran_Area_constr_3,  memb_ran_Area_constraint_1 },
		0, 0, /* No default value */
		"ran-Area"
		},
};
static const int asn_MAP_PLMN_RAN_AreaConfig_oms_1[] = { 0 };
static const ber_tlv_tag_t asn_DEF_PLMN_RAN_AreaConfig_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_PLMN_RAN_AreaConfig_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* plmn-Identity */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* ran-Area */
};
asn_SEQUENCE_specifics_t asn_SPC_PLMN_RAN_AreaConfig_specs_1 = {
	sizeof(struct PLMN_RAN_AreaConfig),
	offsetof(struct PLMN_RAN_AreaConfig, _asn_ctx),
	asn_MAP_PLMN_RAN_AreaConfig_tag2el_1,
	2,	/* Count of tags in the map */
	asn_MAP_PLMN_RAN_AreaConfig_oms_1,	/* Optional members */
	1, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_PLMN_RAN_AreaConfig = {
	"PLMN-RAN-AreaConfig",
	"PLMN-RAN-AreaConfig",
	&asn_OP_SEQUENCE,
	asn_DEF_PLMN_RAN_AreaConfig_tags_1,
	sizeof(asn_DEF_PLMN_RAN_AreaConfig_tags_1)
		/sizeof(asn_DEF_PLMN_RAN_AreaConfig_tags_1[0]), /* 1 */
	asn_DEF_PLMN_RAN_AreaConfig_tags_1,	/* Same as above */
	sizeof(asn_DEF_PLMN_RAN_AreaConfig_tags_1)
		/sizeof(asn_DEF_PLMN_RAN_AreaConfig_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_PLMN_RAN_AreaConfig_1,
	2,	/* Elements count */
	&asn_SPC_PLMN_RAN_AreaConfig_specs_1	/* Additional specs */
};

