/*-----------------------------------------------------------------*/
/* Program chapter9_9                                              */
/* This program illustrates the use of operators new and delete.   */
#include<iostream> //Required for cout
using namespace std;
int main()
{
  // Declare objects.
  int *ptr, npts(10);
  double *darr_ptr;
  // Dynamically allocate one integer object.
  ptr = new int(-1);
  // Dynamically allocate array of type double.
  darr_ptr = new double[npts];
  // Assign what is pointed to by ptr to all elements of dynamic array.
  for(int i=0; i<npts; ++i)
  {
    darr_ptr[i] = *ptr;
  }
  // Print all values in dynamic array.
  for(int i=0; i<=npts-1; ++i)
  {
    cout << darr_ptr[i] << ' ';
  }
  cout << endl;
  // Return memory to free-store.
  delete ptr;
  delete [] darr_ptr;
  return 0;
}
/*-----------------------------------------------------------------*/
