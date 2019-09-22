/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "38331-f60.asn"
 * 	`asn1c -S /usr/local/share/asn1c -fcompound-names -fskeletons-copy -findirect-choice -gen-PER -pdu=all -D nr-rrc`
 */

#ifndef	_UAC_BarringInfoSet_H_
#define	_UAC_BarringInfoSet_H_


#include <skeletons/asn_application.h>

/* Including external dependencies */
#include <skeletons/BIT_STRING.h>
#include <skeletons/NativeEnumerated.h>
#include <skeletons/constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum UAC_BarringInfoSet__uac_BarringFactor {
	UAC_BarringInfoSet__uac_BarringFactor_p00	= 0,
	UAC_BarringInfoSet__uac_BarringFactor_p05	= 1,
	UAC_BarringInfoSet__uac_BarringFactor_p10	= 2,
	UAC_BarringInfoSet__uac_BarringFactor_p15	= 3,
	UAC_BarringInfoSet__uac_BarringFactor_p20	= 4,
	UAC_BarringInfoSet__uac_BarringFactor_p25	= 5,
	UAC_BarringInfoSet__uac_BarringFactor_p30	= 6,
	UAC_BarringInfoSet__uac_BarringFactor_p40	= 7,
	UAC_BarringInfoSet__uac_BarringFactor_p50	= 8,
	UAC_BarringInfoSet__uac_BarringFactor_p60	= 9,
	UAC_BarringInfoSet__uac_BarringFactor_p70	= 10,
	UAC_BarringInfoSet__uac_BarringFactor_p75	= 11,
	UAC_BarringInfoSet__uac_BarringFactor_p80	= 12,
	UAC_BarringInfoSet__uac_BarringFactor_p85	= 13,
	UAC_BarringInfoSet__uac_BarringFactor_p90	= 14,
	UAC_BarringInfoSet__uac_BarringFactor_p95	= 15
} e_UAC_BarringInfoSet__uac_BarringFactor;
typedef enum UAC_BarringInfoSet__uac_BarringTime {
	UAC_BarringInfoSet__uac_BarringTime_s4	= 0,
	UAC_BarringInfoSet__uac_BarringTime_s8	= 1,
	UAC_BarringInfoSet__uac_BarringTime_s16	= 2,
	UAC_BarringInfoSet__uac_BarringTime_s32	= 3,
	UAC_BarringInfoSet__uac_BarringTime_s64	= 4,
	UAC_BarringInfoSet__uac_BarringTime_s128	= 5,
	UAC_BarringInfoSet__uac_BarringTime_s256	= 6,
	UAC_BarringInfoSet__uac_BarringTime_s512	= 7
} e_UAC_BarringInfoSet__uac_BarringTime;

/* UAC-BarringInfoSet */
typedef struct UAC_BarringInfoSet {
	long	 uac_BarringFactor;
	long	 uac_BarringTime;
	BIT_STRING_t	 uac_BarringForAccessIdentity;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} UAC_BarringInfoSet_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_uac_BarringFactor_2;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_uac_BarringTime_19;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_UAC_BarringInfoSet;
extern asn_SEQUENCE_specifics_t asn_SPC_UAC_BarringInfoSet_specs_1;
extern asn_TYPE_member_t asn_MBR_UAC_BarringInfoSet_1[3];

#ifdef __cplusplus
}
#endif

#endif	/* _UAC_BarringInfoSet_H_ */
#include <skeletons/asn_internal.h>
