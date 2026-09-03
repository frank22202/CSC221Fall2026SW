/*----------------------------------------------------*/
/* Program chapter6_3 */
/*                                                   */
/* This program prints 21 values of the sinc */
/* function in the interval [a,b] using a */
/* programmer-defined function. */
/*                                                   */
#include<iostream> //Required for cin, cout
#include<cmath> //Required for sin().
using namespace std;
//Function Prototype
//Programmer defined function.
double sinc(double x);
int main()
{
  // Declare objects
  double a, b, x_incr, new_x;
  // Get interval endpoints from the user.
  cout << "Enter endpoints a and b (a<b): \n";
  cin >> a >> b;
  x_incr = (b- a)/20;
  // Set Formats
  cout.setf(ios::fixed);
  cout.precision(6);
  // Compute and print table of sinc(x) values.
  cout << "x and sinc(x) \n";
  for (int k=0; k<=20; k++)
  {
    new_x = a + k*x_incr;
    cout << new_x << " " << sinc(new_x) << endl;
  }
  // Exit program.
  return 0;
}
/*----------------------------------------------------*/
/* This function evaluates the sinc function. */
double sinc(double x)
{
  if (fabs(x) < 0.0001)
  {
    return 1.0;
  }
  else
  {
    return sin(x)/x;
  }
}
/*----------------------------------------------------*/
