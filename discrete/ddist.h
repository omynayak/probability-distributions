#ifndef D_DIST
#define D_DIST

#include <vector>
#include <cstddef>
#include <cmath>

namespace dprob {

    // PMF Generators (vector)
    std::vector<double> poisson_pmf(double lambda, size_t start, size_t end);
    std::vector<double> binomial_pmf(size_t n, double p);
    std::vector<double> uniform_pmf(size_t n);

    // PMF for fixed k
    double poisson_pmf(double lambda, size_t k);
    double binomial_pmf(size_t n, size_t k, double p);
    double uniform_pmf(size_t n, size_t k);

    // CDF
    std::vector<double> cdf(const std::vector<double>& pmf);
    double cdf(const std::vector<double>& pmf, size_t k);
}

#endif
