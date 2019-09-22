/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "38331-f60.asn"
 * 	`asn1c -fcompound-names -findirect-choice -gen-PER -pdu=all -no-gen-example -fincludes-quoted -funnamed-unions -D nr-rrc`
 */

#ifndef	_CodebookParameters_H_
#define	_CodebookParameters_H_


#include "asn_application.h"

/* Including external dependencies */
#include "NativeEnumerated.h"
#include "NativeInteger.h"
#include "asn_SEQUENCE_OF.h"
#include "constr_SEQUENCE_OF.h"
#include "constr_SEQUENCE.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum CodebookParameters__type1__singlePanel__modes {
	CodebookParameters__type1__singlePanel__modes_mode1	= 0,
	CodebookParameters__type1__singlePanel__modes_mode1andMode2	= 1
} e_CodebookParameters__type1__singlePanel__modes;
typedef enum CodebookParameters__type1__multiPanel__modes {
	CodebookParameters__type1__multiPanel__modes_mode1	= 0,
	CodebookParameters__type1__multiPanel__modes_mode2	= 1,
	CodebookParameters__type1__multiPanel__modes_both	= 2
} e_CodebookParameters__type1__multiPanel__modes;
typedef enum CodebookParameters__type1__multiPanel__nrofPanels {
	CodebookParameters__type1__multiPanel__nrofPanels_n2	= 0,
	CodebookParameters__type1__multiPanel__nrofPanels_n4	= 1
} e_CodebookParameters__type1__multiPanel__nrofPanels;
typedef enum CodebookParameters__type2__amplitudeScalingType {
	CodebookParameters__type2__amplitudeScalingType_wideband	= 0,
	CodebookParameters__type2__amplitudeScalingType_widebandAndSubband	= 1
} e_CodebookParameters__type2__amplitudeScalingType;
typedef enum CodebookParameters__type2__amplitudeSubsetRestriction {
	CodebookParameters__type2__amplitudeSubsetRestriction_supported	= 0
} e_CodebookParameters__type2__amplitudeSubsetRestriction;
typedef enum CodebookParameters__type2_PortSelection__amplitudeScalingType {
	CodebookParameters__type2_PortSelection__amplitudeScalingType_wideband	= 0,
	CodebookParameters__type2_PortSelection__amplitudeScalingType_widebandAndSubband	= 1
} e_CodebookParameters__type2_PortSelection__amplitudeScalingType;

/* Forward declarations */
struct SupportedCSI_RS_Resource;

/* CodebookParameters */
typedef struct CodebookParameters {
	struct CodebookParameters__type1 {
		struct CodebookParameters__type1__singlePanel {
			struct CodebookParameters__type1__singlePanel__supportedCSI_RS_ResourceList {
				A_SEQUENCE_OF(struct SupportedCSI_RS_Resource) list;
				
				/* Context for parsing across buffer boundaries */
				asn_struct_ctx_t _asn_ctx;
			} supportedCSI_RS_ResourceList;
			long	 modes;
			long	 maxNumberCSI_RS_PerResourceSet;
			
			/* Context for parsing across buffer boundaries */
			asn_struct_ctx_t _asn_ctx;
		} singlePanel;
		struct CodebookParameters__type1__multiPanel {
			struct CodebookParameters__type1__multiPanel__supportedCSI_RS_ResourceList {
				A_SEQUENCE_OF(struct SupportedCSI_RS_Resource) list;
				
				/* Context for parsing across buffer boundaries */
				asn_struct_ctx_t _asn_ctx;
			} supportedCSI_RS_ResourceList;
			long	 modes;
			long	 nrofPanels;
			long	 maxNumberCSI_RS_PerResourceSet;
			
			/* Context for parsing across buffer boundaries */
			asn_struct_ctx_t _asn_ctx;
		} *multiPanel;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} type1;
	struct CodebookParameters__type2 {
		struct CodebookParameters__type2__supportedCSI_RS_ResourceList {
			A_SEQUENCE_OF(struct SupportedCSI_RS_Resource) list;
			
			/* Context for parsing across buffer boundaries */
			asn_struct_ctx_t _asn_ctx;
		} supportedCSI_RS_ResourceList;
		long	 parameterLx;
		long	 amplitudeScalingType;
		long	*amplitudeSubsetRestriction;	/* OPTIONAL */
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *type2;
	struct CodebookParameters__type2_PortSelection {
		struct CodebookParameters__type2_PortSelection__supportedCSI_RS_ResourceList {
			A_SEQUENCE_OF(struct SupportedCSI_RS_Resource) list;
			
			/* Context for parsing across buffer boundaries */
			asn_struct_ctx_t _asn_ctx;
		} supportedCSI_RS_ResourceList;
		long	 parameterLx;
		long	 amplitudeScalingType;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *type2_PortSelection;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} CodebookParameters_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_modes_6;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_modes_13;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_nrofPanels_17;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_amplitudeScalingType_25;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_amplitudeSubsetRestriction_28;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_amplitudeScalingType_34;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_CodebookParameters;
extern asn_SEQUENCE_specifics_t asn_SPC_CodebookParameters_specs_1;
extern asn_TYPE_member_t asn_MBR_CodebookParameters_1[3];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "SupportedCSI-RS-Resource.h"

#endif	/* _CodebookParameters_H_ */
#include "asn_internal.h"
