/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-InterNodeDefinitions"
 * 	found in "38331-f60.asn"
 * 	`asn1c -S /usr/local/share/asn1c -fcompound-names -fskeletons-copy -findirect-choice -gen-PER -pdu=all -D nr-rrc`
 */

#ifndef	_BandEntryIndex_H_
#define	_BandEntryIndex_H_


#include <skeletons/asn_application.h>

/* Including external dependencies */
#include <skeletons/NativeInteger.h>

#ifdef __cplusplus
extern "C" {
#endif

/* BandEntryIndex */
typedef long	 BandEntryIndex_t;

/* Implementation */
extern asn_per_constraints_t asn_PER_type_BandEntryIndex_constr_1;
extern asn_TYPE_descriptor_t asn_DEF_BandEntryIndex;
asn_struct_free_f BandEntryIndex_free;
asn_struct_print_f BandEntryIndex_print;
asn_constr_check_f BandEntryIndex_constraint;
ber_type_decoder_f BandEntryIndex_decode_ber;
der_type_encoder_f BandEntryIndex_encode_der;
xer_type_decoder_f BandEntryIndex_decode_xer;
xer_type_encoder_f BandEntryIndex_encode_xer;
oer_type_decoder_f BandEntryIndex_decode_oer;
oer_type_encoder_f BandEntryIndex_encode_oer;
per_type_decoder_f BandEntryIndex_decode_uper;
per_type_encoder_f BandEntryIndex_encode_uper;
per_type_decoder_f BandEntryIndex_decode_aper;
per_type_encoder_f BandEntryIndex_encode_aper;

#ifdef __cplusplus
}
#endif

#endif	/* _BandEntryIndex_H_ */
#include <skeletons/asn_internal.h>
