/*----------------------------------------------------------*/
/* Program chapter6_11                                      */
/*                                                          */
/* This program finds the real roots of a cubic polynomial */
/* using the Newton-Raphson method. */
#include<iostream> //Required for cin, cout
#include<cmath> //Required for pow()
using namespace std;
int main()
{
  // Declare objects.
  int iterations(0);
  double a0, a1, a2, a3, x, p, dp, tol;
  // Get user input.
  cout << "Enter coefficients a0, a1, a2, a3\n";
  cin >> a0 >> a1 >> a2 >> a3;
  cout << "Enter initial guess for root\n";
  cin >> x;
  // Evaluate p at initial guess.
  p = a0*pow(x,3) + a1*x*x + a2*x + a3;
  // Determine tolerance.
  tol = fabs(p);
  while(tol > 0.001 && iterations < 100)
  {
    // Calculate the derivative.
    dp = 3*a0*x*x + 2*a1*x + a2;
    // Calculate next estimated root.
    x = x - p/dp;
    // Evaluate p at estimated root.
    p = a0*x*x*x + a1*x*x + a2*x + a3;
    tol = fabs(p);
    iterations++;
  }
  if(tol < 0.001)
  {
    cout << "Root is " << x << endl
        << iterations << " iterations\n";
  }
  else
    cout << "Did not converge after 100 iterations\n";
  return 0;
}

