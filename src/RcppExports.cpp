// This file was generated by Rcpp::compileAttributes
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

// numeric_interpolator
NumericVector numeric_interpolator(List data, DataFrame states);
RcppExport SEXP tweenr_numeric_interpolator(SEXP dataSEXP, SEXP statesSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< List >::type data(dataSEXP);
    Rcpp::traits::input_parameter< DataFrame >::type states(statesSEXP);
    __result = Rcpp::wrap(numeric_interpolator(data, states));
    return __result;
END_RCPP
}
// colour_interpolator
NumericMatrix colour_interpolator(List data, DataFrame states);
RcppExport SEXP tweenr_colour_interpolator(SEXP dataSEXP, SEXP statesSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< List >::type data(dataSEXP);
    Rcpp::traits::input_parameter< DataFrame >::type states(statesSEXP);
    __result = Rcpp::wrap(colour_interpolator(data, states));
    return __result;
END_RCPP
}
// constant_interpolator
CharacterVector constant_interpolator(List data, DataFrame states);
RcppExport SEXP tweenr_constant_interpolator(SEXP dataSEXP, SEXP statesSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< List >::type data(dataSEXP);
    Rcpp::traits::input_parameter< DataFrame >::type states(statesSEXP);
    __result = Rcpp::wrap(constant_interpolator(data, states));
    return __result;
END_RCPP
}
