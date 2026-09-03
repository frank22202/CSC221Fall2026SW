/*-----------------------------------------------------*/
/* This function returns the sum of the values in */
/* an array with NROWS rows and NCOLS columns. */
// PreCondition: Array X has NROWS and NCOLS.
// PostCondition: Sum of integer Values is returned.
int sum(int x[][NCOLS])
{
  // Declare and initialize local objects.
  int total(0);
  // Compute a sum of the array values.
  for (int i=0; i<NROWS; ++i)
  {
    for (int j=0; j<NCOLS; ++j)
    {
      total += x[i][j];
    }
  }
  // Return sum of array values.
  return total;
}
/*----------------------------------------------------*/
