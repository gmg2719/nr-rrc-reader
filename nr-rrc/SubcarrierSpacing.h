/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "38331-f60.asn"
 * 	`asn1c -S /usr/local/share/asn1c -fcompound-names -fskeletons-copy -findirect-choice -gen-PER -pdu=all -D nr-rrc`
 */

#ifndef	_SubcarrierSpacing_H_
#define	_SubcarrierSpacing_H_


#include <skeletons/asn_application.h>

/* Including external dependencies */
#include <skeletons/NativeEnumerated.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum SubcarrierSpacing {
	SubcarrierSpacing_kHz15	= 0,
	SubcarrierSpacing_kHz30	= 1,
	SubcarrierSpacing_kHz60	= 2,
	SubcarrierSpacing_kHz120	= 3,
	SubcarrierSpacing_kHz240	= 4,
	SubcarrierSpacing_spare3	= 5,
	SubcarrierSpacing_spare2	= 6,
	SubcarrierSpacing_spare1	= 7
} e_SubcarrierSpacing;

/* SubcarrierSpacing */
typedef long	 SubcarrierSpacing_t;

/* Implementation */
extern asn_per_constraints_t asn_PER_type_SubcarrierSpacing_constr_1;
extern asn_TYPE_descriptor_t asn_DEF_SubcarrierSpacing;
extern const asn_INTEGER_specifics_t asn_SPC_SubcarrierSpacing_specs_1;
asn_struct_free_f SubcarrierSpacing_free;
asn_struct_print_f SubcarrierSpacing_print;
asn_constr_check_f SubcarrierSpacing_constraint;
ber_type_decoder_f SubcarrierSpacing_decode_ber;
der_type_encoder_f SubcarrierSpacing_encode_der;
xer_type_decoder_f SubcarrierSpacing_decode_xer;
xer_type_encoder_f SubcarrierSpacing_encode_xer;
oer_type_decoder_f SubcarrierSpacing_decode_oer;
oer_type_encoder_f SubcarrierSpacing_encode_oer;
per_type_decoder_f SubcarrierSpacing_decode_uper;
per_type_encoder_f SubcarrierSpacing_encode_uper;
per_type_decoder_f SubcarrierSpacing_decode_aper;
per_type_encoder_f SubcarrierSpacing_encode_aper;

#ifdef __cplusplus
}
#endif

#endif	/* _SubcarrierSpacing_H_ */
#include <skeletons/asn_internal.h>
