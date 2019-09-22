/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "38331-f60.asn"
 * 	`asn1c -S /usr/local/share/asn1c -fcompound-names -fskeletons-copy -findirect-choice -gen-PER -pdu=all -D nr-rrc`
 */

#ifndef	_CSI_RS_ResourceMapping_H_
#define	_CSI_RS_ResourceMapping_H_


#include <skeletons/asn_application.h>

/* Including external dependencies */
#include <skeletons/BIT_STRING.h>
#include <skeletons/NULL.h>
#include <skeletons/NativeEnumerated.h>
#include <skeletons/NativeInteger.h>
#include <skeletons/constr_CHOICE.h>
#include <skeletons/constr_SEQUENCE.h>

#include "CSI-FrequencyOccupation.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum CSI_RS_ResourceMapping__frequencyDomainAllocation_PR {
	CSI_RS_ResourceMapping__frequencyDomainAllocation_PR_NOTHING,	/* No components present */
	CSI_RS_ResourceMapping__frequencyDomainAllocation_PR_row1,
	CSI_RS_ResourceMapping__frequencyDomainAllocation_PR_row2,
	CSI_RS_ResourceMapping__frequencyDomainAllocation_PR_row4,
	CSI_RS_ResourceMapping__frequencyDomainAllocation_PR_other
} CSI_RS_ResourceMapping__frequencyDomainAllocation_PR;
typedef enum CSI_RS_ResourceMapping__nrofPorts {
	CSI_RS_ResourceMapping__nrofPorts_p1	= 0,
	CSI_RS_ResourceMapping__nrofPorts_p2	= 1,
	CSI_RS_ResourceMapping__nrofPorts_p4	= 2,
	CSI_RS_ResourceMapping__nrofPorts_p8	= 3,
	CSI_RS_ResourceMapping__nrofPorts_p12	= 4,
	CSI_RS_ResourceMapping__nrofPorts_p16	= 5,
	CSI_RS_ResourceMapping__nrofPorts_p24	= 6,
	CSI_RS_ResourceMapping__nrofPorts_p32	= 7
} e_CSI_RS_ResourceMapping__nrofPorts;
typedef enum CSI_RS_ResourceMapping__cdm_Type {
	CSI_RS_ResourceMapping__cdm_Type_noCDM	= 0,
	CSI_RS_ResourceMapping__cdm_Type_fd_CDM2	= 1,
	CSI_RS_ResourceMapping__cdm_Type_cdm4_FD2_TD2	= 2,
	CSI_RS_ResourceMapping__cdm_Type_cdm8_FD2_TD4	= 3
} e_CSI_RS_ResourceMapping__cdm_Type;
typedef enum CSI_RS_ResourceMapping__density_PR {
	CSI_RS_ResourceMapping__density_PR_NOTHING,	/* No components present */
	CSI_RS_ResourceMapping__density_PR_dot5,
	CSI_RS_ResourceMapping__density_PR_one,
	CSI_RS_ResourceMapping__density_PR_three,
	CSI_RS_ResourceMapping__density_PR_spare
} CSI_RS_ResourceMapping__density_PR;
typedef enum CSI_RS_ResourceMapping__density__dot5 {
	CSI_RS_ResourceMapping__density__dot5_evenPRBs	= 0,
	CSI_RS_ResourceMapping__density__dot5_oddPRBs	= 1
} e_CSI_RS_ResourceMapping__density__dot5;

/* CSI-RS-ResourceMapping */
typedef struct CSI_RS_ResourceMapping {
	struct CSI_RS_ResourceMapping__frequencyDomainAllocation {
		CSI_RS_ResourceMapping__frequencyDomainAllocation_PR present;
		union CSI_RS_ResourceMapping__frequencyDomainAllocation_u {
			BIT_STRING_t	 row1;
			BIT_STRING_t	 row2;
			BIT_STRING_t	 row4;
			BIT_STRING_t	 other;
		} choice;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} frequencyDomainAllocation;
	long	 nrofPorts;
	long	 firstOFDMSymbolInTimeDomain;
	long	*firstOFDMSymbolInTimeDomain2;	/* OPTIONAL */
	long	 cdm_Type;
	struct CSI_RS_ResourceMapping__density {
		CSI_RS_ResourceMapping__density_PR present;
		union CSI_RS_ResourceMapping__density_u {
			long	 dot5;
			NULL_t	 one;
			NULL_t	 three;
			NULL_t	 spare;
		} choice;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} density;
	CSI_FrequencyOccupation_t	 freqBand;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} CSI_RS_ResourceMapping_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_nrofPorts_7;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_cdm_Type_18;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_dot5_24;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_CSI_RS_ResourceMapping;
extern asn_SEQUENCE_specifics_t asn_SPC_CSI_RS_ResourceMapping_specs_1;
extern asn_TYPE_member_t asn_MBR_CSI_RS_ResourceMapping_1[7];

#ifdef __cplusplus
}
#endif

#endif	/* _CSI_RS_ResourceMapping_H_ */
#include <skeletons/asn_internal.h>
