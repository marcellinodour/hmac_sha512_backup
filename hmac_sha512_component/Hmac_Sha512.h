#ifndef _HMAC_SHA512_H_
#define _HMAC_SHA512_H_

#ifdef __cplusplus
extern "C" {
#endif  // __cplusplus

#include <stddef.h>

size_t  hmac_sha512( // Retourne nombre de bytes ecrit dans le `out`
    // [in]: les cles et sa taille
    const void* key,
    const size_t keylen,

    // [in]: les donnees a hasher et sa taille
    const void* data,
    const size_t datalen,

    // [out]: le output et sa taille
    void* out,
    const size_t outlen);

#ifdef __cplusplus
}
#endif  // __cplusplus

#endif  // _HMAC_SHA512_H_
