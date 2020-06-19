/*
 * Generated by util/mkerr.pl DO NOT EDIT
 * Copyright 1995-2020 The OpenSSL Project Authors. All Rights Reserved.
 *
 * Licensed under the Apache License 2.0 (the "License").  You may not use
 * this file except in compliance with the License.  You can obtain a copy
 * in the file LICENSE in the source distribution or at
 * https://www.openssl.org/source/license.html
 */

#ifndef OPENSSL_X509ERR_H
# define OPENSSL_X509ERR_H
# pragma once

# include <openssl/opensslconf.h>
# include <openssl/symhacks.h>


# ifdef  __cplusplus
extern "C"
# endif
int ERR_load_X509_strings(void);

/*
 * X509 function codes.
 */
# ifndef OPENSSL_NO_DEPRECATED_3_0
#  define X509_F_ADD_CERT_DIR                              0
#  define X509_F_BUILD_CHAIN                               0
#  define X509_F_BY_FILE_CTRL                              0
#  define X509_F_CACHE_OBJECTS                             0
#  define X509_F_CHECK_NAME_CONSTRAINTS                    0
#  define X509_F_CHECK_POLICY                              0
#  define X509_F_COMMON_VERIFY_SM2                         0
#  define X509_F_DANE_I2D                                  0
#  define X509_F_DIR_CTRL                                  0
#  define X509_F_GET_CERT_BY_SUBJECT                       0
#  define X509_F_I2D_X509_AUX                              0
#  define X509_F_LOOKUP_CERTS_SK                           0
#  define X509_F_NETSCAPE_SPKI_B64_DECODE                  0
#  define X509_F_NETSCAPE_SPKI_B64_ENCODE                  0
#  define X509_F_NEW_DIR                                   0
#  define X509_F_X509AT_ADD1_ATTR                          0
#  define X509_F_X509V3_ADD_EXT                            0
#  define X509_F_X509_ATTRIBUTE_CREATE_BY_NID              0
#  define X509_F_X509_ATTRIBUTE_CREATE_BY_OBJ              0
#  define X509_F_X509_ATTRIBUTE_CREATE_BY_TXT              0
#  define X509_F_X509_ATTRIBUTE_GET0_DATA                  0
#  define X509_F_X509_ATTRIBUTE_SET1_DATA                  0
#  define X509_F_X509_CHECK_PRIVATE_KEY                    0
#  define X509_F_X509_CRL_DIFF                             0
#  define X509_F_X509_CRL_METHOD_NEW                       0
#  define X509_F_X509_CRL_PRINT_FP                         0
#  define X509_F_X509_EXTENSION_CREATE_BY_NID              0
#  define X509_F_X509_EXTENSION_CREATE_BY_OBJ              0
#  define X509_F_X509_GET_PUBKEY_PARAMETERS                0
#  define X509_F_X509_LOAD_CERT_CRL_FILE                   0
#  define X509_F_X509_LOAD_CERT_FILE                       0
#  define X509_F_X509_LOAD_CRL_FILE                        0
#  define X509_F_X509_LOOKUP_METH_NEW                      0
#  define X509_F_X509_LOOKUP_NEW                           0
#  define X509_F_X509_NAME_ADD_ENTRY                       0
#  define X509_F_X509_NAME_CANON                           0
#  define X509_F_X509_NAME_ENTRY_CREATE_BY_NID             0
#  define X509_F_X509_NAME_ENTRY_CREATE_BY_TXT             0
#  define X509_F_X509_NAME_ENTRY_SET_OBJECT                0
#  define X509_F_X509_NAME_ONELINE                         0
#  define X509_F_X509_NAME_PRINT                           0
#  define X509_F_X509_OBJECT_NEW                           0
#  define X509_F_X509_PRINT_EX_FP                          0
#  define X509_F_X509_PUBKEY_DECODE                        0
#  define X509_F_X509_PUBKEY_GET                           0
#  define X509_F_X509_PUBKEY_GET0                          0
#  define X509_F_X509_PUBKEY_SET                           0
#  define X509_F_X509_REQ_CHECK_PRIVATE_KEY                0
#  define X509_F_X509_REQ_PRINT_EX                         0
#  define X509_F_X509_REQ_PRINT_FP                         0
#  define X509_F_X509_REQ_TO_X509                          0
#  define X509_F_X509_REQ_VERIFY                           0
#  define X509_F_X509_REQ_VERIFY_SM2                       0
#  define X509_F_X509_STORE_ADD_CERT                       0
#  define X509_F_X509_STORE_ADD_CRL                        0
#  define X509_F_X509_STORE_ADD_LOOKUP                     0
#  define X509_F_X509_STORE_CTX_GET1_ISSUER                0
#  define X509_F_X509_STORE_CTX_INIT                       0
#  define X509_F_X509_STORE_CTX_NEW                        0
#  define X509_F_X509_STORE_CTX_PURPOSE_INHERIT            0
#  define X509_F_X509_STORE_NEW                            0
#  define X509_F_X509_TO_X509_REQ                          0
#  define X509_F_X509_TRUST_ADD                            0
#  define X509_F_X509_TRUST_SET                            0
#  define X509_F_X509_VERIFY                               0
#  define X509_F_X509_VERIFY_CERT                          0
#  define X509_F_X509_VERIFY_PARAM_NEW                     0
#  define X509_F_X509_VERIFY_SM2                           0
# endif

/*
 * X509 reason codes.
 */
# define X509_R_AKID_MISMATCH                             110
# define X509_R_BAD_SELECTOR                              133
# define X509_R_BAD_X509_FILETYPE                         100
# define X509_R_BASE64_DECODE_ERROR                       118
# define X509_R_CANT_CHECK_DH_KEY                         114
# define X509_R_CERTIFICATE_VERIFICATION_FAILED           139
# define X509_R_CERT_ALREADY_IN_HASH_TABLE                101
# define X509_R_CRL_ALREADY_DELTA                         127
# define X509_R_CRL_VERIFY_FAILURE                        131
# define X509_R_IDP_MISMATCH                              128
# define X509_R_INVALID_ATTRIBUTES                        138
# define X509_R_INVALID_DIRECTORY                         113
# define X509_R_INVALID_FIELD_NAME                        119
# define X509_R_INVALID_TRUST                             123
# define X509_R_ISSUER_MISMATCH                           129
# define X509_R_KEY_TYPE_MISMATCH                         115
# define X509_R_KEY_VALUES_MISMATCH                       116
# define X509_R_LOADING_CERT_DIR                          103
# define X509_R_LOADING_DEFAULTS                          104
# define X509_R_METHOD_NOT_SUPPORTED                      124
# define X509_R_NAME_TOO_LONG                             134
# define X509_R_NEWER_CRL_NOT_NEWER                       132
# define X509_R_NO_CERTIFICATE_FOUND                      135
# define X509_R_NO_CERTIFICATE_OR_CRL_FOUND               136
# define X509_R_NO_CERT_SET_FOR_US_TO_VERIFY              105
# define X509_R_NO_CRL_FOUND                              137
# define X509_R_NO_CRL_NUMBER                             130
# define X509_R_PUBLIC_KEY_DECODE_ERROR                   125
# define X509_R_PUBLIC_KEY_ENCODE_ERROR                   126
# define X509_R_SHOULD_RETRY                              106
# define X509_R_UNABLE_TO_FIND_PARAMETERS_IN_CHAIN        107
# define X509_R_UNABLE_TO_GET_CERTS_PUBLIC_KEY            108
# define X509_R_UNKNOWN_KEY_TYPE                          117
# define X509_R_UNKNOWN_NID                               109
# define X509_R_UNKNOWN_PURPOSE_ID                        121
# define X509_R_UNKNOWN_TRUST_ID                          120
# define X509_R_UNSUPPORTED_ALGORITHM                     111
# define X509_R_WRONG_LOOKUP_TYPE                         112
# define X509_R_WRONG_TYPE                                122

#endif