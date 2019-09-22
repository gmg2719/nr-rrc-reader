/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "38331-f60.asn"
 * 	`asn1c -fcompound-names -findirect-choice -gen-PER -pdu=all -no-gen-example -fincludes-quoted -funnamed-unions -D nr-rrc`
 */

#ifndef	_CGI_InfoEUTRA_H_
#define	_CGI_InfoEUTRA_H_


#include "asn_application.h"

/* Including external dependencies */
#include "FreqBandIndicatorEUTRA.h"
#include "NativeEnumerated.h"
#include "CellAccessRelatedInfo-EUTRA-EPC.h"
#include "asn_SEQUENCE_OF.h"
#include "constr_SEQUENCE_OF.h"
#include "constr_SEQUENCE.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum CGI_InfoEUTRA__freqBandIndicatorPriority {
	CGI_InfoEUTRA__freqBandIndicatorPriority_true	= 0
} e_CGI_InfoEUTRA__freqBandIndicatorPriority;

/* Forward declarations */
struct MultiBandInfoListEUTRA;
struct CellAccessRelatedInfo_EUTRA_EPC;
struct CellAccessRelatedInfo_EUTRA_5GC;

/* CGI-InfoEUTRA */
typedef struct CGI_InfoEUTRA {
	struct CGI_InfoEUTRA__cgi_info_EPC {
		CellAccessRelatedInfo_EUTRA_EPC_t	 cgi_info_EPC_legacy;
		struct CGI_InfoEUTRA__cgi_info_EPC__cgi_info_EPC_list {
			A_SEQUENCE_OF(struct CellAccessRelatedInfo_EUTRA_EPC) list;
			
			/* Context for parsing across buffer boundaries */
			asn_struct_ctx_t _asn_ctx;
		} *cgi_info_EPC_list;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *cgi_info_EPC;
	struct CGI_InfoEUTRA__cgi_info_5GC {
		A_SEQUENCE_OF(struct CellAccessRelatedInfo_EUTRA_5GC) list;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *cgi_info_5GC;
	FreqBandIndicatorEUTRA_t	 freqBandIndicator;
	struct MultiBandInfoListEUTRA	*multiBandInfoList;	/* OPTIONAL */
	long	*freqBandIndicatorPriority;	/* OPTIONAL */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} CGI_InfoEUTRA_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_freqBandIndicatorPriority_10;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_CGI_InfoEUTRA;
extern asn_SEQUENCE_specifics_t asn_SPC_CGI_InfoEUTRA_specs_1;
extern asn_TYPE_member_t asn_MBR_CGI_InfoEUTRA_1[5];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "MultiBandInfoListEUTRA.h"
#include "CellAccessRelatedInfo-EUTRA-EPC.h"
#include "CellAccessRelatedInfo-EUTRA-5GC.h"

#endif	/* _CGI_InfoEUTRA_H_ */
#include "asn_internal.h"
