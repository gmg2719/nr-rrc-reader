/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "38331-f60.asn"
 * 	`asn1c -S /usr/local/share/asn1c -fcompound-names -fskeletons-copy -findirect-choice -gen-PER -pdu=all -D nr-rrc`
 */

#ifndef	_TCI_State_H_
#define	_TCI_State_H_


#include <skeletons/asn_application.h>

/* Including external dependencies */
#include <skeletons/constr_SEQUENCE.h>

#include "QCL-Info.h"
#include "TCI-StateId.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct QCL_Info;

/* TCI-State */
typedef struct TCI_State {
	TCI_StateId_t	 tci_StateId;
	QCL_Info_t	 qcl_Type1;
	struct QCL_Info	*qcl_Type2;	/* OPTIONAL */
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} TCI_State_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_TCI_State;
extern asn_SEQUENCE_specifics_t asn_SPC_TCI_State_specs_1;
extern asn_TYPE_member_t asn_MBR_TCI_State_1[3];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "QCL-Info.h"

#endif	/* _TCI_State_H_ */
#include <skeletons/asn_internal.h>
