#include <assert.h>
#include <openssl/core.h>
#include <openssl/core_dispatch.h>
#include <openssl/core_names.h>
#include <openssl/provider.h>
#include <openssl/params.h>
#include <openssl/opensslv.h>
#include "crypto/cryptlib.h"
#include "crypto/evp.h" /* evp_method_store_flush */
#include "crypto/rand.h"
#include "internal/nelem.h"
#include "internal/thread_once.h"
#include "internal/provider.h"
#include "internal/refcount.h"
#include "internal/bio.h"
#include "internal/core.h"
#include "provider_local.h"
#ifndef FIPS_MODULE
# include <openssl/self_test.h>
#endif






OSSL_LIB_CTX *ossl_provider_libctx(const OSSL_PROVIDER *prov)
{
    return NULL;
}


void ossl_provider_free(OSSL_PROVIDER *prov)
{
}

void *ossl_provider_ctx(const OSSL_PROVIDER *prov)
{
    return NULL;
}


int ossl_provider_up_ref(OSSL_PROVIDER *prov)
{
    return 0;
}

void *OSSL_PROVIDER_get0_provider_ctx(const OSSL_PROVIDER *prov)
{
    return NULL;
}

int ossl_provider_init_as_child(OSSL_LIB_CTX *ctx,
                                const OSSL_CORE_HANDLE *handle,
                                const OSSL_DISPATCH *in)
{
    return 0;
}

int ossl_provider_default_props_update(OSSL_LIB_CTX *libctx, const char *props)
{
    return 1;
}


int ossl_provider_doall_activated(OSSL_LIB_CTX *ctx,
                                  int (*cb)(OSSL_PROVIDER *provider,
                                            void *cbdata),
                                  void *cbdata)
{
    return 0;
}

const OSSL_ALGORITHM *ossl_provider_query_operation(const OSSL_PROVIDER *prov,
                                                    int operation_id,
                                                    int *no_cache)
{
    return NULL;
}

void ossl_provider_unquery_operation(const OSSL_PROVIDER *prov,
                                     int operation_id,
                                     const OSSL_ALGORITHM *algs)
{
}

int ossl_provider_set_operation_bit(OSSL_PROVIDER *provider, size_t bitnum)
{
    return 0;
}

int ossl_provider_test_operation_bit(OSSL_PROVIDER *provider, size_t bitnum,
                                     int *result)
{
    return 0;
}

int ossl_provider_clear_all_operation_bits(OSSL_LIB_CTX *libctx)
{
    return 0;
}

void ossl_provider_add_conf_module(void)
{
}