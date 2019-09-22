/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "38331-f60.asn"
 * 	`asn1c -fcompound-names -findirect-choice -gen-PER -pdu=all -no-gen-example -no-gen-OER -fincludes-quoted -funnamed-unions -D nr-rrc-f60`
 */

#include "UE-NR-CapabilityAddFRX-Mode.h"

asn_TYPE_member_t asn_MBR_UE_NR_CapabilityAddFRX_Mode_1[] = {
	{ ATF_POINTER, 2, offsetof(struct UE_NR_CapabilityAddFRX_Mode, phy_ParametersFRX_Diff),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_Phy_ParametersFRX_Diff,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"phy-ParametersFRX-Diff"
		},
	{ ATF_POINTER, 1, offsetof(struct UE_NR_CapabilityAddFRX_Mode, measAndMobParametersFRX_Diff),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_MeasAndMobParametersFRX_Diff,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"measAndMobParametersFRX-Diff"
		},
};
static const int asn_MAP_UE_NR_CapabilityAddFRX_Mode_oms_1[] = { 0, 1 };
static const ber_tlv_tag_t asn_DEF_UE_NR_CapabilityAddFRX_Mode_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_UE_NR_CapabilityAddFRX_Mode_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* phy-ParametersFRX-Diff */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* measAndMobParametersFRX-Diff */
};
asn_SEQUENCE_specifics_t asn_SPC_UE_NR_CapabilityAddFRX_Mode_specs_1 = {
	sizeof(struct UE_NR_CapabilityAddFRX_Mode),
	offsetof(struct UE_NR_CapabilityAddFRX_Mode, _asn_ctx),
	asn_MAP_UE_NR_CapabilityAddFRX_Mode_tag2el_1,
	2,	/* Count of tags in the map */
	asn_MAP_UE_NR_CapabilityAddFRX_Mode_oms_1,	/* Optional members */
	2, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_UE_NR_CapabilityAddFRX_Mode = {
	"UE-NR-CapabilityAddFRX-Mode",
	"UE-NR-CapabilityAddFRX-Mode",
	&asn_OP_SEQUENCE,
	asn_DEF_UE_NR_CapabilityAddFRX_Mode_tags_1,
	sizeof(asn_DEF_UE_NR_CapabilityAddFRX_Mode_tags_1)
		/sizeof(asn_DEF_UE_NR_CapabilityAddFRX_Mode_tags_1[0]), /* 1 */
	asn_DEF_UE_NR_CapabilityAddFRX_Mode_tags_1,	/* Same as above */
	sizeof(asn_DEF_UE_NR_CapabilityAddFRX_Mode_tags_1)
		/sizeof(asn_DEF_UE_NR_CapabilityAddFRX_Mode_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_UE_NR_CapabilityAddFRX_Mode_1,
	2,	/* Elements count */
	&asn_SPC_UE_NR_CapabilityAddFRX_Mode_specs_1	/* Additional specs */
};

