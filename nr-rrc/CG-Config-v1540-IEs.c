/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-InterNodeDefinitions"
 * 	found in "38331-f60.asn"
 * 	`asn1c -fcompound-names -findirect-choice -gen-PER -pdu=all -no-gen-example -fincludes-quoted -funnamed-unions -D nr-rrc`
 */

#include "CG-Config-v1540-IEs.h"

static asn_TYPE_member_t asn_MBR_requestedCellInfo_4[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct CG_Config_v1540_IEs__reportCGI_RequestNR__requestedCellInfo, ssbFrequency),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ARFCN_ValueNR,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"ssbFrequency"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct CG_Config_v1540_IEs__reportCGI_RequestNR__requestedCellInfo, cellForWhichToReportCGI),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_PhysCellId,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"cellForWhichToReportCGI"
		},
};
static const ber_tlv_tag_t asn_DEF_requestedCellInfo_tags_4[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_requestedCellInfo_tag2el_4[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* ssbFrequency */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* cellForWhichToReportCGI */
};
static asn_SEQUENCE_specifics_t asn_SPC_requestedCellInfo_specs_4 = {
	sizeof(struct CG_Config_v1540_IEs__reportCGI_RequestNR__requestedCellInfo),
	offsetof(struct CG_Config_v1540_IEs__reportCGI_RequestNR__requestedCellInfo, _asn_ctx),
	asn_MAP_requestedCellInfo_tag2el_4,
	2,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_requestedCellInfo_4 = {
	"requestedCellInfo",
	"requestedCellInfo",
	&asn_OP_SEQUENCE,
	asn_DEF_requestedCellInfo_tags_4,
	sizeof(asn_DEF_requestedCellInfo_tags_4)
		/sizeof(asn_DEF_requestedCellInfo_tags_4[0]) - 1, /* 1 */
	asn_DEF_requestedCellInfo_tags_4,	/* Same as above */
	sizeof(asn_DEF_requestedCellInfo_tags_4)
		/sizeof(asn_DEF_requestedCellInfo_tags_4[0]), /* 2 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_requestedCellInfo_4,
	2,	/* Elements count */
	&asn_SPC_requestedCellInfo_specs_4	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_reportCGI_RequestNR_3[] = {
	{ ATF_POINTER, 1, offsetof(struct CG_Config_v1540_IEs__reportCGI_RequestNR, requestedCellInfo),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		0,
		&asn_DEF_requestedCellInfo_4,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"requestedCellInfo"
		},
};
static const int asn_MAP_reportCGI_RequestNR_oms_3[] = { 0 };
static const ber_tlv_tag_t asn_DEF_reportCGI_RequestNR_tags_3[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_reportCGI_RequestNR_tag2el_3[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 } /* requestedCellInfo */
};
static asn_SEQUENCE_specifics_t asn_SPC_reportCGI_RequestNR_specs_3 = {
	sizeof(struct CG_Config_v1540_IEs__reportCGI_RequestNR),
	offsetof(struct CG_Config_v1540_IEs__reportCGI_RequestNR, _asn_ctx),
	asn_MAP_reportCGI_RequestNR_tag2el_3,
	1,	/* Count of tags in the map */
	asn_MAP_reportCGI_RequestNR_oms_3,	/* Optional members */
	1, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_reportCGI_RequestNR_3 = {
	"reportCGI-RequestNR",
	"reportCGI-RequestNR",
	&asn_OP_SEQUENCE,
	asn_DEF_reportCGI_RequestNR_tags_3,
	sizeof(asn_DEF_reportCGI_RequestNR_tags_3)
		/sizeof(asn_DEF_reportCGI_RequestNR_tags_3[0]) - 1, /* 1 */
	asn_DEF_reportCGI_RequestNR_tags_3,	/* Same as above */
	sizeof(asn_DEF_reportCGI_RequestNR_tags_3)
		/sizeof(asn_DEF_reportCGI_RequestNR_tags_3[0]), /* 2 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_reportCGI_RequestNR_3,
	1,	/* Elements count */
	&asn_SPC_reportCGI_RequestNR_specs_3	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_CG_Config_v1540_IEs_1[] = {
	{ ATF_POINTER, 4, offsetof(struct CG_Config_v1540_IEs, pSCellFrequency),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ARFCN_ValueNR,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"pSCellFrequency"
		},
	{ ATF_POINTER, 3, offsetof(struct CG_Config_v1540_IEs, reportCGI_RequestNR),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		0,
		&asn_DEF_reportCGI_RequestNR_3,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"reportCGI-RequestNR"
		},
	{ ATF_POINTER, 2, offsetof(struct CG_Config_v1540_IEs, ph_InfoSCG),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_PH_TypeListSCG,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"ph-InfoSCG"
		},
	{ ATF_POINTER, 1, offsetof(struct CG_Config_v1540_IEs, nonCriticalExtension),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_CG_Config_v1560_IEs,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"nonCriticalExtension"
		},
};
static const int asn_MAP_CG_Config_v1540_IEs_oms_1[] = { 0, 1, 2, 3 };
static const ber_tlv_tag_t asn_DEF_CG_Config_v1540_IEs_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_CG_Config_v1540_IEs_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* pSCellFrequency */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* reportCGI-RequestNR */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* ph-InfoSCG */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 } /* nonCriticalExtension */
};
asn_SEQUENCE_specifics_t asn_SPC_CG_Config_v1540_IEs_specs_1 = {
	sizeof(struct CG_Config_v1540_IEs),
	offsetof(struct CG_Config_v1540_IEs, _asn_ctx),
	asn_MAP_CG_Config_v1540_IEs_tag2el_1,
	4,	/* Count of tags in the map */
	asn_MAP_CG_Config_v1540_IEs_oms_1,	/* Optional members */
	4, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_CG_Config_v1540_IEs = {
	"CG-Config-v1540-IEs",
	"CG-Config-v1540-IEs",
	&asn_OP_SEQUENCE,
	asn_DEF_CG_Config_v1540_IEs_tags_1,
	sizeof(asn_DEF_CG_Config_v1540_IEs_tags_1)
		/sizeof(asn_DEF_CG_Config_v1540_IEs_tags_1[0]), /* 1 */
	asn_DEF_CG_Config_v1540_IEs_tags_1,	/* Same as above */
	sizeof(asn_DEF_CG_Config_v1540_IEs_tags_1)
		/sizeof(asn_DEF_CG_Config_v1540_IEs_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_CG_Config_v1540_IEs_1,
	4,	/* Elements count */
	&asn_SPC_CG_Config_v1540_IEs_specs_1	/* Additional specs */
};

