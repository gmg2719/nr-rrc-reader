/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "38331-f60.asn"
 * 	`asn1c -S /usr/local/share/asn1c -fcompound-names -fskeletons-copy -findirect-choice -gen-PER -pdu=all -D nr-rrc`
 */

#ifndef	_CounterCheckResponse_IEs_H_
#define	_CounterCheckResponse_IEs_H_


#include <skeletons/asn_application.h>

/* Including external dependencies */
#include <skeletons/OCTET_STRING.h>
#include <skeletons/constr_SEQUENCE.h>

#include "DRB-CountInfoList.h"

#ifdef __cplusplus
extern "C" {
#endif

/* CounterCheckResponse-IEs */
typedef struct CounterCheckResponse_IEs {
	DRB_CountInfoList_t	 drb_CountInfoList;
	OCTET_STRING_t	*lateNonCriticalExtension;	/* OPTIONAL */
	struct CounterCheckResponse_IEs__nonCriticalExtension {
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *nonCriticalExtension;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} CounterCheckResponse_IEs_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_CounterCheckResponse_IEs;
extern asn_SEQUENCE_specifics_t asn_SPC_CounterCheckResponse_IEs_specs_1;
extern asn_TYPE_member_t asn_MBR_CounterCheckResponse_IEs_1[3];

#ifdef __cplusplus
}
#endif

#endif	/* _CounterCheckResponse_IEs_H_ */
#include <skeletons/asn_internal.h>
