/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "38331-f60.asn"
 * 	`asn1c -fcompound-names -findirect-choice -gen-PER -pdu=all -no-gen-example -fincludes-quoted -funnamed-unions -D nr-rrc`
 */

#ifndef	_RRCSystemInfoRequest_H_
#define	_RRCSystemInfoRequest_H_


#include "asn_application.h"

/* Including external dependencies */
#include "constr_SEQUENCE.h"
#include "constr_CHOICE.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum RRCSystemInfoRequest__criticalExtensions_PR {
	RRCSystemInfoRequest__criticalExtensions_PR_NOTHING,	/* No components present */
	RRCSystemInfoRequest__criticalExtensions_PR_rrcSystemInfoRequest_r15,
	RRCSystemInfoRequest__criticalExtensions_PR_criticalExtensionsFuture
} RRCSystemInfoRequest__criticalExtensions_PR;

/* Forward declarations */
struct RRCSystemInfoRequest_r15_IEs;

/* RRCSystemInfoRequest */
typedef struct RRCSystemInfoRequest {
	struct RRCSystemInfoRequest__criticalExtensions {
		RRCSystemInfoRequest__criticalExtensions_PR present;
		union {
			struct RRCSystemInfoRequest_r15_IEs	*rrcSystemInfoRequest_r15;
			struct RRCSystemInfoRequest__criticalExtensions__criticalExtensionsFuture {
				
				/* Context for parsing across buffer boundaries */
				asn_struct_ctx_t _asn_ctx;
			} *criticalExtensionsFuture;
		};
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} criticalExtensions;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} RRCSystemInfoRequest_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_RRCSystemInfoRequest;
extern asn_SEQUENCE_specifics_t asn_SPC_RRCSystemInfoRequest_specs_1;
extern asn_TYPE_member_t asn_MBR_RRCSystemInfoRequest_1[1];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "RRCSystemInfoRequest-r15-IEs.h"

#endif	/* _RRCSystemInfoRequest_H_ */
#include "asn_internal.h"
