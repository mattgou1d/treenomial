#include <Rcpp.h>

using namespace Rcpp;

// [[Rcpp::export]]
double sumLogDiff(const NumericMatrix coeffMatA, const NumericMatrix coeffMatB) {
  return(sum((log(1+abs(coeffMatA - coeffMatB)))));
}

// [[Rcpp::export]]
double sumLogDiffComplex(const ComplexVector coeffMatA, const ComplexVector coeffMatB) {
  return(sum(log(1+Mod(coeffMatA - coeffMatB))));
}

// [[Rcpp::export]]
double binaryDistance(const NumericVector coeffMatA, const NumericVector coeffMatB) {
  return(sum(abs(coeffMatA - coeffMatB)));
}
