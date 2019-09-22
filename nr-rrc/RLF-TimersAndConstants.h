/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "38331-f60.asn"
 * 	`asn1c -S /usr/local/share/asn1c -fcompound-names -fskeletons-copy -findirect-choice -gen-PER -pdu=all -D nr-rrc`
 */

#ifndef	_RLF_TimersAndConstants_H_
#define	_RLF_TimersAndConstants_H_


#include <skeletons/asn_application.h>

/* Including external dependencies */
#include <skeletons/NativeEnumerated.h>
#include <skeletons/constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum RLF_TimersAndConstants__t310 {
	RLF_TimersAndConstants__t310_ms0	= 0,
	RLF_TimersAndConstants__t310_ms50	= 1,
	RLF_TimersAndConstants__t310_ms100	= 2,
	RLF_TimersAndConstants__t310_ms200	= 3,
	RLF_TimersAndConstants__t310_ms500	= 4,
	RLF_TimersAndConstants__t310_ms1000	= 5,
	RLF_TimersAndConstants__t310_ms2000	= 6,
	RLF_TimersAndConstants__t310_ms4000	= 7,
	RLF_TimersAndConstants__t310_ms6000	= 8
} e_RLF_TimersAndConstants__t310;
typedef enum RLF_TimersAndConstants__n310 {
	RLF_TimersAndConstants__n310_n1	= 0,
	RLF_TimersAndConstants__n310_n2	= 1,
	RLF_TimersAndConstants__n310_n3	= 2,
	RLF_TimersAndConstants__n310_n4	= 3,
	RLF_TimersAndConstants__n310_n6	= 4,
	RLF_TimersAndConstants__n310_n8	= 5,
	RLF_TimersAndConstants__n310_n10	= 6,
	RLF_TimersAndConstants__n310_n20	= 7
} e_RLF_TimersAndConstants__n310;
typedef enum RLF_TimersAndConstants__n311 {
	RLF_TimersAndConstants__n311_n1	= 0,
	RLF_TimersAndConstants__n311_n2	= 1,
	RLF_TimersAndConstants__n311_n3	= 2,
	RLF_TimersAndConstants__n311_n4	= 3,
	RLF_TimersAndConstants__n311_n5	= 4,
	RLF_TimersAndConstants__n311_n6	= 5,
	RLF_TimersAndConstants__n311_n8	= 6,
	RLF_TimersAndConstants__n311_n10	= 7
} e_RLF_TimersAndConstants__n311;
typedef enum RLF_TimersAndConstants__ext1__t311_v1530 {
	RLF_TimersAndConstants__ext1__t311_v1530_ms1000	= 0,
	RLF_TimersAndConstants__ext1__t311_v1530_ms3000	= 1,
	RLF_TimersAndConstants__ext1__t311_v1530_ms5000	= 2,
	RLF_TimersAndConstants__ext1__t311_v1530_ms10000	= 3,
	RLF_TimersAndConstants__ext1__t311_v1530_ms15000	= 4,
	RLF_TimersAndConstants__ext1__t311_v1530_ms20000	= 5,
	RLF_TimersAndConstants__ext1__t311_v1530_ms30000	= 6
} e_RLF_TimersAndConstants__ext1__t311_v1530;

/* RLF-TimersAndConstants */
typedef struct RLF_TimersAndConstants {
	long	 t310;
	long	 n310;
	long	 n311;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	struct RLF_TimersAndConstants__ext1 {
		long	 t311_v1530;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *ext1;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} RLF_TimersAndConstants_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_t310_2;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_n310_12;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_n311_21;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_t311_v1530_32;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_RLF_TimersAndConstants;
extern asn_SEQUENCE_specifics_t asn_SPC_RLF_TimersAndConstants_specs_1;
extern asn_TYPE_member_t asn_MBR_RLF_TimersAndConstants_1[4];

#ifdef __cplusplus
}
#endif

#endif	/* _RLF_TimersAndConstants_H_ */
#include <skeletons/asn_internal.h>
