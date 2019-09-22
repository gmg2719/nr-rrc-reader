/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "38331-f60.asn"
 * 	`asn1c -S /usr/local/share/asn1c -fcompound-names -fskeletons-copy -findirect-choice -gen-PER -pdu=all -D nr-rrc`
 */

#include "IntraFreqNeighCellInfo.h"

static int
memb_q_RxLevMinOffsetCell_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 1 && value <= 8)) {
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
memb_q_RxLevMinOffsetCellSUL_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 1 && value <= 8)) {
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
memb_q_QualMinOffsetCell_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 1 && value <= 8)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static asn_oer_constraints_t asn_OER_memb_q_RxLevMinOffsetCell_constr_4 CC_NOTUSED = {
	{ 1, 1 }	/* (1..8) */,
	-1};
static asn_per_constraints_t asn_PER_memb_q_RxLevMinOffsetCell_constr_4 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 3,  3,  1,  8 }	/* (1..8) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_memb_q_RxLevMinOffsetCellSUL_constr_5 CC_NOTUSED = {
	{ 1, 1 }	/* (1..8) */,
	-1};
static asn_per_constraints_t asn_PER_memb_q_RxLevMinOffsetCellSUL_constr_5 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 3,  3,  1,  8 }	/* (1..8) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_memb_q_QualMinOffsetCell_constr_6 CC_NOTUSED = {
	{ 1, 1 }	/* (1..8) */,
	-1};
static asn_per_constraints_t asn_PER_memb_q_QualMinOffsetCell_constr_6 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 3,  3,  1,  8 }	/* (1..8) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
asn_TYPE_member_t asn_MBR_IntraFreqNeighCellInfo_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct IntraFreqNeighCellInfo, physCellId),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_PhysCellId,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"physCellId"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct IntraFreqNeighCellInfo, q_OffsetCell),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_Q_OffsetRange,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"q-OffsetCell"
		},
	{ ATF_POINTER, 3, offsetof(struct IntraFreqNeighCellInfo, q_RxLevMinOffsetCell),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ &asn_OER_memb_q_RxLevMinOffsetCell_constr_4, &asn_PER_memb_q_RxLevMinOffsetCell_constr_4,  memb_q_RxLevMinOffsetCell_constraint_1 },
		0, 0, /* No default value */
		"q-RxLevMinOffsetCell"
		},
	{ ATF_POINTER, 2, offsetof(struct IntraFreqNeighCellInfo, q_RxLevMinOffsetCellSUL),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ &asn_OER_memb_q_RxLevMinOffsetCellSUL_constr_5, &asn_PER_memb_q_RxLevMinOffsetCellSUL_constr_5,  memb_q_RxLevMinOffsetCellSUL_constraint_1 },
		0, 0, /* No default value */
		"q-RxLevMinOffsetCellSUL"
		},
	{ ATF_POINTER, 1, offsetof(struct IntraFreqNeighCellInfo, q_QualMinOffsetCell),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ &asn_OER_memb_q_QualMinOffsetCell_constr_6, &asn_PER_memb_q_QualMinOffsetCell_constr_6,  memb_q_QualMinOffsetCell_constraint_1 },
		0, 0, /* No default value */
		"q-QualMinOffsetCell"
		},
};
static const int asn_MAP_IntraFreqNeighCellInfo_oms_1[] = { 2, 3, 4 };
static const ber_tlv_tag_t asn_DEF_IntraFreqNeighCellInfo_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_IntraFreqNeighCellInfo_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* physCellId */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* q-OffsetCell */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* q-RxLevMinOffsetCell */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* q-RxLevMinOffsetCellSUL */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 } /* q-QualMinOffsetCell */
};
asn_SEQUENCE_specifics_t asn_SPC_IntraFreqNeighCellInfo_specs_1 = {
	sizeof(struct IntraFreqNeighCellInfo),
	offsetof(struct IntraFreqNeighCellInfo, _asn_ctx),
	asn_MAP_IntraFreqNeighCellInfo_tag2el_1,
	5,	/* Count of tags in the map */
	asn_MAP_IntraFreqNeighCellInfo_oms_1,	/* Optional members */
	3, 0,	/* Root/Additions */
	5,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_IntraFreqNeighCellInfo = {
	"IntraFreqNeighCellInfo",
	"IntraFreqNeighCellInfo",
	&asn_OP_SEQUENCE,
	asn_DEF_IntraFreqNeighCellInfo_tags_1,
	sizeof(asn_DEF_IntraFreqNeighCellInfo_tags_1)
		/sizeof(asn_DEF_IntraFreqNeighCellInfo_tags_1[0]), /* 1 */
	asn_DEF_IntraFreqNeighCellInfo_tags_1,	/* Same as above */
	sizeof(asn_DEF_IntraFreqNeighCellInfo_tags_1)
		/sizeof(asn_DEF_IntraFreqNeighCellInfo_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_IntraFreqNeighCellInfo_1,
	5,	/* Elements count */
	&asn_SPC_IntraFreqNeighCellInfo_specs_1	/* Additional specs */
};

