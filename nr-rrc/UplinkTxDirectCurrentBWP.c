/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "38331-f60.asn"
 * 	`asn1c -fcompound-names -findirect-choice -gen-PER -pdu=all -no-gen-example -no-gen-OER -fincludes-quoted -funnamed-unions -D nr-rrc-f60`
 */

#include "UplinkTxDirectCurrentBWP.h"

static int
memb_txDirectCurrentLocation_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 0 && value <= 3301)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static asn_per_constraints_t asn_PER_memb_txDirectCurrentLocation_constr_4 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 12,  12,  0,  3301 }	/* (0..3301) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
asn_TYPE_member_t asn_MBR_UplinkTxDirectCurrentBWP_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct UplinkTxDirectCurrentBWP, bwp_Id),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BWP_Id,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"bwp-Id"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct UplinkTxDirectCurrentBWP, shift7dot5kHz),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BOOLEAN,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"shift7dot5kHz"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct UplinkTxDirectCurrentBWP, txDirectCurrentLocation),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ 0, &asn_PER_memb_txDirectCurrentLocation_constr_4,  memb_txDirectCurrentLocation_constraint_1 },
		0, 0, /* No default value */
		"txDirectCurrentLocation"
		},
};
static const ber_tlv_tag_t asn_DEF_UplinkTxDirectCurrentBWP_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_UplinkTxDirectCurrentBWP_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* bwp-Id */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* shift7dot5kHz */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 } /* txDirectCurrentLocation */
};
asn_SEQUENCE_specifics_t asn_SPC_UplinkTxDirectCurrentBWP_specs_1 = {
	sizeof(struct UplinkTxDirectCurrentBWP),
	offsetof(struct UplinkTxDirectCurrentBWP, _asn_ctx),
	asn_MAP_UplinkTxDirectCurrentBWP_tag2el_1,
	3,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_UplinkTxDirectCurrentBWP = {
	"UplinkTxDirectCurrentBWP",
	"UplinkTxDirectCurrentBWP",
	&asn_OP_SEQUENCE,
	asn_DEF_UplinkTxDirectCurrentBWP_tags_1,
	sizeof(asn_DEF_UplinkTxDirectCurrentBWP_tags_1)
		/sizeof(asn_DEF_UplinkTxDirectCurrentBWP_tags_1[0]), /* 1 */
	asn_DEF_UplinkTxDirectCurrentBWP_tags_1,	/* Same as above */
	sizeof(asn_DEF_UplinkTxDirectCurrentBWP_tags_1)
		/sizeof(asn_DEF_UplinkTxDirectCurrentBWP_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_UplinkTxDirectCurrentBWP_1,
	3,	/* Elements count */
	&asn_SPC_UplinkTxDirectCurrentBWP_specs_1	/* Additional specs */
};

