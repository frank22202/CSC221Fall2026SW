/*----------------------------------------------------*/
/* Function returns the minimum value in an */
/* array of type Dtype and size n. */
template <typename Dtype>
Dtype minVal(const Dtype x[], int n)
{
  // Declare objects.
  Dtype minX;
  // Determine minimum value in the array.
  minX = x[0];
  for (int k=1; k<n; ++k)
  {
    if (x[k] < minX)
    minX = x[k];
  }
  // Return minimum value.
  return minX;
}
/*----------------------------------------------------*/
