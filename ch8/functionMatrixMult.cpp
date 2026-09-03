/*----------------------------------------------------*/
/* This function performs a matrix multiplication */
/* of two NxN matrices using sums of products. */
/* N is a symbolic constant that must be defined */
/* within the scope of the function. */
void matrixMult(int a[][N], int b[][N], int c[][N])
{
  // Compute sums of products.
  for (int i=0; i<N; i++)
  {
    for (int j=0; j<N; ++j)
    {
      c[i][j] = 0;
      for (int k=0; k<N; ++k)
      {
        c[i][j] += a[i][k]*b[k][j];
      }
    }
  }
  // Void return.
  return;
}
/*----------------------------------------------------*/
