/*---------------------------------------------------------*/
/* Program chapter5_8 */
/* */
/* This program computes a linear model for a set */
/* of altitude and ozone mixing ratio values. */
#include <iostream> //Required for cin, cout
#include <fstream> //Required for ifstream
#include <string> //Required for string
using namespace std;
int main()
{
// Declare and initialize objects.
  int count(0);
  double x, y, first, last, sumx(0), sumy(0), sumx2(0),
  sumxy(0), denominator, m, b;
  string filename;
  ifstream zone1;
  cout << "Enter name of input file:";
  cin >> filename;
  // Open input file.
  zone1.open(filename);
  if(zone1.fail())
  {
    cerr << "Error opening input file\n";
    exit(1);
  }
  // While not at the end of the file,
  // read and accumulate information.
  zone1 >> x >> y;
  while ( !zone1.eof() )
  {
    ++count;
    if (count == 1)
      first = x;
    sumx += x;
    sumy += y;
    sumx2 += x*x;
    sumxy += x*y;
    zone1 >> x >> y;
  }
  last = x;
  // Compute slope and y-intercept.
  denominator = sumx*sumx - count*sumx2;
  m = (sumx*sumy - count*sumxy)/denominator;
  b = (sumx*sumxy - sumx2*sumy)/denominator;
  // Set format flags
  cout.setf(ios::fixed);
  cout.precision(2);
  // Print summary information.
  cout << "Range of altitudes in km: \n";
  cout << first << " to " << last << endl << endl;
  cout << "Linear model: \n";
  cout << "ozone-mix-ratio = " << m << " altitude + "
  << b << endl;
  // Close file and exit program.
  zone1.close();
  return 0;
}
/*---------------------------------------------------------*/
