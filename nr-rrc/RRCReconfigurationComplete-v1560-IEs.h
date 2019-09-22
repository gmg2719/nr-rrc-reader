/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "38331-f60.asn"
 * 	`asn1c -fcompound-names -findirect-choice -gen-PER -pdu=all -no-gen-example -no-gen-OER -fincludes-quoted -funnamed-unions -D nr-rrc-f60`
 */

#ifndef	_RRCReconfigurationComplete_v1560_IEs_H_
#define	_RRCReconfigurationComplete_v1560_IEs_H_


#include "asn_application.h"

/* Including external dependencies */
#include "OCTET_STRING.h"
#include "constr_CHOICE.h"
#include "constr_SEQUENCE.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum RRCReconfigurationComplete_v1560_IEs__scg_Response_PR {
	RRCReconfigurationComplete_v1560_IEs__scg_Response_PR_NOTHING,	/* No components present */
	RRCReconfigurationComplete_v1560_IEs__scg_Response_PR_nr_SCG_Response,
	RRCReconfigurationComplete_v1560_IEs__scg_Response_PR_eutra_SCG_Response
} RRCReconfigurationComplete_v1560_IEs__scg_Response_PR;

/* RRCReconfigurationComplete-v1560-IEs */
typedef struct RRCReconfigurationComplete_v1560_IEs {
	struct RRCReconfigurationComplete_v1560_IEs__scg_Response {
		RRCReconfigurationComplete_v1560_IEs__scg_Response_PR present;
		union {
			OCTET_STRING_t	 nr_SCG_Response;
			OCTET_STRING_t	 eutra_SCG_Response;
		};
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *scg_Response;
	struct RRCReconfigurationComplete_v1560_IEs__nonCriticalExtension {
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *nonCriticalExtension;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} RRCReconfigurationComplete_v1560_IEs_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_RRCReconfigurationComplete_v1560_IEs;
extern asn_SEQUENCE_specifics_t asn_SPC_RRCReconfigurationComplete_v1560_IEs_specs_1;
extern asn_TYPE_member_t asn_MBR_RRCReconfigurationComplete_v1560_IEs_1[2];

#ifdef __cplusplus
}
#endif

#endif	/* _RRCReconfigurationComplete_v1560_IEs_H_ */
#include "asn_internal.h"
