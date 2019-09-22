/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "38331-f60.asn"
 * 	`asn1c -fcompound-names -findirect-choice -gen-PER -pdu=all -no-gen-example -no-gen-OER -fincludes-quoted -funnamed-unions -D nr-rrc-f60`
 */

#ifndef	_BandCombination_v1560_H_
#define	_BandCombination_v1560_H_


#include "asn_application.h"

/* Including external dependencies */
#include "NativeEnumerated.h"
#include "constr_SEQUENCE.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum BandCombination_v1560__ne_DC_BC {
	BandCombination_v1560__ne_DC_BC_supported	= 0
} e_BandCombination_v1560__ne_DC_BC;

/* Forward declarations */
struct CA_ParametersNRDC;
struct CA_ParametersEUTRA_v1560;
struct CA_ParametersNR_v1560;

/* BandCombination-v1560 */
typedef struct BandCombination_v1560 {
	long	*ne_DC_BC;	/* OPTIONAL */
	struct CA_ParametersNRDC	*ca_ParametersNRDC;	/* OPTIONAL */
	struct CA_ParametersEUTRA_v1560	*ca_ParametersEUTRA_v1560;	/* OPTIONAL */
	struct CA_ParametersNR_v1560	*ca_ParametersNR_v1560;	/* OPTIONAL */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} BandCombination_v1560_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_ne_DC_BC_2;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_BandCombination_v1560;
extern asn_SEQUENCE_specifics_t asn_SPC_BandCombination_v1560_specs_1;
extern asn_TYPE_member_t asn_MBR_BandCombination_v1560_1[4];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "CA-ParametersNRDC.h"
#include "CA-ParametersEUTRA-v1560.h"
#include "CA-ParametersNR-v1560.h"

#endif	/* _BandCombination_v1560_H_ */
#include "asn_internal.h"
