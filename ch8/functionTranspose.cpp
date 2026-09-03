/*----------------------------------------------------*/
/* This function generates a matrix transpose. */
/* NROWS and NCOLS are symbolic constants */
/* that must be defined in the calling program. */
void transpose(int b[][NCOLS], int bt[][NROWS])
{
  // Declare objects.
  // Transfer values to the transpose matrix.
  for (int i=0; i<=NROWS-1; ++i)
  {
    for (int j=0; j<=NCOLS-1; ++j)
    {
      bt[j][i] = b[i][j];
    }
  }
  // Void return.
  return;
}
/*----------------------------------------------------*/
