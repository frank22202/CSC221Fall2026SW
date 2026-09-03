/*----------------------------------------------------------------*/
/* Program chapter10_5 */
/*                                                                */
/* This program calls a recursive function to */
/* compute a factorial. */
#include <iostream> //Required for cout
using namespace std;
// Function prototypes.
long factorialR(int n);
int main()
{
  // Declare objects
  int n;
  // Get user input.
  cout << "Enter positive integer: \n";
  cin >> n;
  // Compute and print factorials.
  cout << "Recursive: " << n << "! = " << factorialR(n) << endl;
  // Exit program.
  return 0;
}
/*----------------------------------------------------------------*/
/* This function computes a factorial recursively. */
long factorialR(int n)
{
  /* Recursive reference until n is equal to 0. */
  if (n == 0) //Solution is known
  {
    return 1; //Return unique solution.
  }
  return n*factorialR(n - 1); //Reduce the problem
}
/*----------------------------------------------------------------*/
