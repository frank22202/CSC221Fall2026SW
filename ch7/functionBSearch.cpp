/*-------------------------------------------------------------*/
/* This function returns the position of value in array list. */
/* Returns a value of -1 if value is not found in list. */
/* Function assumes: *
/* the array list has n elements in ascending order. */
int bSearch(const int list[], int n, int value)
{
  int top(0), bottom(n-1), mid;
  while(top<=bottom)
  {
    // Determine mid point of list.
    mid = (top + bottom)/2;
    // Value is found.
    if(list[mid] == value)
      return mid;
    // Look for value in top half of list.
    else if(list[mid] > value)
      bottom=mid-1;
      // Look for value in bottom half of list.
    else
      top=mid+1;
  }
  // Value was not found in the list.
  return -1;
}
