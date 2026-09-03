/*----------------------------------------------------*/
/* Program chapter6_10 */
/* */
/* This program estimates the real roots of a */
/* polynomial function using incremental search. */
#include<iostream> //Required for cin, cout
#include<cmath> //Required for cell()
using namespace std;
// Function Prototypes
void check_roots(double left, double right, double a0,
double a1, double a2, double a3);
double poly(double x, double a0, double a1,
double a2, double a3);
int main()
{
// Declare objects and function prototypes.
int n;
double a0, a1, a2, a3, a, b, step, left, right;
// Get user input.
cout << "Enter coefficients a0, a1, a2, a3: \n";
cin >> a0 >> a1 >> a2 >> a3;
cout << "Enter interval limits a, b (a<b): \n";
cin >> a >> b;
cout << "Enter step size: \n";
cin >> step;
//Check subintervals for roots.
n = ceil((b - a)/step);
for (int k=0; k<=n-1; k++)
{
left = a + k*step;
if (k == n-1)
{
right = b;
}
else
{
right = left + step;
}
check_roots(left,right,a0,a1,a2,a3);
}
check_roots(b,b,a0,a1,a2,a3);
// Exit program.
return 0;
}
/*----------------------------------------------------*/
/* This function checks a subinterval for a root. */
void check_roots(double left, double right, double a0,
double a1, double a2, double a3)
{
  // Declare objects and function prototypes.
  double f_left, f_right;
  // Evaluate subinterval endpoints and
  // test for roots.
  f_left = poly(left,a0,a1,a2,a3);
  f_right = poly(right,a0,a1,a2,a3);
  if (fabs(f_left) < 0.1e-04)
  {
    cout << "Root detected at " << left << endl;
  }
  else
  {
    if (fabs(f_right) < 0.1e-04)
      ;
    else
    {
      if (f_left*f_right < 0)
      {
        cout << "Root detected at " << (left+right)/2 << endl;
      }
    }
  }
  // Exit function.
  return;
}
/*----------------------------------------------------*/
/* This function evaluates a cubic polynomial. */
double poly(double x, double a0, double a1, double a2,
double a3)
{
  return a0*x*x*x + a1*x*x + a2*x + a3;
}
/*----------------------------------------------------*/
