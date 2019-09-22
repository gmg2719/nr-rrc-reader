/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "38331-f60.asn"
 * 	`asn1c -fcompound-names -findirect-choice -gen-PER -pdu=all -no-gen-example -no-gen-OER -fincludes-quoted -funnamed-unions -D nr-rrc-f60`
 */

#ifndef	_MasterKeyUpdate_H_
#define	_MasterKeyUpdate_H_


#include "asn_application.h"

/* Including external dependencies */
#include "BOOLEAN.h"
#include "NextHopChainingCount.h"
#include "OCTET_STRING.h"
#include "constr_SEQUENCE.h"

#ifdef __cplusplus
extern "C" {
#endif

/* MasterKeyUpdate */
typedef struct MasterKeyUpdate {
	BOOLEAN_t	 keySetChangeIndicator;
	NextHopChainingCount_t	 nextHopChainingCount;
	OCTET_STRING_t	*nas_Container;	/* OPTIONAL */
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} MasterKeyUpdate_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_MasterKeyUpdate;
extern asn_SEQUENCE_specifics_t asn_SPC_MasterKeyUpdate_specs_1;
extern asn_TYPE_member_t asn_MBR_MasterKeyUpdate_1[3];

#ifdef __cplusplus
}
#endif

#endif	/* _MasterKeyUpdate_H_ */
#include "asn_internal.h"
