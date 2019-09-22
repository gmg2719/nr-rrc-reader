/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "38331-f60.asn"
 * 	`asn1c -fcompound-names -findirect-choice -gen-PER -pdu=all -no-gen-example -no-gen-OER -fincludes-quoted -funnamed-unions -D nr-rrc-f60`
 */

#ifndef	_SRS_Resource_H_
#define	_SRS_Resource_H_


#include "asn_application.h"

/* Including external dependencies */
#include "SRS-ResourceId.h"
#include "NativeEnumerated.h"
#include "NativeInteger.h"
#include "constr_SEQUENCE.h"
#include "constr_CHOICE.h"
#include "SRS-PeriodicityAndOffset.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum SRS_Resource__nrofSRS_Ports {
	SRS_Resource__nrofSRS_Ports_port1	= 0,
	SRS_Resource__nrofSRS_Ports_ports2	= 1,
	SRS_Resource__nrofSRS_Ports_ports4	= 2
} e_SRS_Resource__nrofSRS_Ports;
typedef enum SRS_Resource__ptrs_PortIndex {
	SRS_Resource__ptrs_PortIndex_n0	= 0,
	SRS_Resource__ptrs_PortIndex_n1	= 1
} e_SRS_Resource__ptrs_PortIndex;
typedef enum SRS_Resource__transmissionComb_PR {
	SRS_Resource__transmissionComb_PR_NOTHING,	/* No components present */
	SRS_Resource__transmissionComb_PR_n2,
	SRS_Resource__transmissionComb_PR_n4
} SRS_Resource__transmissionComb_PR;
typedef enum SRS_Resource__resourceMapping__nrofSymbols {
	SRS_Resource__resourceMapping__nrofSymbols_n1	= 0,
	SRS_Resource__resourceMapping__nrofSymbols_n2	= 1,
	SRS_Resource__resourceMapping__nrofSymbols_n4	= 2
} e_SRS_Resource__resourceMapping__nrofSymbols;
typedef enum SRS_Resource__resourceMapping__repetitionFactor {
	SRS_Resource__resourceMapping__repetitionFactor_n1	= 0,
	SRS_Resource__resourceMapping__repetitionFactor_n2	= 1,
	SRS_Resource__resourceMapping__repetitionFactor_n4	= 2
} e_SRS_Resource__resourceMapping__repetitionFactor;
typedef enum SRS_Resource__groupOrSequenceHopping {
	SRS_Resource__groupOrSequenceHopping_neither	= 0,
	SRS_Resource__groupOrSequenceHopping_groupHopping	= 1,
	SRS_Resource__groupOrSequenceHopping_sequenceHopping	= 2
} e_SRS_Resource__groupOrSequenceHopping;
typedef enum SRS_Resource__resourceType_PR {
	SRS_Resource__resourceType_PR_NOTHING,	/* No components present */
	SRS_Resource__resourceType_PR_aperiodic,
	SRS_Resource__resourceType_PR_semi_persistent,
	SRS_Resource__resourceType_PR_periodic
} SRS_Resource__resourceType_PR;

/* Forward declarations */
struct SRS_SpatialRelationInfo;

/* SRS-Resource */
typedef struct SRS_Resource {
	SRS_ResourceId_t	 srs_ResourceId;
	long	 nrofSRS_Ports;
	long	*ptrs_PortIndex;	/* OPTIONAL */
	struct SRS_Resource__transmissionComb {
		SRS_Resource__transmissionComb_PR present;
		union {
			struct SRS_Resource__transmissionComb__n2 {
				long	 combOffset_n2;
				long	 cyclicShift_n2;
				
				/* Context for parsing across buffer boundaries */
				asn_struct_ctx_t _asn_ctx;
			} *n2;
			struct SRS_Resource__transmissionComb__n4 {
				long	 combOffset_n4;
				long	 cyclicShift_n4;
				
				/* Context for parsing across buffer boundaries */
				asn_struct_ctx_t _asn_ctx;
			} *n4;
		};
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} transmissionComb;
	struct SRS_Resource__resourceMapping {
		long	 startPosition;
		long	 nrofSymbols;
		long	 repetitionFactor;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} resourceMapping;
	long	 freqDomainPosition;
	long	 freqDomainShift;
	struct SRS_Resource__freqHopping {
		long	 c_SRS;
		long	 b_SRS;
		long	 b_hop;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} freqHopping;
	long	 groupOrSequenceHopping;
	struct SRS_Resource__resourceType {
		SRS_Resource__resourceType_PR present;
		union {
			struct SRS_Resource__resourceType__aperiodic {
				/*
				 * This type is extensible,
				 * possible extensions are below.
				 */
				
				/* Context for parsing across buffer boundaries */
				asn_struct_ctx_t _asn_ctx;
			} *aperiodic;
			struct SRS_Resource__resourceType__semi_persistent {
				SRS_PeriodicityAndOffset_t	 periodicityAndOffset_sp;
				/*
				 * This type is extensible,
				 * possible extensions are below.
				 */
				
				/* Context for parsing across buffer boundaries */
				asn_struct_ctx_t _asn_ctx;
			} *semi_persistent;
			struct SRS_Resource__resourceType__periodic {
				SRS_PeriodicityAndOffset_t	 periodicityAndOffset_p;
				/*
				 * This type is extensible,
				 * possible extensions are below.
				 */
				
				/* Context for parsing across buffer boundaries */
				asn_struct_ctx_t _asn_ctx;
			} *periodic;
		};
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} resourceType;
	long	 sequenceId;
	struct SRS_SpatialRelationInfo	*spatialRelationInfo;	/* OPTIONAL */
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} SRS_Resource_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_nrofSRS_Ports_3;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_ptrs_PortIndex_7;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_nrofSymbols_19;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_repetitionFactor_23;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_groupOrSequenceHopping_33;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_SRS_Resource;
extern asn_SEQUENCE_specifics_t asn_SPC_SRS_Resource_specs_1;
extern asn_TYPE_member_t asn_MBR_SRS_Resource_1[12];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "SRS-SpatialRelationInfo.h"

#endif	/* _SRS_Resource_H_ */
#include "asn_internal.h"
