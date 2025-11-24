#ifndef C_DIST
#define C_DIST

#include <vector>
#include <cmath>
#include <cstddef>

namespace cprob
{
    // CDF Evaluators:
    double normal_cdf(double mu, double sigma, double start, double end, size_t n);
    double exponential_cdf(double lambda, double start, double end);
} // namespace cprob

#endif
