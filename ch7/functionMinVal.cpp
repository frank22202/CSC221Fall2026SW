/*----------------------------------------------------*/
/* This function returns the minimum */
/* value in an array x with n elements. */
double minval(const double x[], int n)
{
  // Declare objects.
  double min_x;
  // Determine minimum value in the array.
  min_x = x[0];
  for (int k=1; k<=n-1; ++k)
  {
    if (x[k] < min_x)
    min_x = x[k];
  }
  // Return minimum value.
  return min_x;
}
/*----------------------------------------------------*/
