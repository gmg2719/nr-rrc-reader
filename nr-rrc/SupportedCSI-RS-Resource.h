/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "38331-f60.asn"
 * 	`asn1c -S /usr/local/share/asn1c -fcompound-names -fskeletons-copy -findirect-choice -gen-PER -pdu=all -D nr-rrc`
 */

#ifndef	_SupportedCSI_RS_Resource_H_
#define	_SupportedCSI_RS_Resource_H_


#include <skeletons/asn_application.h>

/* Including external dependencies */
#include <skeletons/NativeEnumerated.h>
#include <skeletons/NativeInteger.h>
#include <skeletons/constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum SupportedCSI_RS_Resource__maxNumberTxPortsPerResource {
	SupportedCSI_RS_Resource__maxNumberTxPortsPerResource_p2	= 0,
	SupportedCSI_RS_Resource__maxNumberTxPortsPerResource_p4	= 1,
	SupportedCSI_RS_Resource__maxNumberTxPortsPerResource_p8	= 2,
	SupportedCSI_RS_Resource__maxNumberTxPortsPerResource_p12	= 3,
	SupportedCSI_RS_Resource__maxNumberTxPortsPerResource_p16	= 4,
	SupportedCSI_RS_Resource__maxNumberTxPortsPerResource_p24	= 5,
	SupportedCSI_RS_Resource__maxNumberTxPortsPerResource_p32	= 6
} e_SupportedCSI_RS_Resource__maxNumberTxPortsPerResource;

/* SupportedCSI-RS-Resource */
typedef struct SupportedCSI_RS_Resource {
	long	 maxNumberTxPortsPerResource;
	long	 maxNumberResourcesPerBand;
	long	 totalNumberTxPortsPerBand;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} SupportedCSI_RS_Resource_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_maxNumberTxPortsPerResource_2;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_SupportedCSI_RS_Resource;
extern asn_SEQUENCE_specifics_t asn_SPC_SupportedCSI_RS_Resource_specs_1;
extern asn_TYPE_member_t asn_MBR_SupportedCSI_RS_Resource_1[3];

#ifdef __cplusplus
}
#endif

#endif	/* _SupportedCSI_RS_Resource_H_ */
#include <skeletons/asn_internal.h>