/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "38331-f60.asn"
 * 	`asn1c -fcompound-names -findirect-choice -gen-PER -pdu=all -no-gen-example -no-gen-OER -fincludes-quoted -funnamed-unions -D nr-rrc-f60`
 */

#include "CSI-SSB-ResourceSet.h"

static int
memb_csi_SSB_ResourceList_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	size_t size;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	/* Determine the number of elements */
	size = _A_CSEQUENCE_FROM_VOID(sptr)->count;
	
	if((size >= 1 && size <= 64)) {
		/* Perform validation of the inner elements */
		return td->encoding_constraints.general_constraints(td, sptr, ctfailcb, app_key);
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static asn_per_constraints_t asn_PER_type_csi_SSB_ResourceList_constr_3 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 6,  6,  1,  64 }	/* (SIZE(1..64)) */,
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_csi_SSB_ResourceList_constr_3 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 6,  6,  1,  64 }	/* (SIZE(1..64)) */,
	0, 0	/* No PER value map */
};
static asn_TYPE_member_t asn_MBR_csi_SSB_ResourceList_3[] = {
	{ ATF_POINTER, 0, 0,
		(ASN_TAG_CLASS_UNIVERSAL | (2 << 2)),
		0,
		&asn_DEF_SSB_Index,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		""
		},
};
static const ber_tlv_tag_t asn_DEF_csi_SSB_ResourceList_tags_3[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_SET_OF_specifics_t asn_SPC_csi_SSB_ResourceList_specs_3 = {
	sizeof(struct CSI_SSB_ResourceSet__csi_SSB_ResourceList),
	offsetof(struct CSI_SSB_ResourceSet__csi_SSB_ResourceList, _asn_ctx),
	0,	/* XER encoding is XMLDelimitedItemList */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_csi_SSB_ResourceList_3 = {
	"csi-SSB-ResourceList",
	"csi-SSB-ResourceList",
	&asn_OP_SEQUENCE_OF,
	asn_DEF_csi_SSB_ResourceList_tags_3,
	sizeof(asn_DEF_csi_SSB_ResourceList_tags_3)
		/sizeof(asn_DEF_csi_SSB_ResourceList_tags_3[0]) - 1, /* 1 */
	asn_DEF_csi_SSB_ResourceList_tags_3,	/* Same as above */
	sizeof(asn_DEF_csi_SSB_ResourceList_tags_3)
		/sizeof(asn_DEF_csi_SSB_ResourceList_tags_3[0]), /* 2 */
	{ 0, &asn_PER_type_csi_SSB_ResourceList_constr_3, SEQUENCE_OF_constraint },
	asn_MBR_csi_SSB_ResourceList_3,
	1,	/* Single element */
	&asn_SPC_csi_SSB_ResourceList_specs_3	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_CSI_SSB_ResourceSet_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct CSI_SSB_ResourceSet, csi_SSB_ResourceSetId),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_CSI_SSB_ResourceSetId,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"csi-SSB-ResourceSetId"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct CSI_SSB_ResourceSet, csi_SSB_ResourceList),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		0,
		&asn_DEF_csi_SSB_ResourceList_3,
		0,
		{ 0, &asn_PER_memb_csi_SSB_ResourceList_constr_3,  memb_csi_SSB_ResourceList_constraint_1 },
		0, 0, /* No default value */
		"csi-SSB-ResourceList"
		},
};
static const ber_tlv_tag_t asn_DEF_CSI_SSB_ResourceSet_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_CSI_SSB_ResourceSet_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* csi-SSB-ResourceSetId */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* csi-SSB-ResourceList */
};
asn_SEQUENCE_specifics_t asn_SPC_CSI_SSB_ResourceSet_specs_1 = {
	sizeof(struct CSI_SSB_ResourceSet),
	offsetof(struct CSI_SSB_ResourceSet, _asn_ctx),
	asn_MAP_CSI_SSB_ResourceSet_tag2el_1,
	2,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	2,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_CSI_SSB_ResourceSet = {
	"CSI-SSB-ResourceSet",
	"CSI-SSB-ResourceSet",
	&asn_OP_SEQUENCE,
	asn_DEF_CSI_SSB_ResourceSet_tags_1,
	sizeof(asn_DEF_CSI_SSB_ResourceSet_tags_1)
		/sizeof(asn_DEF_CSI_SSB_ResourceSet_tags_1[0]), /* 1 */
	asn_DEF_CSI_SSB_ResourceSet_tags_1,	/* Same as above */
	sizeof(asn_DEF_CSI_SSB_ResourceSet_tags_1)
		/sizeof(asn_DEF_CSI_SSB_ResourceSet_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_CSI_SSB_ResourceSet_1,
	2,	/* Elements count */
	&asn_SPC_CSI_SSB_ResourceSet_specs_1	/* Additional specs */
};

