/*-----------------------------------------------------------------*/
/* Program chapter9_2                                              */
/*                                                                 */
/* This program demonstrates the relationship                      */
/* between objects and addresses.                                  */
#include<iostream>  //Required for cout
using namespace std;
int main()
{
  // Declare and initialize objects.
  int a, b;
  // Print the contents and addresses of a and b.
  cout << "a= " << a << "; address of a = " << &a << endl;
  cout << "b= " << b << "; address of b = " << &b << endl;
  return 0;
}
/*-----------------------------------------------------------------*/

