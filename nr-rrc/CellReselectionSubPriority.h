/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "38331-f60.asn"
 * 	`asn1c -S /usr/local/share/asn1c -fcompound-names -fskeletons-copy -findirect-choice -gen-PER -pdu=all -D nr-rrc`
 */

#ifndef	_CellReselectionSubPriority_H_
#define	_CellReselectionSubPriority_H_


#include <skeletons/asn_application.h>

/* Including external dependencies */
#include <skeletons/NativeEnumerated.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum CellReselectionSubPriority {
	CellReselectionSubPriority_oDot2	= 0,
	CellReselectionSubPriority_oDot4	= 1,
	CellReselectionSubPriority_oDot6	= 2,
	CellReselectionSubPriority_oDot8	= 3
} e_CellReselectionSubPriority;

/* CellReselectionSubPriority */
typedef long	 CellReselectionSubPriority_t;

/* Implementation */
extern asn_per_constraints_t asn_PER_type_CellReselectionSubPriority_constr_1;
extern asn_TYPE_descriptor_t asn_DEF_CellReselectionSubPriority;
extern const asn_INTEGER_specifics_t asn_SPC_CellReselectionSubPriority_specs_1;
asn_struct_free_f CellReselectionSubPriority_free;
asn_struct_print_f CellReselectionSubPriority_print;
asn_constr_check_f CellReselectionSubPriority_constraint;
ber_type_decoder_f CellReselectionSubPriority_decode_ber;
der_type_encoder_f CellReselectionSubPriority_encode_der;
xer_type_decoder_f CellReselectionSubPriority_decode_xer;
xer_type_encoder_f CellReselectionSubPriority_encode_xer;
oer_type_decoder_f CellReselectionSubPriority_decode_oer;
oer_type_encoder_f CellReselectionSubPriority_encode_oer;
per_type_decoder_f CellReselectionSubPriority_decode_uper;
per_type_encoder_f CellReselectionSubPriority_encode_uper;
per_type_decoder_f CellReselectionSubPriority_decode_aper;
per_type_encoder_f CellReselectionSubPriority_encode_aper;

#ifdef __cplusplus
}
#endif

#endif	/* _CellReselectionSubPriority_H_ */
#include <skeletons/asn_internal.h>
