/*------------------------------------------------------*/
/* Program chapter4_8                                   */
/*                                                      */
/* This program prints a table of height and            */
/* velocity values for a weather balloon.               */
#include <iostream>//Required for cin, cout
#include <iomanip>//Required for setw()
#include <cmath>//Required for pow()
using namespace std;
int main()
{
  // Declare and initialize objects.
  double initial, increment, final, time, height,
  velocity, max_time(0), max_height(0);
  int loops;

  // Get user input.
  cout << "Enter initial value for table (in hours) \n";
  cin >> initial;
  cout << "Enter increment between lines (in hours) \n";
  cin >> increment;
  cout << "Enter final value for table (in hours) \n";
  cin >> final;

  // Print report heading.
  cout << "\n\nWeather Balloon Information \n";
  cout << "Time Height Velocity \n";
  cout << "(hrs) (meters) (meters/s) \n";

  // Set formats.
  cout.setf(ios::fixed);
  cout.precision(2);

  // Compute and print report information.
  // Determine number of iterations required.
  // Use integer index to avoid rounding error.
  loops = (int)( (final - initial)/increment );
  for (int count=0; count<=loops; ++count)
  {
    time = initial + count*increment;
    height = -0.12*pow(time,4) + 12*pow(time,3)
             - 380*time*time + 4100*time + 220;
    velocity = -0.48*pow(time,3) + 36*time*time
               - 760*time + 4100;
    cout << setw(6) << time << setw(10) << height
         << setw(10) << velocity/3600 << endl;
    if (height > max_height)
    {
      max_height = height;
      max_time = time;
    }
  }
  // Print maximum height and corresponding time.
  cout << "\nMaximum balloon height was " << setw(8)
       << max_height << " meters \n";
  cout << "and it occurred at " << setw(6) << max_time
       << " hours \n";
  /* Exit program. */
  return 0;
}
/*------------------------------------------------------*/
