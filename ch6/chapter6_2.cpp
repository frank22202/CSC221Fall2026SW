/*----------------------------------------------------*/
/* Program chapter6_2 */
/* */
/* This program prints 21 values of the sinc */
/* function in the interval [a,b] using */
/* computations within the main function. */
#include<iostream> //Required for cin, cout.
#include<cmath> //Required for sin().
using namespace std;
int main()
{
  // Declare objects.
  double a, b, x_incr, new_x, sinc_x;
  // Get interval endpoints from the user.
  cout << "Enter end points a and b (a<b): \n";
  cin >> a >> b;
  x_incr = (b - a)/20;
  // Set Formats
  cout.setf(ios::fixed);
  cout.precision(6);
  // Compute and print table of sinc(x) values.
  cout << "x and sinc(x) \n";
  for (int k=0; k<=20; ++k)
  {
    new_x = a + k*x_incr;
    if (fabs(new_x) < 0.0001)
    {
      sinc_x = 1.0;
    }
    else
    {
      sinc_x = sin(new_x)/new_x;
    }
    cout << new_x << " " << sinc_x << endl;
  }
  // Exit program.
  return 0;
}
/*----------------------------------------------------*/
