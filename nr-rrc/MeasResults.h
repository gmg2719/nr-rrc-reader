/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "38331-f60.asn"
 * 	`asn1c -fcompound-names -findirect-choice -gen-PER -pdu=all -no-gen-example -no-gen-OER -fincludes-quoted -funnamed-unions -D nr-rrc-f60`
 */

#ifndef	_MeasResults_H_
#define	_MeasResults_H_


#include "asn_application.h"

/* Including external dependencies */
#include "MeasId.h"
#include "MeasResultServMOList.h"
#include "constr_CHOICE.h"
#include "constr_SEQUENCE.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum MeasResults__measResultNeighCells_PR {
	MeasResults__measResultNeighCells_PR_NOTHING,	/* No components present */
	MeasResults__measResultNeighCells_PR_measResultListNR,
	/* Extensions may appear below */
	MeasResults__measResultNeighCells_PR_measResultListEUTRA
} MeasResults__measResultNeighCells_PR;

/* Forward declarations */
struct MeasResultListNR;
struct MeasResultListEUTRA;
struct MeasResultServFreqListEUTRA_SCG;
struct MeasResultServFreqListNR_SCG;
struct MeasResultSFTD_EUTRA;
struct MeasResultCellSFTD_NR;

/* MeasResults */
typedef struct MeasResults {
	MeasId_t	 measId;
	MeasResultServMOList_t	 measResultServingMOList;
	struct MeasResults__measResultNeighCells {
		MeasResults__measResultNeighCells_PR present;
		union {
			struct MeasResultListNR	*measResultListNR;
			/*
			 * This type is extensible,
			 * possible extensions are below.
			 */
			struct MeasResultListEUTRA	*measResultListEUTRA;
		};
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *measResultNeighCells;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	struct MeasResults__ext1 {
		struct MeasResultServFreqListEUTRA_SCG	*measResultServFreqListEUTRA_SCG;	/* OPTIONAL */
		struct MeasResultServFreqListNR_SCG	*measResultServFreqListNR_SCG;	/* OPTIONAL */
		struct MeasResultSFTD_EUTRA	*measResultSFTD_EUTRA;	/* OPTIONAL */
		struct MeasResultCellSFTD_NR	*measResultSFTD_NR;	/* OPTIONAL */
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *ext1;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} MeasResults_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_MeasResults;
extern asn_SEQUENCE_specifics_t asn_SPC_MeasResults_specs_1;
extern asn_TYPE_member_t asn_MBR_MeasResults_1[4];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "MeasResultListNR.h"
#include "MeasResultListEUTRA.h"
#include "MeasResultServFreqListEUTRA-SCG.h"
#include "MeasResultServFreqListNR-SCG.h"
#include "MeasResultSFTD-EUTRA.h"
#include "MeasResultCellSFTD-NR.h"

#endif	/* _MeasResults_H_ */
#include "asn_internal.h"
