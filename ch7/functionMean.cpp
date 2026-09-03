/*----------------------------------------------------*/
/* This function returns the average or */
/* mean value of an array with n elements. */
double mean(const double x[], int n)
{
  // Declare and initialize objects.
  double sum(0);
  // Determine mean value.
  for (int k=0; k<n; ++k)
  {
    sum += x[k];
  }
  // Return mean value.
  return sum/n;
}
/*----------------------------------------------------*/
