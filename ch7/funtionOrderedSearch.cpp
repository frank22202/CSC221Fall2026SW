/*-----------------------------------------------------------*/
/* This function returns the position of value in array A. */
/* Returns -1 if value is not found in A. */
/* Function assumes: */
/* the array A has n elements in ascending order. */
int search(const int A[], int n, int value)
{
  int index(0);
  while (index < n && A[index] < value)
  {
    ++index;
  }
  if(index < n && A[index] == value)
    return(index);
  else
    return(-1);
}
/*-----------------------------------------------------------*/
