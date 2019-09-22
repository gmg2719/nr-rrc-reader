/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "38331-f60.asn"
 * 	`asn1c -S /usr/local/share/asn1c -fcompound-names -fskeletons-copy -findirect-choice -gen-PER -pdu=all -D nr-rrc`
 */

#include "FreqBandInformationEUTRA.h"

asn_TYPE_member_t asn_MBR_FreqBandInformationEUTRA_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct FreqBandInformationEUTRA, bandEUTRA),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_FreqBandIndicatorEUTRA,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"bandEUTRA"
		},
	{ ATF_POINTER, 2, offsetof(struct FreqBandInformationEUTRA, ca_BandwidthClassDL_EUTRA),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_CA_BandwidthClassEUTRA,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"ca-BandwidthClassDL-EUTRA"
		},
	{ ATF_POINTER, 1, offsetof(struct FreqBandInformationEUTRA, ca_BandwidthClassUL_EUTRA),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_CA_BandwidthClassEUTRA,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"ca-BandwidthClassUL-EUTRA"
		},
};
static const int asn_MAP_FreqBandInformationEUTRA_oms_1[] = { 1, 2 };
static const ber_tlv_tag_t asn_DEF_FreqBandInformationEUTRA_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_FreqBandInformationEUTRA_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* bandEUTRA */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* ca-BandwidthClassDL-EUTRA */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 } /* ca-BandwidthClassUL-EUTRA */
};
asn_SEQUENCE_specifics_t asn_SPC_FreqBandInformationEUTRA_specs_1 = {
	sizeof(struct FreqBandInformationEUTRA),
	offsetof(struct FreqBandInformationEUTRA, _asn_ctx),
	asn_MAP_FreqBandInformationEUTRA_tag2el_1,
	3,	/* Count of tags in the map */
	asn_MAP_FreqBandInformationEUTRA_oms_1,	/* Optional members */
	2, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_FreqBandInformationEUTRA = {
	"FreqBandInformationEUTRA",
	"FreqBandInformationEUTRA",
	&asn_OP_SEQUENCE,
	asn_DEF_FreqBandInformationEUTRA_tags_1,
	sizeof(asn_DEF_FreqBandInformationEUTRA_tags_1)
		/sizeof(asn_DEF_FreqBandInformationEUTRA_tags_1[0]), /* 1 */
	asn_DEF_FreqBandInformationEUTRA_tags_1,	/* Same as above */
	sizeof(asn_DEF_FreqBandInformationEUTRA_tags_1)
		/sizeof(asn_DEF_FreqBandInformationEUTRA_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_FreqBandInformationEUTRA_1,
	3,	/* Elements count */
	&asn_SPC_FreqBandInformationEUTRA_specs_1	/* Additional specs */
};

