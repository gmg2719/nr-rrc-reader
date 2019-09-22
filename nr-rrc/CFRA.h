/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "38331-f60.asn"
 * 	`asn1c -fcompound-names -findirect-choice -gen-PER -pdu=all -no-gen-example -fincludes-quoted -funnamed-unions -D nr-rrc`
 */

#ifndef	_CFRA_H_
#define	_CFRA_H_


#include "asn_application.h"

/* Including external dependencies */
#include "RACH-ConfigGeneric.h"
#include "NativeEnumerated.h"
#include "constr_SEQUENCE.h"
#include "NativeInteger.h"
#include "asn_SEQUENCE_OF.h"
#include "constr_SEQUENCE_OF.h"
#include "RSRP-Range.h"
#include "constr_CHOICE.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum CFRA__occasions__ssb_perRACH_Occasion {
	CFRA__occasions__ssb_perRACH_Occasion_oneEighth	= 0,
	CFRA__occasions__ssb_perRACH_Occasion_oneFourth	= 1,
	CFRA__occasions__ssb_perRACH_Occasion_oneHalf	= 2,
	CFRA__occasions__ssb_perRACH_Occasion_one	= 3,
	CFRA__occasions__ssb_perRACH_Occasion_two	= 4,
	CFRA__occasions__ssb_perRACH_Occasion_four	= 5,
	CFRA__occasions__ssb_perRACH_Occasion_eight	= 6,
	CFRA__occasions__ssb_perRACH_Occasion_sixteen	= 7
} e_CFRA__occasions__ssb_perRACH_Occasion;
typedef enum CFRA__resources_PR {
	CFRA__resources_PR_NOTHING,	/* No components present */
	CFRA__resources_PR_ssb,
	CFRA__resources_PR_csirs
} CFRA__resources_PR;

/* Forward declarations */
struct CFRA_SSB_Resource;
struct CFRA_CSIRS_Resource;

/* CFRA */
typedef struct CFRA {
	struct CFRA__occasions {
		RACH_ConfigGeneric_t	 rach_ConfigGeneric;
		long	*ssb_perRACH_Occasion;	/* OPTIONAL */
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *occasions;
	struct CFRA__resources {
		CFRA__resources_PR present;
		union {
			struct CFRA__resources__ssb {
				struct CFRA__resources__ssb__ssb_ResourceList {
					A_SEQUENCE_OF(struct CFRA_SSB_Resource) list;
					
					/* Context for parsing across buffer boundaries */
					asn_struct_ctx_t _asn_ctx;
				} ssb_ResourceList;
				long	 ra_ssb_OccasionMaskIndex;
				
				/* Context for parsing across buffer boundaries */
				asn_struct_ctx_t _asn_ctx;
			} *ssb;
			struct CFRA__resources__csirs {
				struct CFRA__resources__csirs__csirs_ResourceList {
					A_SEQUENCE_OF(struct CFRA_CSIRS_Resource) list;
					
					/* Context for parsing across buffer boundaries */
					asn_struct_ctx_t _asn_ctx;
				} csirs_ResourceList;
				RSRP_Range_t	 rsrp_ThresholdCSI_RS;
				
				/* Context for parsing across buffer boundaries */
				asn_struct_ctx_t _asn_ctx;
			} *csirs;
		};
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} resources;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	struct CFRA__ext1 {
		long	*totalNumberOfRA_Preambles_v1530;	/* OPTIONAL */
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *ext1;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} CFRA_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_ssb_perRACH_Occasion_4;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_CFRA;
extern asn_SEQUENCE_specifics_t asn_SPC_CFRA_specs_1;
extern asn_TYPE_member_t asn_MBR_CFRA_1[3];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "CFRA-SSB-Resource.h"
#include "CFRA-CSIRS-Resource.h"

#endif	/* _CFRA_H_ */
#include "asn_internal.h"
