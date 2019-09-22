/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-InterNodeDefinitions"
 * 	found in "38331-f60.asn"
 * 	`asn1c -fcompound-names -findirect-choice -gen-PER -pdu=all -no-gen-example -no-gen-OER -fincludes-quoted -funnamed-unions -D nr-rrc-f60`
 */

#ifndef	_ReestabNCellInfo_H_
#define	_ReestabNCellInfo_H_


#include "asn_application.h"

/* Including external dependencies */
#include "CellIdentity.h"
#include "BIT_STRING.h"
#include "ShortMAC-I.h"
#include "constr_SEQUENCE.h"

#ifdef __cplusplus
extern "C" {
#endif

/* ReestabNCellInfo */
typedef struct ReestabNCellInfo {
	CellIdentity_t	 cellIdentity;
	BIT_STRING_t	 key_gNodeB_Star;
	ShortMAC_I_t	 shortMAC_I;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} ReestabNCellInfo_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_ReestabNCellInfo;
extern asn_SEQUENCE_specifics_t asn_SPC_ReestabNCellInfo_specs_1;
extern asn_TYPE_member_t asn_MBR_ReestabNCellInfo_1[3];

#ifdef __cplusplus
}
#endif

#endif	/* _ReestabNCellInfo_H_ */
#include "asn_internal.h"
