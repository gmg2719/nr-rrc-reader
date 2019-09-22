/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-InterNodeDefinitions"
 * 	found in "38331-f60.asn"
 * 	`asn1c -fcompound-names -findirect-choice -gen-PER -pdu=all -no-gen-example -no-gen-OER -fincludes-quoted -funnamed-unions -D nr-rrc-f60`
 */

#include "ConfigRestrictModReqSCG.h"

static int
memb_requestedPDCCH_BlindDetectionSCG_constraint_5(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 1 && value <= 15)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static asn_per_constraints_t asn_PER_memb_requestedPDCCH_BlindDetectionSCG_constr_6 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 4,  4,  1,  15 }	/* (1..15) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_TYPE_member_t asn_MBR_ext1_5[] = {
	{ ATF_POINTER, 2, offsetof(struct ConfigRestrictModReqSCG__ext1, requestedPDCCH_BlindDetectionSCG),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ 0, &asn_PER_memb_requestedPDCCH_BlindDetectionSCG_constr_6,  memb_requestedPDCCH_BlindDetectionSCG_constraint_5 },
		0, 0, /* No default value */
		"requestedPDCCH-BlindDetectionSCG"
		},
	{ ATF_POINTER, 1, offsetof(struct ConfigRestrictModReqSCG__ext1, requestedP_MaxEUTRA),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_P_Max,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"requestedP-MaxEUTRA"
		},
};
static const int asn_MAP_ext1_oms_5[] = { 0, 1 };
static const ber_tlv_tag_t asn_DEF_ext1_tags_5[] = {
	(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_ext1_tag2el_5[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* requestedPDCCH-BlindDetectionSCG */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* requestedP-MaxEUTRA */
};
static asn_SEQUENCE_specifics_t asn_SPC_ext1_specs_5 = {
	sizeof(struct ConfigRestrictModReqSCG__ext1),
	offsetof(struct ConfigRestrictModReqSCG__ext1, _asn_ctx),
	asn_MAP_ext1_tag2el_5,
	2,	/* Count of tags in the map */
	asn_MAP_ext1_oms_5,	/* Optional members */
	2, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_ext1_5 = {
	"ext1",
	"ext1",
	&asn_OP_SEQUENCE,
	asn_DEF_ext1_tags_5,
	sizeof(asn_DEF_ext1_tags_5)
		/sizeof(asn_DEF_ext1_tags_5[0]) - 1, /* 1 */
	asn_DEF_ext1_tags_5,	/* Same as above */
	sizeof(asn_DEF_ext1_tags_5)
		/sizeof(asn_DEF_ext1_tags_5[0]), /* 2 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_ext1_5,
	2,	/* Elements count */
	&asn_SPC_ext1_specs_5	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_ConfigRestrictModReqSCG_1[] = {
	{ ATF_POINTER, 3, offsetof(struct ConfigRestrictModReqSCG, requestedBC_MRDC),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BandCombinationInfoSN,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"requestedBC-MRDC"
		},
	{ ATF_POINTER, 2, offsetof(struct ConfigRestrictModReqSCG, requestedP_MaxFR1),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_P_Max,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"requestedP-MaxFR1"
		},
	{ ATF_POINTER, 1, offsetof(struct ConfigRestrictModReqSCG, ext1),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		0,
		&asn_DEF_ext1_5,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"ext1"
		},
};
static const int asn_MAP_ConfigRestrictModReqSCG_oms_1[] = { 0, 1, 2 };
static const ber_tlv_tag_t asn_DEF_ConfigRestrictModReqSCG_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_ConfigRestrictModReqSCG_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* requestedBC-MRDC */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* requestedP-MaxFR1 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 } /* ext1 */
};
asn_SEQUENCE_specifics_t asn_SPC_ConfigRestrictModReqSCG_specs_1 = {
	sizeof(struct ConfigRestrictModReqSCG),
	offsetof(struct ConfigRestrictModReqSCG, _asn_ctx),
	asn_MAP_ConfigRestrictModReqSCG_tag2el_1,
	3,	/* Count of tags in the map */
	asn_MAP_ConfigRestrictModReqSCG_oms_1,	/* Optional members */
	2, 1,	/* Root/Additions */
	2,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_ConfigRestrictModReqSCG = {
	"ConfigRestrictModReqSCG",
	"ConfigRestrictModReqSCG",
	&asn_OP_SEQUENCE,
	asn_DEF_ConfigRestrictModReqSCG_tags_1,
	sizeof(asn_DEF_ConfigRestrictModReqSCG_tags_1)
		/sizeof(asn_DEF_ConfigRestrictModReqSCG_tags_1[0]), /* 1 */
	asn_DEF_ConfigRestrictModReqSCG_tags_1,	/* Same as above */
	sizeof(asn_DEF_ConfigRestrictModReqSCG_tags_1)
		/sizeof(asn_DEF_ConfigRestrictModReqSCG_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_ConfigRestrictModReqSCG_1,
	3,	/* Elements count */
	&asn_SPC_ConfigRestrictModReqSCG_specs_1	/* Additional specs */
};

