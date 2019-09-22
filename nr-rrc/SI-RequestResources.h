/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "38331-f60.asn"
 * 	`asn1c -S /usr/local/share/asn1c -fcompound-names -fskeletons-copy -findirect-choice -gen-PER -pdu=all -D nr-rrc`
 */

#ifndef	_SI_RequestResources_H_
#define	_SI_RequestResources_H_


#include <skeletons/asn_application.h>

/* Including external dependencies */
#include <skeletons/NativeInteger.h>
#include <skeletons/constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* SI-RequestResources */
typedef struct SI_RequestResources {
	long	 ra_PreambleStartIndex;
	long	*ra_AssociationPeriodIndex;	/* OPTIONAL */
	long	*ra_ssb_OccasionMaskIndex;	/* OPTIONAL */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} SI_RequestResources_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_SI_RequestResources;
extern asn_SEQUENCE_specifics_t asn_SPC_SI_RequestResources_specs_1;
extern asn_TYPE_member_t asn_MBR_SI_RequestResources_1[3];

#ifdef __cplusplus
}
#endif

#endif	/* _SI_RequestResources_H_ */
#include <skeletons/asn_internal.h>
