/*----------------------------------------------------*/
/* This function returns the median */
/* value in an array x with n elements */
/* The values in x are assumed to be ordered. */
#include<cmath>

double median(const double x[], int n)
{
  // Declare objects.
  double median_x;
  int k;
  // Determine median value.
  k = std::floor(n/2);
  if (n%2 != 0)
    median_x = x[k];
  else
    median_x = (x[k-1] + x[k])/2;
  // Return median value.
  return median_x;
}
/*----------------------------------------------------*/
