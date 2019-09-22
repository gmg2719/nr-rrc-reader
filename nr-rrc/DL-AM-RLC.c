/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "38331-f60.asn"
 * 	`asn1c -fcompound-names -findirect-choice -gen-PER -pdu=all -no-gen-example -no-gen-OER -fincludes-quoted -funnamed-unions -D nr-rrc-f60`
 */

#include "DL-AM-RLC.h"

asn_TYPE_member_t asn_MBR_DL_AM_RLC_1[] = {
	{ ATF_POINTER, 1, offsetof(struct DL_AM_RLC, sn_FieldLength),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_SN_FieldLengthAM,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"sn-FieldLength"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct DL_AM_RLC, t_Reassembly),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_T_Reassembly,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"t-Reassembly"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct DL_AM_RLC, t_StatusProhibit),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_T_StatusProhibit,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"t-StatusProhibit"
		},
};
static const int asn_MAP_DL_AM_RLC_oms_1[] = { 0 };
static const ber_tlv_tag_t asn_DEF_DL_AM_RLC_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_DL_AM_RLC_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* sn-FieldLength */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* t-Reassembly */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 } /* t-StatusProhibit */
};
asn_SEQUENCE_specifics_t asn_SPC_DL_AM_RLC_specs_1 = {
	sizeof(struct DL_AM_RLC),
	offsetof(struct DL_AM_RLC, _asn_ctx),
	asn_MAP_DL_AM_RLC_tag2el_1,
	3,	/* Count of tags in the map */
	asn_MAP_DL_AM_RLC_oms_1,	/* Optional members */
	1, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_DL_AM_RLC = {
	"DL-AM-RLC",
	"DL-AM-RLC",
	&asn_OP_SEQUENCE,
	asn_DEF_DL_AM_RLC_tags_1,
	sizeof(asn_DEF_DL_AM_RLC_tags_1)
		/sizeof(asn_DEF_DL_AM_RLC_tags_1[0]), /* 1 */
	asn_DEF_DL_AM_RLC_tags_1,	/* Same as above */
	sizeof(asn_DEF_DL_AM_RLC_tags_1)
		/sizeof(asn_DEF_DL_AM_RLC_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_DL_AM_RLC_1,
	3,	/* Elements count */
	&asn_SPC_DL_AM_RLC_specs_1	/* Additional specs */
};

