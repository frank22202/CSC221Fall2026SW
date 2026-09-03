/*-----------------------------------------------------------*/
/* Program chapter5_2                                        */
/*                                                           */
/* This program generates a summary report from              */
/* a data file that has the number of data points            */
/* in the first record.                                      */
#include <iostream> //Required for cerr, cin, cout.
#include <fstream> //Required for ifstream, ofstream.
#include <string> //Required for string.
using namespace std;
int main()
{
  // Declare and initialize objects.
  int num_data_pts, k;
  double time, motion, sum=0, max, min;
  string filename;
  ifstream sensor1;
  ofstream report;
  // Prompt user for name of input file.
  cout << "Enter the name of the input file";
  cin >> filename;
  // Open file and read the number of data points.
  sensor1.open(filename);
  if( sensor1.fail() )
  {
    cerr << "Error opening input file" << filename << endl;
    exit (1);
  }
  // Open report file.
  report.open("sensor1Report.txt");
  sensor1 >> num_data_pts;
  // Read first data pair and initial max and min.
  sensor1 >> time >> motion;
  max=min=motion;
  sum += motion;
  // Read remaining data and compute summary information.
  for (k=1; k<num_data_pts; k++)
  {
    sensor1 >> time >> motion;
    sum += motion;
  if (motion > max)
  {
    max = motion;
  }
  if (motion < min)
  {
    min = motion;
  }
  }
  // Set format flags.
  report.setf(ios::fixed);
  report.setf(ios::showpoint);
  report.precision(2);
  // Print summary information.
  report << "Number of sensor readings: "
         << num_data_pts << endl;
  report << "Average reading: "
         << sum/num_data_pts << endl;
  report << "Maximum reading: "
         << max << endl;
  report << "Minimum reading: "
         << min << endl;
  // Close files and exit program.
  sensor1.close();
  report.close();
  return 0;
} //end main
/*-----------------------------------------------------------*/
