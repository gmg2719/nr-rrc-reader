/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "38331-f60.asn"
 * 	`asn1c -S /usr/local/share/asn1c -fcompound-names -fskeletons-copy -findirect-choice -gen-PER -pdu=all -D nr-rrc`
 */

#ifndef	_CellGroupId_H_
#define	_CellGroupId_H_


#include <skeletons/asn_application.h>

/* Including external dependencies */
#include <skeletons/NativeInteger.h>

#ifdef __cplusplus
extern "C" {
#endif

/* CellGroupId */
typedef long	 CellGroupId_t;

/* Implementation */
extern asn_per_constraints_t asn_PER_type_CellGroupId_constr_1;
extern asn_TYPE_descriptor_t asn_DEF_CellGroupId;
asn_struct_free_f CellGroupId_free;
asn_struct_print_f CellGroupId_print;
asn_constr_check_f CellGroupId_constraint;
ber_type_decoder_f CellGroupId_decode_ber;
der_type_encoder_f CellGroupId_encode_der;
xer_type_decoder_f CellGroupId_decode_xer;
xer_type_encoder_f CellGroupId_encode_xer;
oer_type_decoder_f CellGroupId_decode_oer;
oer_type_encoder_f CellGroupId_encode_oer;
per_type_decoder_f CellGroupId_decode_uper;
per_type_encoder_f CellGroupId_encode_uper;
per_type_decoder_f CellGroupId_decode_aper;
per_type_encoder_f CellGroupId_encode_aper;

#ifdef __cplusplus
}
#endif

#endif	/* _CellGroupId_H_ */
#include <skeletons/asn_internal.h>
