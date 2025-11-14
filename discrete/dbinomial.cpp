#include "ddist.h"

std::vector<double> binomial_pmf(size_t n, double p)
{
    std::vector<double> probabilities;
    probabilities.reserve(n);
    double q = 1 - p;
    
    for(size_t r{0}; r <= n; r++){
        double log_comb = 
        std::lgamma(n + 1) -
        ( std::lgamma(n - r + 1) +
        std::lgamma(r + 1));

        double log_prob = 
        r * std::log(p) +
        (n - r) * std::log(q);

        double probability = std::exp(log_comb + log_prob);
        probabilities.push_back(probability);
    }

    return probabilities;
}

double binomial_pmf(size_t n, size_t r, double p)
{
    double log_comb = 
    std::lgamma(n + 1) -
    ( std::lgamma(n - r + 1) +
    std::lgamma(r + 1));   

    double log_prob = 
        r * std::log(p) +
        (n - r) * std::log(1-p);

    return std::exp(log_comb + log_prob);
}