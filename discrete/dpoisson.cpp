#include "ddist.h"

std::vector<double> poisson_pmf(double lambda, size_t start, size_t end)
{
    std::vector<double> probabilities;
    probabilities.reserve(end - start + 1);

    double log_lambda = std::log(lambda);
    double neg_lamdba = -lambda;
    for(size_t i{start}; i <= end; i++){
        double temp;
        if(lambda == 0){
            temp = (i==0) ? 1.0 : 0.0;
            probabilities.push_back(temp);
            continue;
        }

        temp = std::exp((i * log_lambda) + neg_lamdba - std::lgamma(i+1));
        probabilities.push_back(temp);
    }

    return probabilities;
}

double poisson_pmf(double lambda, size_t k)
{
    if (lambda == 0.0)
        return (k == 0) ? 1.0 : 0.0;

    return std::exp((k * std::log(lambda)) - lambda - std::lgamma(k+1));
}