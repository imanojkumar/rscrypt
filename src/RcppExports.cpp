// This file was generated by Rcpp::compileAttributes
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

// hashPassword
CharacterVector hashPassword(const std::string& passwd, double maxmem = 0.1, double maxtime = 1.0);
RcppExport SEXP scrypt_hashPassword(SEXP passwdSEXP, SEXP maxmemSEXP, SEXP maxtimeSEXP) {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< const std::string& >::type passwd(passwdSEXP );
        Rcpp::traits::input_parameter< double >::type maxmem(maxmemSEXP );
        Rcpp::traits::input_parameter< double >::type maxtime(maxtimeSEXP );
        CharacterVector __result = hashPassword(passwd, maxmem, maxtime);
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}
// verifyPassword
bool verifyPassword(const std::string& hash, const std::string& passwd);
RcppExport SEXP scrypt_verifyPassword(SEXP hashSEXP, SEXP passwdSEXP) {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< const std::string& >::type hash(hashSEXP );
        Rcpp::traits::input_parameter< const std::string& >::type passwd(passwdSEXP );
        bool __result = verifyPassword(hash, passwd);
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}
// scrypt
RawVector scrypt(RawVector passwd, RawVector salt, uint32_t n, uint32_t r, uint32_t p, uint32_t length = 64);
RcppExport SEXP scrypt_scrypt(SEXP passwdSEXP, SEXP saltSEXP, SEXP nSEXP, SEXP rSEXP, SEXP pSEXP, SEXP lengthSEXP) {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< RawVector >::type passwd(passwdSEXP );
        Rcpp::traits::input_parameter< RawVector >::type salt(saltSEXP );
        Rcpp::traits::input_parameter< uint32_t >::type n(nSEXP );
        Rcpp::traits::input_parameter< uint32_t >::type r(rSEXP );
        Rcpp::traits::input_parameter< uint32_t >::type p(pSEXP );
        Rcpp::traits::input_parameter< uint32_t >::type length(lengthSEXP );
        RawVector __result = scrypt(passwd, salt, n, r, p, length);
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}
