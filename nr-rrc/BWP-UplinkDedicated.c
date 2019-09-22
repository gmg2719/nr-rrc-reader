/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "38331-f60.asn"
 * 	`asn1c -S /usr/local/share/asn1c -fcompound-names -fskeletons-copy -findirect-choice -gen-PER -pdu=all -D nr-rrc`
 */

#include "BWP-UplinkDedicated.h"

asn_TYPE_member_t asn_MBR_BWP_UplinkDedicated_1[] = {
	{ ATF_POINTER, 5, offsetof(struct BWP_UplinkDedicated, pucch_Config),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_SetupRelease_PUCCH_Config,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"pucch-Config"
		},
	{ ATF_POINTER, 4, offsetof(struct BWP_UplinkDedicated, pusch_Config),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_SetupRelease_PUSCH_Config,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"pusch-Config"
		},
	{ ATF_POINTER, 3, offsetof(struct BWP_UplinkDedicated, configuredGrantConfig),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_SetupRelease_ConfiguredGrantConfig,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"configuredGrantConfig"
		},
	{ ATF_POINTER, 2, offsetof(struct BWP_UplinkDedicated, srs_Config),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_SetupRelease_SRS_Config,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"srs-Config"
		},
	{ ATF_POINTER, 1, offsetof(struct BWP_UplinkDedicated, beamFailureRecoveryConfig),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_SetupRelease_BeamFailureRecoveryConfig,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"beamFailureRecoveryConfig"
		},
};
static const int asn_MAP_BWP_UplinkDedicated_oms_1[] = { 0, 1, 2, 3, 4 };
static const ber_tlv_tag_t asn_DEF_BWP_UplinkDedicated_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_BWP_UplinkDedicated_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* pucch-Config */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* pusch-Config */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* configuredGrantConfig */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* srs-Config */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 } /* beamFailureRecoveryConfig */
};
asn_SEQUENCE_specifics_t asn_SPC_BWP_UplinkDedicated_specs_1 = {
	sizeof(struct BWP_UplinkDedicated),
	offsetof(struct BWP_UplinkDedicated, _asn_ctx),
	asn_MAP_BWP_UplinkDedicated_tag2el_1,
	5,	/* Count of tags in the map */
	asn_MAP_BWP_UplinkDedicated_oms_1,	/* Optional members */
	5, 0,	/* Root/Additions */
	5,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_BWP_UplinkDedicated = {
	"BWP-UplinkDedicated",
	"BWP-UplinkDedicated",
	&asn_OP_SEQUENCE,
	asn_DEF_BWP_UplinkDedicated_tags_1,
	sizeof(asn_DEF_BWP_UplinkDedicated_tags_1)
		/sizeof(asn_DEF_BWP_UplinkDedicated_tags_1[0]), /* 1 */
	asn_DEF_BWP_UplinkDedicated_tags_1,	/* Same as above */
	sizeof(asn_DEF_BWP_UplinkDedicated_tags_1)
		/sizeof(asn_DEF_BWP_UplinkDedicated_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_BWP_UplinkDedicated_1,
	5,	/* Elements count */
	&asn_SPC_BWP_UplinkDedicated_specs_1	/* Additional specs */
};

