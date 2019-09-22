/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "38331-f60.asn"
 * 	`asn1c -S /usr/local/share/asn1c -fcompound-names -fskeletons-copy -findirect-choice -gen-PER -pdu=all -D nr-rrc`
 */

#ifndef	_IMS_Parameters_H_
#define	_IMS_Parameters_H_


#include <skeletons/asn_application.h>

/* Including external dependencies */
#include <skeletons/constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct IMS_ParametersCommon;
struct IMS_ParametersFRX_Diff;

/* IMS-Parameters */
typedef struct IMS_Parameters {
	struct IMS_ParametersCommon	*ims_ParametersCommon;	/* OPTIONAL */
	struct IMS_ParametersFRX_Diff	*ims_ParametersFRX_Diff;	/* OPTIONAL */
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} IMS_Parameters_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_IMS_Parameters;
extern asn_SEQUENCE_specifics_t asn_SPC_IMS_Parameters_specs_1;
extern asn_TYPE_member_t asn_MBR_IMS_Parameters_1[2];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "IMS-ParametersCommon.h"
#include "IMS-ParametersFRX-Diff.h"

#endif	/* _IMS_Parameters_H_ */
#include <skeletons/asn_internal.h>
