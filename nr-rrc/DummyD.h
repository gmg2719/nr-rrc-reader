/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "38331-f60.asn"
 * 	`asn1c -fcompound-names -findirect-choice -gen-PER -pdu=all -no-gen-example -fincludes-quoted -funnamed-unions -D nr-rrc`
 */

#ifndef	_DummyD_H_
#define	_DummyD_H_


#include "asn_application.h"

/* Including external dependencies */
#include "NativeEnumerated.h"
#include "NativeInteger.h"
#include "constr_SEQUENCE.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum DummyD__maxNumberTxPortsPerResource {
	DummyD__maxNumberTxPortsPerResource_p4	= 0,
	DummyD__maxNumberTxPortsPerResource_p8	= 1,
	DummyD__maxNumberTxPortsPerResource_p12	= 2,
	DummyD__maxNumberTxPortsPerResource_p16	= 3,
	DummyD__maxNumberTxPortsPerResource_p24	= 4,
	DummyD__maxNumberTxPortsPerResource_p32	= 5
} e_DummyD__maxNumberTxPortsPerResource;
typedef enum DummyD__amplitudeScalingType {
	DummyD__amplitudeScalingType_wideband	= 0,
	DummyD__amplitudeScalingType_widebandAndSubband	= 1
} e_DummyD__amplitudeScalingType;
typedef enum DummyD__amplitudeSubsetRestriction {
	DummyD__amplitudeSubsetRestriction_supported	= 0
} e_DummyD__amplitudeSubsetRestriction;

/* DummyD */
typedef struct DummyD {
	long	 maxNumberTxPortsPerResource;
	long	 maxNumberResources;
	long	 totalNumberTxPorts;
	long	 parameterLx;
	long	 amplitudeScalingType;
	long	*amplitudeSubsetRestriction;	/* OPTIONAL */
	long	 maxNumberCSI_RS_PerResourceSet;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} DummyD_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_maxNumberTxPortsPerResource_2;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_amplitudeScalingType_12;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_amplitudeSubsetRestriction_15;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_DummyD;
extern asn_SEQUENCE_specifics_t asn_SPC_DummyD_specs_1;
extern asn_TYPE_member_t asn_MBR_DummyD_1[7];

#ifdef __cplusplus
}
#endif

#endif	/* _DummyD_H_ */
#include "asn_internal.h"
