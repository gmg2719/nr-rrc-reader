/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "38331-f60.asn"
 * 	`asn1c -fcompound-names -findirect-choice -gen-PER -pdu=all -no-gen-example -fincludes-quoted -funnamed-unions -D nr-rrc`
 */

#ifndef	_TCI_StateId_H_
#define	_TCI_StateId_H_


#include "asn_application.h"

/* Including external dependencies */
#include "NativeInteger.h"

#ifdef __cplusplus
extern "C" {
#endif

/* TCI-StateId */
typedef long	 TCI_StateId_t;

/* Implementation */
extern asn_per_constraints_t asn_PER_type_TCI_StateId_constr_1;
extern asn_TYPE_descriptor_t asn_DEF_TCI_StateId;
asn_struct_free_f TCI_StateId_free;
asn_struct_print_f TCI_StateId_print;
asn_constr_check_f TCI_StateId_constraint;
ber_type_decoder_f TCI_StateId_decode_ber;
der_type_encoder_f TCI_StateId_encode_der;
xer_type_decoder_f TCI_StateId_decode_xer;
xer_type_encoder_f TCI_StateId_encode_xer;
oer_type_decoder_f TCI_StateId_decode_oer;
oer_type_encoder_f TCI_StateId_encode_oer;
per_type_decoder_f TCI_StateId_decode_uper;
per_type_encoder_f TCI_StateId_encode_uper;
per_type_decoder_f TCI_StateId_decode_aper;
per_type_encoder_f TCI_StateId_encode_aper;

#ifdef __cplusplus
}
#endif

#endif	/* _TCI_StateId_H_ */
#include "asn_internal.h"
