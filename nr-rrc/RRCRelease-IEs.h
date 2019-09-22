/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "38331-f60.asn"
 * 	`asn1c -fcompound-names -findirect-choice -gen-PER -pdu=all -no-gen-example -fincludes-quoted -funnamed-unions -D nr-rrc`
 */

#ifndef	_RRCRelease_IEs_H_
#define	_RRCRelease_IEs_H_


#include "asn_application.h"

/* Including external dependencies */
#include "OCTET_STRING.h"
#include "NativeEnumerated.h"
#include "constr_SEQUENCE.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum RRCRelease_IEs__deprioritisationReq__deprioritisationType {
	RRCRelease_IEs__deprioritisationReq__deprioritisationType_frequency	= 0,
	RRCRelease_IEs__deprioritisationReq__deprioritisationType_nr	= 1
} e_RRCRelease_IEs__deprioritisationReq__deprioritisationType;
typedef enum RRCRelease_IEs__deprioritisationReq__deprioritisationTimer {
	RRCRelease_IEs__deprioritisationReq__deprioritisationTimer_min5	= 0,
	RRCRelease_IEs__deprioritisationReq__deprioritisationTimer_min10	= 1,
	RRCRelease_IEs__deprioritisationReq__deprioritisationTimer_min15	= 2,
	RRCRelease_IEs__deprioritisationReq__deprioritisationTimer_min30	= 3
} e_RRCRelease_IEs__deprioritisationReq__deprioritisationTimer;

/* Forward declarations */
struct RedirectedCarrierInfo;
struct CellReselectionPriorities;
struct SuspendConfig;
struct RRCRelease_v1540_IEs;

/* RRCRelease-IEs */
typedef struct RRCRelease_IEs {
	struct RedirectedCarrierInfo	*redirectedCarrierInfo;	/* OPTIONAL */
	struct CellReselectionPriorities	*cellReselectionPriorities;	/* OPTIONAL */
	struct SuspendConfig	*suspendConfig;	/* OPTIONAL */
	struct RRCRelease_IEs__deprioritisationReq {
		long	 deprioritisationType;
		long	 deprioritisationTimer;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *deprioritisationReq;
	OCTET_STRING_t	*lateNonCriticalExtension;	/* OPTIONAL */
	struct RRCRelease_v1540_IEs	*nonCriticalExtension;	/* OPTIONAL */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} RRCRelease_IEs_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_deprioritisationType_6;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_deprioritisationTimer_9;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_RRCRelease_IEs;
extern asn_SEQUENCE_specifics_t asn_SPC_RRCRelease_IEs_specs_1;
extern asn_TYPE_member_t asn_MBR_RRCRelease_IEs_1[6];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "RedirectedCarrierInfo.h"
#include "CellReselectionPriorities.h"
#include "SuspendConfig.h"
#include "RRCRelease-v1540-IEs.h"

#endif	/* _RRCRelease_IEs_H_ */
#include "asn_internal.h"
