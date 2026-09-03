/*-------------------------------------------------*/
/* Program chapter9_10                             */
/*                                                 */
/* This program reads a seismic data file and then */
/* determines the times of possible seismic events.*/
/* Dynamic memory allocation is used.              */
#include <iostream>//Required for ifstream
#include <fstream>//Required for ifstream
#include <string>//Required for string
#include <cmath>//Required for pow()
using namespace std;
// Set threshold.
const double THRESHOLD = 1.5;
// Function prototypes.
double power_w(double arr[], int length, int n);
int main()
{
  // Declare objects.
  int k, npts, short_window, long_window;
  double time_incr, *sensor, short_power, long_power,
         ratio;
  string filename;
  ifstream fin;
  // Prompt user for file name and open file for input.
  cout << "Enter name of input file\n";
  cin >> filename;
  fin.open(filename);
  if(fin.fail())
  {
    cerr << "error opening input file" << endl;
  }
  else
  {
    // Read data header and allocate memory.
    fin >> npts >> time_incr;
    sensor = new double[npts];
    // Program continues if no exception is thrown.
    cout << "Memory allocated." << endl;
    // Read data into an array.
    for (k=0; k<npts; ++k)
      fin >> sensor[k];
    // Read window sizes from the keyboard.
    cout << "Enter number of points for short-window: \n";
    cin >> short_window;
    cout << "Enter number of points for long-window: \n";
    cin >> long_window;
  // Compute power ratios and search for events.
    for (k=long_window-1; k<npts; ++k)
    {
      short_power = power_w(sensor, k, short_window);
      long_power = power_w(sensor, k, long_window);
      ratio = short_power/long_power;
      if (ratio > THRESHOLD)
        cout << "Possible event at " << time_incr*k
            << " seconds \n";
    }
    // Return memory to free-store, close file, and exit program.
    delete [] sensor;
    fin.close();
  }
  return 0;
}
/*----------------------------------------------------*/
/*----------------------------------------------------*/
/* This function computes the average power in a */
/* specified window of a double array. */
double power_w(double arr[], int length, int n)
{
  // Declare and initialize objects.
  double xsquare(0);
  // Compute sum of values squared in the array x.
  for (int k=0; k<n; ++k)
  {
    xsquare += pow(arr[length-k],2);
  }
  /* Return the average squared value. */
  return xsquare/n;
}
/*----------------------------------------------------*/
