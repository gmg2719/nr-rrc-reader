/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "38331-f60.asn"
 * 	`asn1c -S /usr/local/share/asn1c -fcompound-names -fskeletons-copy -findirect-choice -gen-PER -pdu=all -D nr-rrc`
 */

#ifndef	_CSI_RS_ProcFrameworkForSRS_H_
#define	_CSI_RS_ProcFrameworkForSRS_H_


#include <skeletons/asn_application.h>

/* Including external dependencies */
#include <skeletons/NativeInteger.h>
#include <skeletons/constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* CSI-RS-ProcFrameworkForSRS */
typedef struct CSI_RS_ProcFrameworkForSRS {
	long	 maxNumberPeriodicSRS_AssocCSI_RS_PerBWP;
	long	 maxNumberAperiodicSRS_AssocCSI_RS_PerBWP;
	long	 maxNumberSP_SRS_AssocCSI_RS_PerBWP;
	long	 simultaneousSRS_AssocCSI_RS_PerCC;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} CSI_RS_ProcFrameworkForSRS_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_CSI_RS_ProcFrameworkForSRS;
extern asn_SEQUENCE_specifics_t asn_SPC_CSI_RS_ProcFrameworkForSRS_specs_1;
extern asn_TYPE_member_t asn_MBR_CSI_RS_ProcFrameworkForSRS_1[4];

#ifdef __cplusplus
}
#endif

#endif	/* _CSI_RS_ProcFrameworkForSRS_H_ */
#include <skeletons/asn_internal.h>
