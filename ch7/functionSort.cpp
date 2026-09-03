/*----------------------------------------------------*/
/* This function sorts an array with n elements */
/* into ascending order. */
void sort(double x[], int n)
{
  // Declare objects.
  int m;
  double hold;
  // Implement selection sort algorithm.
  for (int k=0; k<=n-2; ++k)
  {
    // Find position of smallest value in array
    // beginning at k
    m = k;
    for (int j=k+1; j<=n-1; ++j)
    {
      if (x[j] < x[m])
      m = j;
    }
    // Exchange smallest value with value at k
    hold = x[m];
    x[m] = x[k];
    x[k] = hold;
  }
  // Void return.
  return;
}
/*----------------------------------------------------*/
