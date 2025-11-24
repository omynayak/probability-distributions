#include "cdist.h"

namespace cprob
{
    double exponential_cdf(double lambda, double start, double end)
    {
        return ((1 - std::exp(-lambda*end)) - (1 - std::exp(-lambda*start)));
    }
} // namespace cprob
