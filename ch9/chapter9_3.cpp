/*-----------------------------------------------------------------*/
/* Program chapter9_3                                              */
/*                                                                 */
/* This program demonstrates the relationship */
/* between objects, addresses, and pointers. */
#include <iostream> //Required for cout
using namespace std;
int main()
{
  // Declare and initialize objects.
  int a{1}, b{2}, *ptr{&a};
  // Print address and contents of all objects.
  cout << "a = " << a << "; address of a = " << &a << endl;
  cout << "b = " << b << "; address of b = " << &b << endl;
  cout << "ptr = " << ptr << "; address of ptr = " << &ptr << endl;
  cout << "ptr points to the value " << *ptr << endl;
  return 0;
}
/*-----------------------------------------------------------------*/
