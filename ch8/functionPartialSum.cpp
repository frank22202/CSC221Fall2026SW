/*----------------------------------------------------*/
/* This function returns the sum of the values */
/* in a subarray of an array with a declared */
/* NCOLS column size of NCOLS. */
int partialSum(int x[][NCOLS],int m, int n)
{
  // Declare and initialize local objects.
  int total(0);
  // Compute a sum of subarray values.
  for (int i=0; i<m; ++i)
  {
    for (int j=0; j<n; ++j)
    {
      total += x[i][j];
    }
  }
  // Return sum of subarray values.
  return total;
}
/*----------------------------------------------------*/
