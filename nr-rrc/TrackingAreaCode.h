/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "38331-f60.asn"
 * 	`asn1c -S /usr/local/share/asn1c -fcompound-names -fskeletons-copy -findirect-choice -gen-PER -pdu=all -D nr-rrc`
 */

#ifndef	_TrackingAreaCode_H_
#define	_TrackingAreaCode_H_


#include <skeletons/asn_application.h>

/* Including external dependencies */
#include <skeletons/BIT_STRING.h>

#ifdef __cplusplus
extern "C" {
#endif

/* TrackingAreaCode */
typedef BIT_STRING_t	 TrackingAreaCode_t;

/* Implementation */
extern asn_per_constraints_t asn_PER_type_TrackingAreaCode_constr_1;
extern asn_TYPE_descriptor_t asn_DEF_TrackingAreaCode;
asn_struct_free_f TrackingAreaCode_free;
asn_struct_print_f TrackingAreaCode_print;
asn_constr_check_f TrackingAreaCode_constraint;
ber_type_decoder_f TrackingAreaCode_decode_ber;
der_type_encoder_f TrackingAreaCode_encode_der;
xer_type_decoder_f TrackingAreaCode_decode_xer;
xer_type_encoder_f TrackingAreaCode_encode_xer;
oer_type_decoder_f TrackingAreaCode_decode_oer;
oer_type_encoder_f TrackingAreaCode_encode_oer;
per_type_decoder_f TrackingAreaCode_decode_uper;
per_type_encoder_f TrackingAreaCode_encode_uper;
per_type_decoder_f TrackingAreaCode_decode_aper;
per_type_encoder_f TrackingAreaCode_encode_aper;

#ifdef __cplusplus
}
#endif

#endif	/* _TrackingAreaCode_H_ */
#include <skeletons/asn_internal.h>
