/*****************************************************************/
/* Incorrect function that attempts to swap two integer value */
/* using pass-by-value parameters. */
void swapIntegers(int a, int b)
{
  //Define temporary variable;
  int hold=a;
  //Swap the values in a and b
  a = b;
  b = hold;
  //exit void function
  return;
}
/****************************************************************/
/* Driver program to test swapIntegers(int a, int b) */
#include<iostream>//Required for cin, cout.
using namespace std;
//Function prototype
void swapIntegers(int, int);
int main()
{
  //Declare variables.
  int a, b;
  //Get values for a and b.
  cout << "enter two integer values: ";
  cin >> a >> b;
  //Print values of a and b before the swap
  cout << "Before swap:\n a is " << a << " b is " << b << endl;
  //Call swap function and print values
  swapIntegers(a, b);
  cout << "After call to swapIntegers\n a is " << a << " b is "
      << b << endl;
  //Exit main
  return 0;
}
