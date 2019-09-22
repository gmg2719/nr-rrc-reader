/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "38331-f60.asn"
 * 	`asn1c -fcompound-names -findirect-choice -gen-PER -pdu=all -no-gen-example -no-gen-OER -fincludes-quoted -funnamed-unions -D nr-rrc-f60`
 */

#ifndef	_SDAP_Parameters_H_
#define	_SDAP_Parameters_H_


#include "asn_application.h"

/* Including external dependencies */
#include "NativeEnumerated.h"
#include "constr_SEQUENCE.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum SDAP_Parameters__as_ReflectiveQoS {
	SDAP_Parameters__as_ReflectiveQoS_true	= 0
} e_SDAP_Parameters__as_ReflectiveQoS;

/* SDAP-Parameters */
typedef struct SDAP_Parameters {
	long	*as_ReflectiveQoS;	/* OPTIONAL */
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} SDAP_Parameters_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_as_ReflectiveQoS_2;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_SDAP_Parameters;
extern asn_SEQUENCE_specifics_t asn_SPC_SDAP_Parameters_specs_1;
extern asn_TYPE_member_t asn_MBR_SDAP_Parameters_1[1];

#ifdef __cplusplus
}
#endif

#endif	/* _SDAP_Parameters_H_ */
#include "asn_internal.h"
