/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "38331-f60.asn"
 * 	`asn1c -S /usr/local/share/asn1c -fcompound-names -fskeletons-copy -findirect-choice -gen-PER -pdu=all -D nr-rrc`
 */

#ifndef	_ReportCGI_EUTRA_H_
#define	_ReportCGI_EUTRA_H_


#include <skeletons/asn_application.h>

/* Including external dependencies */
#include <skeletons/constr_SEQUENCE.h>

#include "EUTRA-PhysCellId.h"

#ifdef __cplusplus
extern "C" {
#endif

/* ReportCGI-EUTRA */
typedef struct ReportCGI_EUTRA {
	EUTRA_PhysCellId_t	 cellForWhichToReportCGI;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} ReportCGI_EUTRA_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_ReportCGI_EUTRA;
extern asn_SEQUENCE_specifics_t asn_SPC_ReportCGI_EUTRA_specs_1;
extern asn_TYPE_member_t asn_MBR_ReportCGI_EUTRA_1[1];

#ifdef __cplusplus
}
#endif

#endif	/* _ReportCGI_EUTRA_H_ */
#include <skeletons/asn_internal.h>
