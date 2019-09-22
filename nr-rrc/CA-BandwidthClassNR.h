/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "38331-f60.asn"
 * 	`asn1c -S /usr/local/share/asn1c -fcompound-names -fskeletons-copy -findirect-choice -gen-PER -pdu=all -D nr-rrc`
 */

#ifndef	_CA_BandwidthClassNR_H_
#define	_CA_BandwidthClassNR_H_


#include <skeletons/asn_application.h>

/* Including external dependencies */
#include <skeletons/NativeEnumerated.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum CA_BandwidthClassNR {
	CA_BandwidthClassNR_a	= 0,
	CA_BandwidthClassNR_b	= 1,
	CA_BandwidthClassNR_c	= 2,
	CA_BandwidthClassNR_d	= 3,
	CA_BandwidthClassNR_e	= 4,
	CA_BandwidthClassNR_f	= 5,
	CA_BandwidthClassNR_g	= 6,
	CA_BandwidthClassNR_h	= 7,
	CA_BandwidthClassNR_i	= 8,
	CA_BandwidthClassNR_j	= 9,
	CA_BandwidthClassNR_k	= 10,
	CA_BandwidthClassNR_l	= 11,
	CA_BandwidthClassNR_m	= 12,
	CA_BandwidthClassNR_n	= 13,
	CA_BandwidthClassNR_o	= 14,
	CA_BandwidthClassNR_p	= 15,
	CA_BandwidthClassNR_q	= 16
	/*
	 * Enumeration is extensible
	 */
} e_CA_BandwidthClassNR;

/* CA-BandwidthClassNR */
typedef long	 CA_BandwidthClassNR_t;

/* Implementation */
extern asn_per_constraints_t asn_PER_type_CA_BandwidthClassNR_constr_1;
extern asn_TYPE_descriptor_t asn_DEF_CA_BandwidthClassNR;
extern const asn_INTEGER_specifics_t asn_SPC_CA_BandwidthClassNR_specs_1;
asn_struct_free_f CA_BandwidthClassNR_free;
asn_struct_print_f CA_BandwidthClassNR_print;
asn_constr_check_f CA_BandwidthClassNR_constraint;
ber_type_decoder_f CA_BandwidthClassNR_decode_ber;
der_type_encoder_f CA_BandwidthClassNR_encode_der;
xer_type_decoder_f CA_BandwidthClassNR_decode_xer;
xer_type_encoder_f CA_BandwidthClassNR_encode_xer;
oer_type_decoder_f CA_BandwidthClassNR_decode_oer;
oer_type_encoder_f CA_BandwidthClassNR_encode_oer;
per_type_decoder_f CA_BandwidthClassNR_decode_uper;
per_type_encoder_f CA_BandwidthClassNR_encode_uper;
per_type_decoder_f CA_BandwidthClassNR_decode_aper;
per_type_encoder_f CA_BandwidthClassNR_encode_aper;

#ifdef __cplusplus
}
#endif

#endif	/* _CA_BandwidthClassNR_H_ */
#include <skeletons/asn_internal.h>
