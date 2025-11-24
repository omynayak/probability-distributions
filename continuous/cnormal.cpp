#include "cdist.h"

namespace cprob{
double normal_cdf(double mu, double sigma, double start, double end, size_t n = 1000)
{
    double val = 0;
    double h = (end - start) / n;
    double frac = 1 / (sigma*std::sqrt(2*M_PI));
    for(int i{1}; i <= n; i++){
        double x = start + i*h;
        double func_val = std::exp(-std::pow((x - mu),2) / (2*std::pow(sigma, 2)));
        if(i==0 || i == n) val += func_val;
        else val += (2 * (func_val));
    }
    val *= 0.5 * h * frac;

    return val;
}
}