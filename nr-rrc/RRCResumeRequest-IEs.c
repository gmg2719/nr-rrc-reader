/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "38331-f60.asn"
 * 	`asn1c -fcompound-names -findirect-choice -gen-PER -pdu=all -no-gen-example -fincludes-quoted -funnamed-unions -D nr-rrc`
 */

#include "RRCResumeRequest-IEs.h"

static int
memb_resumeMAC_I_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	const BIT_STRING_t *st = (const BIT_STRING_t *)sptr;
	size_t size;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	if(st->size > 0) {
		/* Size in bits */
		size = 8 * st->size - (st->bits_unused & 0x07);
	} else {
		size = 0;
	}
	
	if((size == 16)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static int
memb_spare_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	const BIT_STRING_t *st = (const BIT_STRING_t *)sptr;
	size_t size;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	if(st->size > 0) {
		/* Size in bits */
		size = 8 * st->size - (st->bits_unused & 0x07);
	} else {
		size = 0;
	}
	
	if((size == 1)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static asn_oer_constraints_t asn_OER_memb_resumeMAC_I_constr_3 CC_NOTUSED = {
	{ 0, 0 },
	16	/* (SIZE(16..16)) */};
static asn_per_constraints_t asn_PER_memb_resumeMAC_I_constr_3 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 0,  0,  16,  16 }	/* (SIZE(16..16)) */,
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_memb_spare_constr_5 CC_NOTUSED = {
	{ 0, 0 },
	1	/* (SIZE(1..1)) */};
static asn_per_constraints_t asn_PER_memb_spare_constr_5 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 0,  0,  1,  1 }	/* (SIZE(1..1)) */,
	0, 0	/* No PER value map */
};
asn_TYPE_member_t asn_MBR_RRCResumeRequest_IEs_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct RRCResumeRequest_IEs, resumeIdentity),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ShortI_RNTI_Value,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"resumeIdentity"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct RRCResumeRequest_IEs, resumeMAC_I),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BIT_STRING,
		0,
		{ &asn_OER_memb_resumeMAC_I_constr_3, &asn_PER_memb_resumeMAC_I_constr_3,  memb_resumeMAC_I_constraint_1 },
		0, 0, /* No default value */
		"resumeMAC-I"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct RRCResumeRequest_IEs, resumeCause),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ResumeCause,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"resumeCause"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct RRCResumeRequest_IEs, spare),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BIT_STRING,
		0,
		{ &asn_OER_memb_spare_constr_5, &asn_PER_memb_spare_constr_5,  memb_spare_constraint_1 },
		0, 0, /* No default value */
		"spare"
		},
};
static const ber_tlv_tag_t asn_DEF_RRCResumeRequest_IEs_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_RRCResumeRequest_IEs_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* resumeIdentity */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* resumeMAC-I */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* resumeCause */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 } /* spare */
};
asn_SEQUENCE_specifics_t asn_SPC_RRCResumeRequest_IEs_specs_1 = {
	sizeof(struct RRCResumeRequest_IEs),
	offsetof(struct RRCResumeRequest_IEs, _asn_ctx),
	asn_MAP_RRCResumeRequest_IEs_tag2el_1,
	4,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_RRCResumeRequest_IEs = {
	"RRCResumeRequest-IEs",
	"RRCResumeRequest-IEs",
	&asn_OP_SEQUENCE,
	asn_DEF_RRCResumeRequest_IEs_tags_1,
	sizeof(asn_DEF_RRCResumeRequest_IEs_tags_1)
		/sizeof(asn_DEF_RRCResumeRequest_IEs_tags_1[0]), /* 1 */
	asn_DEF_RRCResumeRequest_IEs_tags_1,	/* Same as above */
	sizeof(asn_DEF_RRCResumeRequest_IEs_tags_1)
		/sizeof(asn_DEF_RRCResumeRequest_IEs_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_RRCResumeRequest_IEs_1,
	4,	/* Elements count */
	&asn_SPC_RRCResumeRequest_IEs_specs_1	/* Additional specs */
};

