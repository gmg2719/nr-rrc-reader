/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "38331-f60.asn"
 * 	`asn1c -S /usr/local/share/asn1c -fcompound-names -fskeletons-copy -findirect-choice -gen-PER -pdu=all -D nr-rrc`
 */

#include "BandCombination-v1550.h"

asn_TYPE_member_t asn_MBR_BandCombination_v1550_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct BandCombination_v1550, ca_ParametersNR_v1550),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_CA_ParametersNR_v1550,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"ca-ParametersNR-v1550"
		},
};
static const ber_tlv_tag_t asn_DEF_BandCombination_v1550_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_BandCombination_v1550_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 } /* ca-ParametersNR-v1550 */
};
asn_SEQUENCE_specifics_t asn_SPC_BandCombination_v1550_specs_1 = {
	sizeof(struct BandCombination_v1550),
	offsetof(struct BandCombination_v1550, _asn_ctx),
	asn_MAP_BandCombination_v1550_tag2el_1,
	1,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_BandCombination_v1550 = {
	"BandCombination-v1550",
	"BandCombination-v1550",
	&asn_OP_SEQUENCE,
	asn_DEF_BandCombination_v1550_tags_1,
	sizeof(asn_DEF_BandCombination_v1550_tags_1)
		/sizeof(asn_DEF_BandCombination_v1550_tags_1[0]), /* 1 */
	asn_DEF_BandCombination_v1550_tags_1,	/* Same as above */
	sizeof(asn_DEF_BandCombination_v1550_tags_1)
		/sizeof(asn_DEF_BandCombination_v1550_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_BandCombination_v1550_1,
	1,	/* Elements count */
	&asn_SPC_BandCombination_v1550_specs_1	/* Additional specs */
};

