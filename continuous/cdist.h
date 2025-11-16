#ifndef C_DIST
#define C_DIST

#include <vector>
#include <cmath>
#include <cstddef>

namespace cprob
{
    // PDF Evaluators
    double normal_pdf(double x, double mean, double sigma);
    double exponential_pdf(double x, double lambda);
    double uniform_pdf(double x, double a, double b);
    double gamma_pdf(double x, double shape, double scale);
    double beta_pdf(double x, double alpha, double beta);
    double laplace_pdf(double x, double mu, double b);

    // PDF Samplers
    std::vector<double> normal_pdf_range(double mean, double sigma,
                                         double start, double end, size_t points = 100);
    std::vector<double> exponential_pdf_range(double lambda,
                                              double start, double end, size_t points = 100);
    std::vector<double> uniform_pdf_range(double a, double b,
                                          double start, double end, size_t points = 100);
    std::vector<double> gamma_pdf_range(double shape, double scale,
                                        double start, double end, size_t points  = 100);
    std::vector<double> beta_pdf_range(double alpha, double beta,
                                       double start, double end, size_t points = 100);
    std::vector<double> laplace_pdf_range(double mu, double b,
                                          double start, double end, size_t points = 100);

} // namespace cprob

#endif
