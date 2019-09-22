/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "38331-f60.asn"
 * 	`asn1c -fcompound-names -findirect-choice -gen-PER -pdu=all -no-gen-example -no-gen-OER -fincludes-quoted -funnamed-unions -D nr-rrc-f60`
 */

#ifndef	_RRCResumeRequest_IEs_H_
#define	_RRCResumeRequest_IEs_H_


#include "asn_application.h"

/* Including external dependencies */
#include "ShortI-RNTI-Value.h"
#include "BIT_STRING.h"
#include "ResumeCause.h"
#include "constr_SEQUENCE.h"

#ifdef __cplusplus
extern "C" {
#endif

/* RRCResumeRequest-IEs */
typedef struct RRCResumeRequest_IEs {
	ShortI_RNTI_Value_t	 resumeIdentity;
	BIT_STRING_t	 resumeMAC_I;
	ResumeCause_t	 resumeCause;
	BIT_STRING_t	 spare;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} RRCResumeRequest_IEs_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_RRCResumeRequest_IEs;
extern asn_SEQUENCE_specifics_t asn_SPC_RRCResumeRequest_IEs_specs_1;
extern asn_TYPE_member_t asn_MBR_RRCResumeRequest_IEs_1[4];

#ifdef __cplusplus
}
#endif

#endif	/* _RRCResumeRequest_IEs_H_ */
#include "asn_internal.h"
