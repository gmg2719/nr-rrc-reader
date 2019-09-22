/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "38331-f60.asn"
 * 	`asn1c -fcompound-names -findirect-choice -gen-PER -pdu=all -no-gen-example -fincludes-quoted -funnamed-unions -D nr-rrc`
 */

#ifndef	_CellIdentity_EUTRA_5GC_H_
#define	_CellIdentity_EUTRA_5GC_H_


#include "asn_application.h"

/* Including external dependencies */
#include "BIT_STRING.h"
#include "NativeInteger.h"
#include "constr_CHOICE.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum CellIdentity_EUTRA_5GC_PR {
	CellIdentity_EUTRA_5GC_PR_NOTHING,	/* No components present */
	CellIdentity_EUTRA_5GC_PR_cellIdentity_EUTRA,
	CellIdentity_EUTRA_5GC_PR_cellId_index
} CellIdentity_EUTRA_5GC_PR;

/* CellIdentity-EUTRA-5GC */
typedef struct CellIdentity_EUTRA_5GC {
	CellIdentity_EUTRA_5GC_PR present;
	union {
		BIT_STRING_t	 cellIdentity_EUTRA;
		long	 cellId_index;
	};
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} CellIdentity_EUTRA_5GC_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_CellIdentity_EUTRA_5GC;
extern asn_CHOICE_specifics_t asn_SPC_CellIdentity_EUTRA_5GC_specs_1;
extern asn_TYPE_member_t asn_MBR_CellIdentity_EUTRA_5GC_1[2];
extern asn_per_constraints_t asn_PER_type_CellIdentity_EUTRA_5GC_constr_1;

#ifdef __cplusplus
}
#endif

#endif	/* _CellIdentity_EUTRA_5GC_H_ */
#include "asn_internal.h"
