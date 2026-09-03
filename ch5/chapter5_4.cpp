/*----------------------------------------------------*/
/* Program chapter5_4                                 */
/*                                                    */
/* This program generates a summary report from       */
/* a data file that does not have a header record     */
/* or a trailer record.                               */
#include <iostream> //Required for cin, cout, cerr
#include <fstream> //Required for ifstream, ofstream.
#include <string> //Required for string.
using namespace std;
int main()
{
  // Declare and initialize objects.
  int num_data_pts(0), k;
  double time, motion, sum(0), max, min;
  string filename;
  ifstream sensor3;
  ofstream report;
  // Prompt user for name of input file.
  cout << "Enter the name of the input file";
  cin >> filename;
  // Open file and read the first data point.
  sensor3.open(filename);
  if(sensor3.fail())
  {
    cerr << "Error opening input file\n";
    exit(1);
  }
  // open report file.
  report.open("sensor3Report.txt");
  // While not at the end of the file,
  // read and accumulate information
  sensor3 >> time >> motion; // initial input
  while ( !sensor3.eof() )
  {
    num_data_pts++;
    if (num_data_pts == 1)
    {
      max = min = motion;
    }
    sum += motion;
    if (motion > max)
    {
      max = motion;
    }
    if (motion < min)
    {
      min = motion;
    }
    sensor3 >> time >> motion; // input next
  }
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
  // Close file and exit program.
  sensor3.close();
  report.close();
  return 0;
} //end main
/*----------------------------------------------------*/
