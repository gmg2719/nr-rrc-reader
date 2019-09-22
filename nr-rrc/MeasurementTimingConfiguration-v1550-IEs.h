/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-InterNodeDefinitions"
 * 	found in "38331-f60.asn"
 * 	`asn1c -fcompound-names -findirect-choice -gen-PER -pdu=all -no-gen-example -no-gen-OER -fincludes-quoted -funnamed-unions -D nr-rrc-f60`
 */

#ifndef	_MeasurementTimingConfiguration_v1550_IEs_H_
#define	_MeasurementTimingConfiguration_v1550_IEs_H_


#include "asn_application.h"

/* Including external dependencies */
#include "BOOLEAN.h"
#include "constr_SEQUENCE.h"

#ifdef __cplusplus
extern "C" {
#endif

/* MeasurementTimingConfiguration-v1550-IEs */
typedef struct MeasurementTimingConfiguration_v1550_IEs {
	BOOLEAN_t	 campOnFirstSSB;
	BOOLEAN_t	 psCellOnlyOnFirstSSB;
	struct MeasurementTimingConfiguration_v1550_IEs__nonCriticalExtension {
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *nonCriticalExtension;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} MeasurementTimingConfiguration_v1550_IEs_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_MeasurementTimingConfiguration_v1550_IEs;
extern asn_SEQUENCE_specifics_t asn_SPC_MeasurementTimingConfiguration_v1550_IEs_specs_1;
extern asn_TYPE_member_t asn_MBR_MeasurementTimingConfiguration_v1550_IEs_1[3];

#ifdef __cplusplus
}
#endif

#endif	/* _MeasurementTimingConfiguration_v1550_IEs_H_ */
#include "asn_internal.h"
