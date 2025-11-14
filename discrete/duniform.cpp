#include "ddist.h"

std::vector<double> uniform_pmf(size_t n)
{
    std::vector<double> probabilities(n);
    double val = 1.0 / (n);

    std::fill(probabilities.begin(), probabilities.end(), val);
    return probabilities;
}

double uniform_pmf(size_t n, size_t k)
{
    if (k == 0 || k > n) return 0.0;
    return 1.0 / n;
}