// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <RcppArmadillo.h>
#include <Rcpp.h>

using namespace Rcpp;

#ifdef RCPP_USE_GLOBAL_ROSTREAM
Rcpp::Rostream<true>&  Rcpp::Rcout = Rcpp::Rcpp_cout_get();
Rcpp::Rostream<false>& Rcpp::Rcerr = Rcpp::Rcpp_cerr_get();
#endif

// MCMC
List MCMC(Rcpp::ListOf<Rcpp::NumericVector> const& EC_numeric_multi_map, Rcpp::NumericVector const& Y_unique, Rcpp::NumericVector const& N_peptides_per_protein, Rcpp::NumericVector const& delta_prior, Rcpp::NumericVector const& PSM_multi_map, unsigned int const& N, unsigned int const& M, unsigned int const& K, unsigned int const& burn_in, unsigned int const& thin, double const& lib_size);
RcppExport SEXP _SIMBA_MCMC(SEXP EC_numeric_multi_mapSEXP, SEXP Y_uniqueSEXP, SEXP N_peptides_per_proteinSEXP, SEXP delta_priorSEXP, SEXP PSM_multi_mapSEXP, SEXP NSEXP, SEXP MSEXP, SEXP KSEXP, SEXP burn_inSEXP, SEXP thinSEXP, SEXP lib_sizeSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::ListOf<Rcpp::NumericVector> const& >::type EC_numeric_multi_map(EC_numeric_multi_mapSEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericVector const& >::type Y_unique(Y_uniqueSEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericVector const& >::type N_peptides_per_protein(N_peptides_per_proteinSEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericVector const& >::type delta_prior(delta_priorSEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericVector const& >::type PSM_multi_map(PSM_multi_mapSEXP);
    Rcpp::traits::input_parameter< unsigned int const& >::type N(NSEXP);
    Rcpp::traits::input_parameter< unsigned int const& >::type M(MSEXP);
    Rcpp::traits::input_parameter< unsigned int const& >::type K(KSEXP);
    Rcpp::traits::input_parameter< unsigned int const& >::type burn_in(burn_inSEXP);
    Rcpp::traits::input_parameter< unsigned int const& >::type thin(thinSEXP);
    Rcpp::traits::input_parameter< double const& >::type lib_size(lib_sizeSEXP);
    rcpp_result_gen = Rcpp::wrap(MCMC(EC_numeric_multi_map, Y_unique, N_peptides_per_protein, delta_prior, PSM_multi_map, N, M, K, burn_in, thin, lib_size));
    return rcpp_result_gen;
END_RCPP
}
// MCMC_PEP
List MCMC_PEP(Rcpp::ListOf<Rcpp::NumericVector> const& EC_numeric_multi_map, Rcpp::NumericVector const& PSM_multi_map, Rcpp::NumericVector const& PEP, unsigned int const& M, Rcpp::IntegerVector const& EC_numeric_unique, Rcpp::NumericVector const& PSM_unique, Rcpp::NumericVector const& PEP_unique, unsigned int const& M_unique, Rcpp::NumericVector const& N_peptides_per_protein, Rcpp::NumericVector const& delta_prior, unsigned int const& N, unsigned int const& K, unsigned int const& burn_in, unsigned int const& thin);
RcppExport SEXP _SIMBA_MCMC_PEP(SEXP EC_numeric_multi_mapSEXP, SEXP PSM_multi_mapSEXP, SEXP PEPSEXP, SEXP MSEXP, SEXP EC_numeric_uniqueSEXP, SEXP PSM_uniqueSEXP, SEXP PEP_uniqueSEXP, SEXP M_uniqueSEXP, SEXP N_peptides_per_proteinSEXP, SEXP delta_priorSEXP, SEXP NSEXP, SEXP KSEXP, SEXP burn_inSEXP, SEXP thinSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::ListOf<Rcpp::NumericVector> const& >::type EC_numeric_multi_map(EC_numeric_multi_mapSEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericVector const& >::type PSM_multi_map(PSM_multi_mapSEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericVector const& >::type PEP(PEPSEXP);
    Rcpp::traits::input_parameter< unsigned int const& >::type M(MSEXP);
    Rcpp::traits::input_parameter< Rcpp::IntegerVector const& >::type EC_numeric_unique(EC_numeric_uniqueSEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericVector const& >::type PSM_unique(PSM_uniqueSEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericVector const& >::type PEP_unique(PEP_uniqueSEXP);
    Rcpp::traits::input_parameter< unsigned int const& >::type M_unique(M_uniqueSEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericVector const& >::type N_peptides_per_protein(N_peptides_per_proteinSEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericVector const& >::type delta_prior(delta_priorSEXP);
    Rcpp::traits::input_parameter< unsigned int const& >::type N(NSEXP);
    Rcpp::traits::input_parameter< unsigned int const& >::type K(KSEXP);
    Rcpp::traits::input_parameter< unsigned int const& >::type burn_in(burn_inSEXP);
    Rcpp::traits::input_parameter< unsigned int const& >::type thin(thinSEXP);
    rcpp_result_gen = Rcpp::wrap(MCMC_PEP(EC_numeric_multi_map, PSM_multi_map, PEP, M, EC_numeric_unique, PSM_unique, PEP_unique, M_unique, N_peptides_per_protein, delta_prior, N, K, burn_in, thin));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_SIMBA_MCMC", (DL_FUNC) &_SIMBA_MCMC, 11},
    {"_SIMBA_MCMC_PEP", (DL_FUNC) &_SIMBA_MCMC_PEP, 14},
    {NULL, NULL, 0}
};

RcppExport void R_init_SIMBA(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
