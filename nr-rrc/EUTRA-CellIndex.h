/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "38331-f60.asn"
 * 	`asn1c -S /usr/local/share/asn1c -fcompound-names -fskeletons-copy -findirect-choice -gen-PER -pdu=all -D nr-rrc`
 */

#ifndef	_EUTRA_CellIndex_H_
#define	_EUTRA_CellIndex_H_


#include <skeletons/asn_application.h>

/* Including external dependencies */
#include <skeletons/NativeInteger.h>

#ifdef __cplusplus
extern "C" {
#endif

/* EUTRA-CellIndex */
typedef long	 EUTRA_CellIndex_t;

/* Implementation */
extern asn_per_constraints_t asn_PER_type_EUTRA_CellIndex_constr_1;
extern asn_TYPE_descriptor_t asn_DEF_EUTRA_CellIndex;
asn_struct_free_f EUTRA_CellIndex_free;
asn_struct_print_f EUTRA_CellIndex_print;
asn_constr_check_f EUTRA_CellIndex_constraint;
ber_type_decoder_f EUTRA_CellIndex_decode_ber;
der_type_encoder_f EUTRA_CellIndex_encode_der;
xer_type_decoder_f EUTRA_CellIndex_decode_xer;
xer_type_encoder_f EUTRA_CellIndex_encode_xer;
oer_type_decoder_f EUTRA_CellIndex_decode_oer;
oer_type_encoder_f EUTRA_CellIndex_encode_oer;
per_type_decoder_f EUTRA_CellIndex_decode_uper;
per_type_encoder_f EUTRA_CellIndex_encode_uper;
per_type_decoder_f EUTRA_CellIndex_decode_aper;
per_type_encoder_f EUTRA_CellIndex_encode_aper;

#ifdef __cplusplus
}
#endif

#endif	/* _EUTRA_CellIndex_H_ */
#include <skeletons/asn_internal.h>
