/*----------------------------------------------------*/
/* Program chapter6_7                                 */
/*                                                    */
/* This program estimates the reliability */
/* of a series and a parallel configuration */
/* using a computer simulation. */
#include <iostream> //Required for cin, cout.
#include <cstdlib> //Required for srand(), rand().
#include <cmath> //Required for pow().
using namespace std;
// Function prototypes
double rand_float(double a, double b);
int main()
{
  // Declare objects.
  unsigned int seed;
  int n;
  double component_reliability, a_series, a_parallel,
  series_success(0), parallel_success(0),
  num1, num2, num3;
  // Get information for the simulation.
  cout << "Enter individual component reliability: \n";
  cin >> component_reliability;
  cout << "Enter number of trials: \n";
  cin >> n;
  cout << "Enter unsigned integer seed: \n";
  cin >> seed;
  srand(seed);
  cout << endl;
  // Compute analytical reliabilities.
  a_series = pow(component_reliability,3);
  a_parallel = 3*component_reliability
              - 3*pow(component_reliability,2)
              + pow(component_reliability,3);
  // Determine simulation reliability estimates.
  for (int k=1; k<=n; k++)
  {
    num1 = rand_float(0,1);
    num2 = rand_float(0,1);
    num3 = rand_float(0,1);
    if (((num1<=component_reliability) &&
        (num2<=component_reliability)) &&
        (num3<=component_reliability))
    {
        series_success++;
    }
    if (((num1<=component_reliability) ||
        (num2<=component_reliability)) ||
        (num3<=component_reliability))
    {
        parallel_success++;
    }
  }
  // Print results.
  cout << "Analytical Reliability \n";
  cout << "Series: " << a_series << " "
      << "Parallel: " << a_parallel << endl;
  cout << "Simulation Reliability " << n << " trials \n";
  cout << "Series: " << (double)series_success/n << " Parallel: "
      << (double)parallel_success/n << endl;
  // Exit program.
  return 0;
}
/*----------------------------------------------------*/
/* This function generates a random */
/* double value between a and b. */
double rand_float(double a, double b)
{
  return ((double)rand()/RAND_MAX)*(b-a) + a;
}
/*----------------------------------------------------*/
