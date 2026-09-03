/*----------------------------------------------------*/
/* Program chapter5_3                                 */
/*                                                    */
/* This program generates a summary report from       */
/* a data file that has a trailer record with         */
/* negative values.                                   */
#include <iostream> //Required for cin, cout, cerr
#include <fstream> //Required for ifstream, ofstream
#include <string> //Required for string.
using namespace std;
int main()
{
  // Declare and initialize objects.
  int num_data_pts(0), k;
  double time, motion, sum(0), max, min;
  string filename;
  ifstream sensor2;
  ofstream report;
  // Prompt user for name of input file.
  cout << "Enter the name of the input file";
  cin >> filename;
  // Open file and read the first data point.
  sensor2.open(filename);
  if(sensor2.fail())
  {
    cerr << "Error opening input file\n";
    exit(1);
  }
  // Open report file.
  report.open("sensor2Report.txt");
  sensor2 >> time >> motion;
  // Initialize objects using first data point.
  max = min = motion;
  // Update summary data until trailer record read.
  do
  {
    sum += motion;
    if (motion > max)
    {
      max = motion;
    }
    if (motion < min)
    {
      min = motion;
    }
    num_data_pts++;
    sensor2 >> time >> motion;
  } while (time >= 0);
  // Set format flags.
  report.setf(ios::fixed);
  report.setf(ios::showpoint);
  report.precision(2);
  // Print summary information.
  report << "Number of sensor readings: "
        << num_data_pts << endl
        << "Average reading: "
        << sum/num_data_pts << endl
        << "Maximum reading: "
        << max << endl
        << "Minimum reading: "
        << min << endl;
  // Close files and exit program.
  sensor2.close();
  report.close();
  return 0;
  } //end main
/*----------------------------------------------------*/
