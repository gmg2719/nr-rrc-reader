/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-InterNodeDefinitions"
 * 	found in "38331-f60.asn"
 * 	`asn1c -fcompound-names -findirect-choice -gen-PER -pdu=all -no-gen-example -fincludes-quoted -funnamed-unions -D nr-rrc`
 */

#include "CG-ConfigInfo-IEs.h"

/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
static int
memb_measResultSCG_constraint_6(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	const OCTET_STRING_t *st = (const OCTET_STRING_t *)sptr;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	
	if(1 /* No applicable constraints whatsoever */) {
		(void)st; /* Unused variable */
		/* Nothing is here. See below */
	}
	
	return td->encoding_constraints.general_constraints(td, sptr, ctfailcb, app_key);
}

static int
memb_ue_CapabilityInfo_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	const OCTET_STRING_t *st = (const OCTET_STRING_t *)sptr;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	
	if(1 /* No applicable constraints whatsoever */) {
		(void)st; /* Unused variable */
		/* Nothing is here. See below */
	}
	
	return td->encoding_constraints.general_constraints(td, sptr, ctfailcb, app_key);
}

static int
memb_candidateCellInfoListSN_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	const OCTET_STRING_t *st = (const OCTET_STRING_t *)sptr;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	
	if(1 /* No applicable constraints whatsoever */) {
		(void)st; /* Unused variable */
		/* Nothing is here. See below */
	}
	
	return td->encoding_constraints.general_constraints(td, sptr, ctfailcb, app_key);
}

static int
memb_sourceConfigSCG_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	const OCTET_STRING_t *st = (const OCTET_STRING_t *)sptr;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	
	if(1 /* No applicable constraints whatsoever */) {
		(void)st; /* Unused variable */
		/* Nothing is here. See below */
	}
	
	return td->encoding_constraints.general_constraints(td, sptr, ctfailcb, app_key);
}

static int
memb_scg_RB_Config_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	const OCTET_STRING_t *st = (const OCTET_STRING_t *)sptr;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	
	if(1 /* No applicable constraints whatsoever */) {
		(void)st; /* Unused variable */
		/* Nothing is here. See below */
	}
	
	return td->encoding_constraints.general_constraints(td, sptr, ctfailcb, app_key);
}

static int
memb_mcg_RB_Config_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	const OCTET_STRING_t *st = (const OCTET_STRING_t *)sptr;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	
	if(1 /* No applicable constraints whatsoever */) {
		(void)st; /* Unused variable */
		/* Nothing is here. See below */
	}
	
	return td->encoding_constraints.general_constraints(td, sptr, ctfailcb, app_key);
}

static asn_oer_constraints_t asn_OER_type_failureType_constr_7 CC_NOTUSED = {
	{ 0, 0 },
	-1};
static asn_per_constraints_t asn_PER_type_failureType_constr_7 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 3,  3,  0,  5 }	/* (0..5) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_memb_measResultSCG_constr_14 CC_NOTUSED = {
	{ 0, 0 },
	-1	/* (SIZE(0..MAX)) */};
static asn_per_constraints_t asn_PER_memb_measResultSCG_constr_14 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_SEMI_CONSTRAINED,	-1, -1,  0,  0 }	/* (SIZE(0..MAX)) */,
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_memb_ue_CapabilityInfo_constr_2 CC_NOTUSED = {
	{ 0, 0 },
	-1	/* (SIZE(0..MAX)) */};
static asn_per_constraints_t asn_PER_memb_ue_CapabilityInfo_constr_2 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_SEMI_CONSTRAINED,	-1, -1,  0,  0 }	/* (SIZE(0..MAX)) */,
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_memb_candidateCellInfoListSN_constr_4 CC_NOTUSED = {
	{ 0, 0 },
	-1	/* (SIZE(0..MAX)) */};
static asn_per_constraints_t asn_PER_memb_candidateCellInfoListSN_constr_4 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_SEMI_CONSTRAINED,	-1, -1,  0,  0 }	/* (SIZE(0..MAX)) */,
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_memb_sourceConfigSCG_constr_18 CC_NOTUSED = {
	{ 0, 0 },
	-1	/* (SIZE(0..MAX)) */};
static asn_per_constraints_t asn_PER_memb_sourceConfigSCG_constr_18 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_SEMI_CONSTRAINED,	-1, -1,  0,  0 }	/* (SIZE(0..MAX)) */,
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_memb_scg_RB_Config_constr_19 CC_NOTUSED = {
	{ 0, 0 },
	-1	/* (SIZE(0..MAX)) */};
static asn_per_constraints_t asn_PER_memb_scg_RB_Config_constr_19 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_SEMI_CONSTRAINED,	-1, -1,  0,  0 }	/* (SIZE(0..MAX)) */,
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_memb_mcg_RB_Config_constr_20 CC_NOTUSED = {
	{ 0, 0 },
	-1	/* (SIZE(0..MAX)) */};
static asn_per_constraints_t asn_PER_memb_mcg_RB_Config_constr_20 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_SEMI_CONSTRAINED,	-1, -1,  0,  0 }	/* (SIZE(0..MAX)) */,
	0, 0	/* No PER value map */
};
static const asn_INTEGER_enum_map_t asn_MAP_failureType_value2enum_7[] = {
	{ 0,	11,	"t310-Expiry" },
	{ 1,	19,	"randomAccessProblem" },
	{ 2,	14,	"rlc-MaxNumRetx" },
	{ 3,	24,	"synchReconfigFailure-SCG" },
	{ 4,	19,	"scg-reconfigFailure" },
	{ 5,	21,	"srb3-IntegrityFailure" }
};
static const unsigned int asn_MAP_failureType_enum2value_7[] = {
	1,	/* randomAccessProblem(1) */
	2,	/* rlc-MaxNumRetx(2) */
	4,	/* scg-reconfigFailure(4) */
	5,	/* srb3-IntegrityFailure(5) */
	3,	/* synchReconfigFailure-SCG(3) */
	0	/* t310-Expiry(0) */
};
static const asn_INTEGER_specifics_t asn_SPC_failureType_specs_7 = {
	asn_MAP_failureType_value2enum_7,	/* "tag" => N; sorted by tag */
	asn_MAP_failureType_enum2value_7,	/* N => "tag"; sorted by N */
	6,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_failureType_tags_7[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_failureType_7 = {
	"failureType",
	"failureType",
	&asn_OP_NativeEnumerated,
	asn_DEF_failureType_tags_7,
	sizeof(asn_DEF_failureType_tags_7)
		/sizeof(asn_DEF_failureType_tags_7[0]) - 1, /* 1 */
	asn_DEF_failureType_tags_7,	/* Same as above */
	sizeof(asn_DEF_failureType_tags_7)
		/sizeof(asn_DEF_failureType_tags_7[0]), /* 2 */
	{ &asn_OER_type_failureType_constr_7, &asn_PER_type_failureType_constr_7, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_failureType_specs_7	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_scgFailureInfo_6[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct CG_ConfigInfo_IEs__scgFailureInfo, failureType),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_failureType_7,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"failureType"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct CG_ConfigInfo_IEs__scgFailureInfo, measResultSCG),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_OCTET_STRING,
		0,
		{ &asn_OER_memb_measResultSCG_constr_14, &asn_PER_memb_measResultSCG_constr_14,  memb_measResultSCG_constraint_6 },
		0, 0, /* No default value */
		"measResultSCG"
		},
};
static const ber_tlv_tag_t asn_DEF_scgFailureInfo_tags_6[] = {
	(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_scgFailureInfo_tag2el_6[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* failureType */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* measResultSCG */
};
static asn_SEQUENCE_specifics_t asn_SPC_scgFailureInfo_specs_6 = {
	sizeof(struct CG_ConfigInfo_IEs__scgFailureInfo),
	offsetof(struct CG_ConfigInfo_IEs__scgFailureInfo, _asn_ctx),
	asn_MAP_scgFailureInfo_tag2el_6,
	2,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_scgFailureInfo_6 = {
	"scgFailureInfo",
	"scgFailureInfo",
	&asn_OP_SEQUENCE,
	asn_DEF_scgFailureInfo_tags_6,
	sizeof(asn_DEF_scgFailureInfo_tags_6)
		/sizeof(asn_DEF_scgFailureInfo_tags_6[0]) - 1, /* 1 */
	asn_DEF_scgFailureInfo_tags_6,	/* Same as above */
	sizeof(asn_DEF_scgFailureInfo_tags_6)
		/sizeof(asn_DEF_scgFailureInfo_tags_6[0]), /* 2 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_scgFailureInfo_6,
	2,	/* Elements count */
	&asn_SPC_scgFailureInfo_specs_6	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_CG_ConfigInfo_IEs_1[] = {
	{ ATF_POINTER, 13, offsetof(struct CG_ConfigInfo_IEs, ue_CapabilityInfo),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_OCTET_STRING,
		0,
		{ &asn_OER_memb_ue_CapabilityInfo_constr_2, &asn_PER_memb_ue_CapabilityInfo_constr_2,  memb_ue_CapabilityInfo_constraint_1 },
		0, 0, /* No default value */
		"ue-CapabilityInfo"
		},
	{ ATF_POINTER, 12, offsetof(struct CG_ConfigInfo_IEs, candidateCellInfoListMN),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_MeasResultList2NR,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"candidateCellInfoListMN"
		},
	{ ATF_POINTER, 11, offsetof(struct CG_ConfigInfo_IEs, candidateCellInfoListSN),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_OCTET_STRING,
		0,
		{ &asn_OER_memb_candidateCellInfoListSN_constr_4, &asn_PER_memb_candidateCellInfoListSN_constr_4,  memb_candidateCellInfoListSN_constraint_1 },
		0, 0, /* No default value */
		"candidateCellInfoListSN"
		},
	{ ATF_POINTER, 10, offsetof(struct CG_ConfigInfo_IEs, measResultCellListSFTD_NR),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_MeasResultCellListSFTD_NR,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"measResultCellListSFTD-NR"
		},
	{ ATF_POINTER, 9, offsetof(struct CG_ConfigInfo_IEs, scgFailureInfo),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		0,
		&asn_DEF_scgFailureInfo_6,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"scgFailureInfo"
		},
	{ ATF_POINTER, 8, offsetof(struct CG_ConfigInfo_IEs, configRestrictInfo),
		(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ConfigRestrictInfoSCG,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"configRestrictInfo"
		},
	{ ATF_POINTER, 7, offsetof(struct CG_ConfigInfo_IEs, drx_InfoMCG),
		(ASN_TAG_CLASS_CONTEXT | (6 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_DRX_Info,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"drx-InfoMCG"
		},
	{ ATF_POINTER, 6, offsetof(struct CG_ConfigInfo_IEs, measConfigMN),
		(ASN_TAG_CLASS_CONTEXT | (7 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_MeasConfigMN,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"measConfigMN"
		},
	{ ATF_POINTER, 5, offsetof(struct CG_ConfigInfo_IEs, sourceConfigSCG),
		(ASN_TAG_CLASS_CONTEXT | (8 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_OCTET_STRING,
		0,
		{ &asn_OER_memb_sourceConfigSCG_constr_18, &asn_PER_memb_sourceConfigSCG_constr_18,  memb_sourceConfigSCG_constraint_1 },
		0, 0, /* No default value */
		"sourceConfigSCG"
		},
	{ ATF_POINTER, 4, offsetof(struct CG_ConfigInfo_IEs, scg_RB_Config),
		(ASN_TAG_CLASS_CONTEXT | (9 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_OCTET_STRING,
		0,
		{ &asn_OER_memb_scg_RB_Config_constr_19, &asn_PER_memb_scg_RB_Config_constr_19,  memb_scg_RB_Config_constraint_1 },
		0, 0, /* No default value */
		"scg-RB-Config"
		},
	{ ATF_POINTER, 3, offsetof(struct CG_ConfigInfo_IEs, mcg_RB_Config),
		(ASN_TAG_CLASS_CONTEXT | (10 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_OCTET_STRING,
		0,
		{ &asn_OER_memb_mcg_RB_Config_constr_20, &asn_PER_memb_mcg_RB_Config_constr_20,  memb_mcg_RB_Config_constraint_1 },
		0, 0, /* No default value */
		"mcg-RB-Config"
		},
	{ ATF_POINTER, 2, offsetof(struct CG_ConfigInfo_IEs, mrdc_AssistanceInfo),
		(ASN_TAG_CLASS_CONTEXT | (11 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_MRDC_AssistanceInfo,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"mrdc-AssistanceInfo"
		},
	{ ATF_POINTER, 1, offsetof(struct CG_ConfigInfo_IEs, nonCriticalExtension),
		(ASN_TAG_CLASS_CONTEXT | (12 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_CG_ConfigInfo_v1540_IEs,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"nonCriticalExtension"
		},
};
static const int asn_MAP_CG_ConfigInfo_IEs_oms_1[] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12 };
static const ber_tlv_tag_t asn_DEF_CG_ConfigInfo_IEs_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_CG_ConfigInfo_IEs_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* ue-CapabilityInfo */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* candidateCellInfoListMN */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* candidateCellInfoListSN */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* measResultCellListSFTD-NR */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 }, /* scgFailureInfo */
    { (ASN_TAG_CLASS_CONTEXT | (5 << 2)), 5, 0, 0 }, /* configRestrictInfo */
    { (ASN_TAG_CLASS_CONTEXT | (6 << 2)), 6, 0, 0 }, /* drx-InfoMCG */
    { (ASN_TAG_CLASS_CONTEXT | (7 << 2)), 7, 0, 0 }, /* measConfigMN */
    { (ASN_TAG_CLASS_CONTEXT | (8 << 2)), 8, 0, 0 }, /* sourceConfigSCG */
    { (ASN_TAG_CLASS_CONTEXT | (9 << 2)), 9, 0, 0 }, /* scg-RB-Config */
    { (ASN_TAG_CLASS_CONTEXT | (10 << 2)), 10, 0, 0 }, /* mcg-RB-Config */
    { (ASN_TAG_CLASS_CONTEXT | (11 << 2)), 11, 0, 0 }, /* mrdc-AssistanceInfo */
    { (ASN_TAG_CLASS_CONTEXT | (12 << 2)), 12, 0, 0 } /* nonCriticalExtension */
};
asn_SEQUENCE_specifics_t asn_SPC_CG_ConfigInfo_IEs_specs_1 = {
	sizeof(struct CG_ConfigInfo_IEs),
	offsetof(struct CG_ConfigInfo_IEs, _asn_ctx),
	asn_MAP_CG_ConfigInfo_IEs_tag2el_1,
	13,	/* Count of tags in the map */
	asn_MAP_CG_ConfigInfo_IEs_oms_1,	/* Optional members */
	13, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_CG_ConfigInfo_IEs = {
	"CG-ConfigInfo-IEs",
	"CG-ConfigInfo-IEs",
	&asn_OP_SEQUENCE,
	asn_DEF_CG_ConfigInfo_IEs_tags_1,
	sizeof(asn_DEF_CG_ConfigInfo_IEs_tags_1)
		/sizeof(asn_DEF_CG_ConfigInfo_IEs_tags_1[0]), /* 1 */
	asn_DEF_CG_ConfigInfo_IEs_tags_1,	/* Same as above */
	sizeof(asn_DEF_CG_ConfigInfo_IEs_tags_1)
		/sizeof(asn_DEF_CG_ConfigInfo_IEs_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_CG_ConfigInfo_IEs_1,
	13,	/* Elements count */
	&asn_SPC_CG_ConfigInfo_IEs_specs_1	/* Additional specs */
};

