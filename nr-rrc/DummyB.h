/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "38331-f60.asn"
 * 	`asn1c -fcompound-names -findirect-choice -gen-PER -pdu=all -no-gen-example -no-gen-OER -fincludes-quoted -funnamed-unions -D nr-rrc-f60`
 */

#ifndef	_DummyB_H_
#define	_DummyB_H_


#include "asn_application.h"

/* Including external dependencies */
#include "NativeEnumerated.h"
#include "NativeInteger.h"
#include "constr_SEQUENCE.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum DummyB__maxNumberTxPortsPerResource {
	DummyB__maxNumberTxPortsPerResource_p2	= 0,
	DummyB__maxNumberTxPortsPerResource_p4	= 1,
	DummyB__maxNumberTxPortsPerResource_p8	= 2,
	DummyB__maxNumberTxPortsPerResource_p12	= 3,
	DummyB__maxNumberTxPortsPerResource_p16	= 4,
	DummyB__maxNumberTxPortsPerResource_p24	= 5,
	DummyB__maxNumberTxPortsPerResource_p32	= 6
} e_DummyB__maxNumberTxPortsPerResource;
typedef enum DummyB__supportedCodebookMode {
	DummyB__supportedCodebookMode_mode1	= 0,
	DummyB__supportedCodebookMode_mode1AndMode2	= 1
} e_DummyB__supportedCodebookMode;

/* DummyB */
typedef struct DummyB {
	long	 maxNumberTxPortsPerResource;
	long	 maxNumberResources;
	long	 totalNumberTxPorts;
	long	 supportedCodebookMode;
	long	 maxNumberCSI_RS_PerResourceSet;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} DummyB_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_maxNumberTxPortsPerResource_2;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_supportedCodebookMode_12;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_DummyB;
extern asn_SEQUENCE_specifics_t asn_SPC_DummyB_specs_1;
extern asn_TYPE_member_t asn_MBR_DummyB_1[5];

#ifdef __cplusplus
}
#endif

#endif	/* _DummyB_H_ */
#include "asn_internal.h"
