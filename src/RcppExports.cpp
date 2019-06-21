// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <RcppArmadillo.h>
#include <Rcpp.h>

using namespace Rcpp;

// wedgeFill
void wedgeFill(NumericMatrix baseMat, NumericMatrix shiftsMat, NumericMatrix resMat);
RcppExport SEXP _treenomial_wedgeFill(SEXP baseMatSEXP, SEXP shiftsMatSEXP, SEXP resMatSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericMatrix >::type baseMat(baseMatSEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type shiftsMat(shiftsMatSEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type resMat(resMatSEXP);
    wedgeFill(baseMat, shiftsMat, resMat);
    return R_NilValue;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_treenomial_wedgeFill", (DL_FUNC) &_treenomial_wedgeFill, 3},
    {NULL, NULL, 0}
};

RcppExport void R_init_treenomial(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}