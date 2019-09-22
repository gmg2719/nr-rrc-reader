/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "38331-f60.asn"
 * 	`asn1c -fcompound-names -findirect-choice -gen-PER -pdu=all -no-gen-example -no-gen-OER -fincludes-quoted -funnamed-unions -D nr-rrc-f60`
 */

#ifndef	_DRB_ToAddMod_H_
#define	_DRB_ToAddMod_H_


#include "asn_application.h"

/* Including external dependencies */
#include "DRB-Identity.h"
#include "NativeEnumerated.h"
#include "NativeInteger.h"
#include "constr_CHOICE.h"
#include "constr_SEQUENCE.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum DRB_ToAddMod__cnAssociation_PR {
	DRB_ToAddMod__cnAssociation_PR_NOTHING,	/* No components present */
	DRB_ToAddMod__cnAssociation_PR_eps_BearerIdentity,
	DRB_ToAddMod__cnAssociation_PR_sdap_Config
} DRB_ToAddMod__cnAssociation_PR;
typedef enum DRB_ToAddMod__reestablishPDCP {
	DRB_ToAddMod__reestablishPDCP_true	= 0
} e_DRB_ToAddMod__reestablishPDCP;
typedef enum DRB_ToAddMod__recoverPDCP {
	DRB_ToAddMod__recoverPDCP_true	= 0
} e_DRB_ToAddMod__recoverPDCP;

/* Forward declarations */
struct PDCP_Config;
struct SDAP_Config;

/* DRB-ToAddMod */
typedef struct DRB_ToAddMod {
	struct DRB_ToAddMod__cnAssociation {
		DRB_ToAddMod__cnAssociation_PR present;
		union {
			long	 eps_BearerIdentity;
			struct SDAP_Config	*sdap_Config;
		};
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *cnAssociation;
	DRB_Identity_t	 drb_Identity;
	long	*reestablishPDCP;	/* OPTIONAL */
	long	*recoverPDCP;	/* OPTIONAL */
	struct PDCP_Config	*pdcp_Config;	/* OPTIONAL */
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} DRB_ToAddMod_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_reestablishPDCP_6;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_recoverPDCP_8;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_DRB_ToAddMod;
extern asn_SEQUENCE_specifics_t asn_SPC_DRB_ToAddMod_specs_1;
extern asn_TYPE_member_t asn_MBR_DRB_ToAddMod_1[5];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "PDCP-Config.h"
#include "SDAP-Config.h"

#endif	/* _DRB_ToAddMod_H_ */
#include "asn_internal.h"
