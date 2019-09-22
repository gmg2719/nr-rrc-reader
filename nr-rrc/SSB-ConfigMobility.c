/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "38331-f60.asn"
 * 	`asn1c -fcompound-names -findirect-choice -gen-PER -pdu=all -no-gen-example -no-gen-OER -fincludes-quoted -funnamed-unions -D nr-rrc-f60`
 */

#include "SSB-ConfigMobility.h"

asn_TYPE_member_t asn_MBR_SSB_ConfigMobility_1[] = {
	{ ATF_POINTER, 1, offsetof(struct SSB_ConfigMobility, ssb_ToMeasure),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_SetupRelease_SSB_ToMeasure,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"ssb-ToMeasure"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct SSB_ConfigMobility, deriveSSB_IndexFromCell),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BOOLEAN,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"deriveSSB-IndexFromCell"
		},
	{ ATF_POINTER, 1, offsetof(struct SSB_ConfigMobility, ss_RSSI_Measurement),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_SS_RSSI_Measurement,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"ss-RSSI-Measurement"
		},
};
static const int asn_MAP_SSB_ConfigMobility_oms_1[] = { 0, 2 };
static const ber_tlv_tag_t asn_DEF_SSB_ConfigMobility_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_SSB_ConfigMobility_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* ssb-ToMeasure */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* deriveSSB-IndexFromCell */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 } /* ss-RSSI-Measurement */
};
asn_SEQUENCE_specifics_t asn_SPC_SSB_ConfigMobility_specs_1 = {
	sizeof(struct SSB_ConfigMobility),
	offsetof(struct SSB_ConfigMobility, _asn_ctx),
	asn_MAP_SSB_ConfigMobility_tag2el_1,
	3,	/* Count of tags in the map */
	asn_MAP_SSB_ConfigMobility_oms_1,	/* Optional members */
	2, 0,	/* Root/Additions */
	3,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_SSB_ConfigMobility = {
	"SSB-ConfigMobility",
	"SSB-ConfigMobility",
	&asn_OP_SEQUENCE,
	asn_DEF_SSB_ConfigMobility_tags_1,
	sizeof(asn_DEF_SSB_ConfigMobility_tags_1)
		/sizeof(asn_DEF_SSB_ConfigMobility_tags_1[0]), /* 1 */
	asn_DEF_SSB_ConfigMobility_tags_1,	/* Same as above */
	sizeof(asn_DEF_SSB_ConfigMobility_tags_1)
		/sizeof(asn_DEF_SSB_ConfigMobility_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_SSB_ConfigMobility_1,
	3,	/* Elements count */
	&asn_SPC_SSB_ConfigMobility_specs_1	/* Additional specs */
};

