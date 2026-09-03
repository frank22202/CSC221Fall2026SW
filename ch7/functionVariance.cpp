#include "stat_lib.h"
/*--------------------------------------------------------*/
/* This function returns the variance */
/* of an array with n elements. */
double variance(const double x[], int n) // Function header.
{
  // Declare objects.
  double sum(0), mu;
  // Determine variance.
  mu = mean(x,n);
  for (int k=0; k<n; ++k)
  {
    sum += (x[k] - mu)*(x[k] - mu);
  }
  // Return variance.
  return sum/(n-1);
}
/*--------------------------------------------------------*/
/* This function returns the standard deviation */
/* of an array with n elements. */
// Declare function prototypes.
double std_dev(const double x[], int n) // Function header.
{
  // Return standard deviation.
  return sqrt(variance(x,n));
}
/*--------------------------------------------------------*/
