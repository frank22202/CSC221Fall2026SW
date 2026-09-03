/*-----------------------------------------------------------------*/
/* Program chapter6_12 */
/*                     */
/* This program estimates the area under a given curve */
/* using trapezoids with equal bases. */
#include<iostream> //Required for cin, cout
#include<cmath> //Required for exp()
using namespace std;
// Function prototypes.
double integrate(double a, double b, int n);
double f(double x);
int main()
{
  // Declare objects
  int num_trapezoids;
  double a, b, area;
  // Get input from user.
  cout << "Enter the interval endpoints, a and b\n";
  cin >> a >> b;
  cout << "Enter the number of trapezoids\n";
  cin >> num_trapezoids;
  // Estimate area under the curve of 4e^-x
  area = integrate(a, b, num_trapezoids);
  // Print result.
  cout << "Using " << num_trapezoids
      << " trapezoids, the estimated area is "
      << area << endl;
  return 0;
}
/*-----------------------------------------------------------------*/
/*-----------------------------------------------------------------*/
double integrate(double a, double b, int n)
{
  // Declare objects.
  double sum(0), x, base, area;
  base = (b-a)/n;
  for(int k=2; k<=n; k++)
  {
    x = a + base*(k-1);
    sum = sum + f(x);
  }
  area = 0.5*base*(f(a) + 2*sum + f(b));
  return area;
}
double f(double x)
{
  return(4*exp(-x));
}
/*-----------------------------------------------------------------*/
