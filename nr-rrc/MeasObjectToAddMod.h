/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "38331-f60.asn"
 * 	`asn1c -S /usr/local/share/asn1c -fcompound-names -fskeletons-copy -findirect-choice -gen-PER -pdu=all -D nr-rrc`
 */

#ifndef	_MeasObjectToAddMod_H_
#define	_MeasObjectToAddMod_H_


#include <skeletons/asn_application.h>

/* Including external dependencies */
#include <skeletons/constr_CHOICE.h>
#include <skeletons/constr_SEQUENCE.h>

#include "MeasObjectId.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum MeasObjectToAddMod__measObject_PR {
	MeasObjectToAddMod__measObject_PR_NOTHING,	/* No components present */
	MeasObjectToAddMod__measObject_PR_measObjectNR,
	/* Extensions may appear below */
	MeasObjectToAddMod__measObject_PR_measObjectEUTRA
} MeasObjectToAddMod__measObject_PR;

/* Forward declarations */
struct MeasObjectNR;
struct MeasObjectEUTRA;

/* MeasObjectToAddMod */
typedef struct MeasObjectToAddMod {
	MeasObjectId_t	 measObjectId;
	struct MeasObjectToAddMod__measObject {
		MeasObjectToAddMod__measObject_PR present;
		union MeasObjectToAddMod__measObject_u {
			struct MeasObjectNR	*measObjectNR;
			/*
			 * This type is extensible,
			 * possible extensions are below.
			 */
			struct MeasObjectEUTRA	*measObjectEUTRA;
		} choice;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} measObject;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} MeasObjectToAddMod_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_MeasObjectToAddMod;
extern asn_SEQUENCE_specifics_t asn_SPC_MeasObjectToAddMod_specs_1;
extern asn_TYPE_member_t asn_MBR_MeasObjectToAddMod_1[2];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "MeasObjectNR.h"
#include "MeasObjectEUTRA.h"

#endif	/* _MeasObjectToAddMod_H_ */
#include <skeletons/asn_internal.h>
