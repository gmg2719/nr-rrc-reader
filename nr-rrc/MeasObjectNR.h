/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "38331-f60.asn"
 * 	`asn1c -S /usr/local/share/asn1c -fcompound-names -fskeletons-copy -findirect-choice -gen-PER -pdu=all -D nr-rrc`
 */

#ifndef	_MeasObjectNR_H_
#define	_MeasObjectNR_H_


#include <skeletons/asn_application.h>

/* Including external dependencies */
#include <skeletons/NativeEnumerated.h>
#include <skeletons/NativeInteger.h>
#include <skeletons/asn_SEQUENCE_OF.h>
#include <skeletons/constr_SEQUENCE.h>
#include <skeletons/constr_SEQUENCE_OF.h>

#include "ARFCN-ValueNR.h"
#include "FreqBandIndicatorNR.h"
#include "Q-OffsetRangeList.h"
#include "ReferenceSignalConfig.h"
#include "SubcarrierSpacing.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum MeasObjectNR__ext1__measCycleSCell_v1530 {
	MeasObjectNR__ext1__measCycleSCell_v1530_sf160	= 0,
	MeasObjectNR__ext1__measCycleSCell_v1530_sf256	= 1,
	MeasObjectNR__ext1__measCycleSCell_v1530_sf320	= 2,
	MeasObjectNR__ext1__measCycleSCell_v1530_sf512	= 3,
	MeasObjectNR__ext1__measCycleSCell_v1530_sf640	= 4,
	MeasObjectNR__ext1__measCycleSCell_v1530_sf1024	= 5,
	MeasObjectNR__ext1__measCycleSCell_v1530_sf1280	= 6
} e_MeasObjectNR__ext1__measCycleSCell_v1530;

/* Forward declarations */
struct SSB_MTC;
struct SSB_MTC2;
struct ThresholdNR;
struct PCI_List;
struct CellsToAddModList;
struct PCI_RangeIndexList;
struct PCI_RangeElement;

/* MeasObjectNR */
typedef struct MeasObjectNR {
	ARFCN_ValueNR_t	*ssbFrequency;	/* OPTIONAL */
	SubcarrierSpacing_t	*ssbSubcarrierSpacing;	/* OPTIONAL */
	struct SSB_MTC	*smtc1;	/* OPTIONAL */
	struct SSB_MTC2	*smtc2;	/* OPTIONAL */
	ARFCN_ValueNR_t	*refFreqCSI_RS;	/* OPTIONAL */
	ReferenceSignalConfig_t	 referenceSignalConfig;
	struct ThresholdNR	*absThreshSS_BlocksConsolidation;	/* OPTIONAL */
	struct ThresholdNR	*absThreshCSI_RS_Consolidation;	/* OPTIONAL */
	long	*nrofSS_BlocksToAverage;	/* OPTIONAL */
	long	*nrofCSI_RS_ResourcesToAverage;	/* OPTIONAL */
	long	 quantityConfigIndex;
	Q_OffsetRangeList_t	 offsetMO;
	struct PCI_List	*cellsToRemoveList;	/* OPTIONAL */
	struct CellsToAddModList	*cellsToAddModList;	/* OPTIONAL */
	struct PCI_RangeIndexList	*blackCellsToRemoveList;	/* OPTIONAL */
	struct MeasObjectNR__blackCellsToAddModList {
		A_SEQUENCE_OF(struct PCI_RangeElement) list;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *blackCellsToAddModList;
	struct PCI_RangeIndexList	*whiteCellsToRemoveList;	/* OPTIONAL */
	struct MeasObjectNR__whiteCellsToAddModList {
		A_SEQUENCE_OF(struct PCI_RangeElement) list;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *whiteCellsToAddModList;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	struct MeasObjectNR__ext1 {
		FreqBandIndicatorNR_t	*freqBandIndicatorNR_v1530;	/* OPTIONAL */
		long	*measCycleSCell_v1530;	/* OPTIONAL */
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *ext1;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} MeasObjectNR_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_measCycleSCell_v1530_25;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_MeasObjectNR;
extern asn_SEQUENCE_specifics_t asn_SPC_MeasObjectNR_specs_1;
extern asn_TYPE_member_t asn_MBR_MeasObjectNR_1[19];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "SSB-MTC.h"
#include "SSB-MTC2.h"
#include "ThresholdNR.h"
#include "PCI-List.h"
#include "CellsToAddModList.h"
#include "PCI-RangeIndexList.h"
#include "PCI-RangeElement.h"

#endif	/* _MeasObjectNR_H_ */
#include <skeletons/asn_internal.h>
