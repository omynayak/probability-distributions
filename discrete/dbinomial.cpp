#include "ddist.h"

std::vector<double> binomial_pmf(size_t n, double p)
{
    std::vector<double> probabilities;
    probabilities.reserve(n+1);
    if (p == 0.0) {
        probabilities.assign(n + 1, 0.0);
        probabilities[0] = 1.0;
        return probabilities;
    }

    if (p == 1.0) {
        probabilities.assign(n + 1, 0.0);
        probabilities[n] = 1.0;
        return probabilities;
    }

    double q = 1 - p;
    double logq = std::log(q);
    double logp = std::log(p);
    double log_n_fact = std::lgamma(n+1);
    for(size_t r{0}; r <= n; r++){
        double log_comb = 
        log_n_fact -
        ( std::lgamma(n - r + 1) +
        std::lgamma(r + 1));

        double log_prob = 
        r * logp +
        (n - r) * logq;

        double probability = std::exp(log_comb + log_prob);
        probabilities.push_back(probability);
    }

    return probabilities;
}

double binomial_pmf(size_t n, size_t r, double p)
{
    if(p == 0){
        return (r == 0) ? 1.0 : 0.0;
    }
    double q = 1 - p;
    double logq = std::log(q);
    double logp = std::log(p);
    double log_n_fact = std::lgamma(n + 1);

    double log_comb = 
    log_n_fact -
    ( std::lgamma(n - r + 1) +
    std::lgamma(r + 1));   

    double log_prob = 
        r * logp +
        (n - r) * logq;

    return std::exp(log_comb + log_prob);
}