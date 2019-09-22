/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "38331-f60.asn"
 * 	`asn1c -S /usr/local/share/asn1c -fcompound-names -fskeletons-copy -findirect-choice -gen-PER -pdu=all -D nr-rrc`
 */

#ifndef	_CA_ParametersEUTRA_v1560_H_
#define	_CA_ParametersEUTRA_v1560_H_


#include <skeletons/asn_application.h>

/* Including external dependencies */
#include <skeletons/NativeInteger.h>
#include <skeletons/constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* CA-ParametersEUTRA-v1560 */
typedef struct CA_ParametersEUTRA_v1560 {
	long	*totalWeightedLayers;	/* OPTIONAL */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} CA_ParametersEUTRA_v1560_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_CA_ParametersEUTRA_v1560;
extern asn_SEQUENCE_specifics_t asn_SPC_CA_ParametersEUTRA_v1560_specs_1;
extern asn_TYPE_member_t asn_MBR_CA_ParametersEUTRA_v1560_1[1];

#ifdef __cplusplus
}
#endif

#endif	/* _CA_ParametersEUTRA_v1560_H_ */
#include <skeletons/asn_internal.h>
