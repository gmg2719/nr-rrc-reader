/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "38331-f60.asn"
 * 	`asn1c -S /usr/local/share/asn1c -fcompound-names -fskeletons-copy -findirect-choice -gen-PER -pdu=all -D nr-rrc`
 */

#ifndef	_PCCH_Message_H_
#define	_PCCH_Message_H_


#include <skeletons/asn_application.h>

/* Including external dependencies */
#include <skeletons/constr_SEQUENCE.h>

#include "PCCH-MessageType.h"

#ifdef __cplusplus
extern "C" {
#endif

/* PCCH-Message */
typedef struct PCCH_Message {
	PCCH_MessageType_t	 message;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} PCCH_Message_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_PCCH_Message;

#ifdef __cplusplus
}
#endif

#endif	/* _PCCH_Message_H_ */
#include <skeletons/asn_internal.h>
