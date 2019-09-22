/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "38331-f60.asn"
 * 	`asn1c -fcompound-names -findirect-choice -gen-PER -pdu=all -no-gen-example -fincludes-quoted -funnamed-unions -D nr-rrc`
 */

#ifndef	_NZP_CSI_RS_Resource_H_
#define	_NZP_CSI_RS_Resource_H_


#include "asn_application.h"

/* Including external dependencies */
#include "NZP-CSI-RS-ResourceId.h"
#include "CSI-RS-ResourceMapping.h"
#include "NativeInteger.h"
#include "NativeEnumerated.h"
#include "ScramblingId.h"
#include "TCI-StateId.h"
#include "constr_SEQUENCE.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum NZP_CSI_RS_Resource__powerControlOffsetSS {
	NZP_CSI_RS_Resource__powerControlOffsetSS_db_3	= 0,
	NZP_CSI_RS_Resource__powerControlOffsetSS_db0	= 1,
	NZP_CSI_RS_Resource__powerControlOffsetSS_db3	= 2,
	NZP_CSI_RS_Resource__powerControlOffsetSS_db6	= 3
} e_NZP_CSI_RS_Resource__powerControlOffsetSS;

/* Forward declarations */
struct CSI_ResourcePeriodicityAndOffset;

/* NZP-CSI-RS-Resource */
typedef struct NZP_CSI_RS_Resource {
	NZP_CSI_RS_ResourceId_t	 nzp_CSI_RS_ResourceId;
	CSI_RS_ResourceMapping_t	 resourceMapping;
	long	 powerControlOffset;
	long	*powerControlOffsetSS;	/* OPTIONAL */
	ScramblingId_t	 scramblingID;
	struct CSI_ResourcePeriodicityAndOffset	*periodicityAndOffset;	/* OPTIONAL */
	TCI_StateId_t	*qcl_InfoPeriodicCSI_RS;	/* OPTIONAL */
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} NZP_CSI_RS_Resource_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_powerControlOffsetSS_5;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_NZP_CSI_RS_Resource;
extern asn_SEQUENCE_specifics_t asn_SPC_NZP_CSI_RS_Resource_specs_1;
extern asn_TYPE_member_t asn_MBR_NZP_CSI_RS_Resource_1[7];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "CSI-ResourcePeriodicityAndOffset.h"

#endif	/* _NZP_CSI_RS_Resource_H_ */
#include "asn_internal.h"
