/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "38331-f60.asn"
 * 	`asn1c -fcompound-names -findirect-choice -gen-PER -pdu=all -no-gen-example -fincludes-quoted -funnamed-unions -D nr-rrc`
 */

#ifndef	_MeasTriggerQuantity_H_
#define	_MeasTriggerQuantity_H_


#include "asn_application.h"

/* Including external dependencies */
#include "RSRP-Range.h"
#include "RSRQ-Range.h"
#include "SINR-Range.h"
#include "constr_CHOICE.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum MeasTriggerQuantity_PR {
	MeasTriggerQuantity_PR_NOTHING,	/* No components present */
	MeasTriggerQuantity_PR_rsrp,
	MeasTriggerQuantity_PR_rsrq,
	MeasTriggerQuantity_PR_sinr
} MeasTriggerQuantity_PR;

/* MeasTriggerQuantity */
typedef struct MeasTriggerQuantity {
	MeasTriggerQuantity_PR present;
	union {
		RSRP_Range_t	 rsrp;
		RSRQ_Range_t	 rsrq;
		SINR_Range_t	 sinr;
	};
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} MeasTriggerQuantity_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_MeasTriggerQuantity;
extern asn_CHOICE_specifics_t asn_SPC_MeasTriggerQuantity_specs_1;
extern asn_TYPE_member_t asn_MBR_MeasTriggerQuantity_1[3];
extern asn_per_constraints_t asn_PER_type_MeasTriggerQuantity_constr_1;

#ifdef __cplusplus
}
#endif

#endif	/* _MeasTriggerQuantity_H_ */
#include "asn_internal.h"
