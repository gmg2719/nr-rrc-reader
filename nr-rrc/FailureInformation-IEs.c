/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "38331-f60.asn"
 * 	`asn1c -fcompound-names -findirect-choice -gen-PER -pdu=all -no-gen-example -fincludes-quoted -funnamed-unions -D nr-rrc`
 */

#include "FailureInformation-IEs.h"

static const ber_tlv_tag_t asn_DEF_nonCriticalExtension_tags_4[] = {
	(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_SEQUENCE_specifics_t asn_SPC_nonCriticalExtension_specs_4 = {
	sizeof(struct FailureInformation_IEs__nonCriticalExtension),
	offsetof(struct FailureInformation_IEs__nonCriticalExtension, _asn_ctx),
	0,	/* No top level tags */
	0,	/* No tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_nonCriticalExtension_4 = {
	"nonCriticalExtension",
	"nonCriticalExtension",
	&asn_OP_SEQUENCE,
	asn_DEF_nonCriticalExtension_tags_4,
	sizeof(asn_DEF_nonCriticalExtension_tags_4)
		/sizeof(asn_DEF_nonCriticalExtension_tags_4[0]) - 1, /* 1 */
	asn_DEF_nonCriticalExtension_tags_4,	/* Same as above */
	sizeof(asn_DEF_nonCriticalExtension_tags_4)
		/sizeof(asn_DEF_nonCriticalExtension_tags_4[0]), /* 2 */
	{ 0, 0, SEQUENCE_constraint },
	0, 0,	/* No members */
	&asn_SPC_nonCriticalExtension_specs_4	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_FailureInformation_IEs_1[] = {
	{ ATF_POINTER, 3, offsetof(struct FailureInformation_IEs, failureInfoRLC_Bearer),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_FailureInfoRLC_Bearer,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"failureInfoRLC-Bearer"
		},
	{ ATF_POINTER, 2, offsetof(struct FailureInformation_IEs, lateNonCriticalExtension),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_OCTET_STRING,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"lateNonCriticalExtension"
		},
	{ ATF_POINTER, 1, offsetof(struct FailureInformation_IEs, nonCriticalExtension),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		0,
		&asn_DEF_nonCriticalExtension_4,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"nonCriticalExtension"
		},
};
static const int asn_MAP_FailureInformation_IEs_oms_1[] = { 0, 1, 2 };
static const ber_tlv_tag_t asn_DEF_FailureInformation_IEs_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_FailureInformation_IEs_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* failureInfoRLC-Bearer */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* lateNonCriticalExtension */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 } /* nonCriticalExtension */
};
asn_SEQUENCE_specifics_t asn_SPC_FailureInformation_IEs_specs_1 = {
	sizeof(struct FailureInformation_IEs),
	offsetof(struct FailureInformation_IEs, _asn_ctx),
	asn_MAP_FailureInformation_IEs_tag2el_1,
	3,	/* Count of tags in the map */
	asn_MAP_FailureInformation_IEs_oms_1,	/* Optional members */
	3, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_FailureInformation_IEs = {
	"FailureInformation-IEs",
	"FailureInformation-IEs",
	&asn_OP_SEQUENCE,
	asn_DEF_FailureInformation_IEs_tags_1,
	sizeof(asn_DEF_FailureInformation_IEs_tags_1)
		/sizeof(asn_DEF_FailureInformation_IEs_tags_1[0]), /* 1 */
	asn_DEF_FailureInformation_IEs_tags_1,	/* Same as above */
	sizeof(asn_DEF_FailureInformation_IEs_tags_1)
		/sizeof(asn_DEF_FailureInformation_IEs_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_FailureInformation_IEs_1,
	3,	/* Elements count */
	&asn_SPC_FailureInformation_IEs_specs_1	/* Additional specs */
};

