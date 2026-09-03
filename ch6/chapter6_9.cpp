/*----------------------------------------------------------------*/
/*  Program chapter6_9                                            */
/*                                                                */
/*  This program calculates the percentage points that lie        */
/*  outside of a critical radius.                                 */

#include <iostream>  //Required for cin, cout
#include <fstream>   //Required for file input
using namespace std;

//Function Prototypes
double distance(double x1, double y1, double x2, double y2);

int main()
{
  //Declare objects
  int pointCount(0), outside(0);
  double x,y,criticalRad;
  const double xORIGIN(0), yORIGIN(0);
  double dist, radiusOuter, radiusInner;

  //open input file
  ifstream fin("compositeMaterialsSim1.dat");
  if(fin.fail())
  {
    cout << "Could not open data file compositeMaterialsSim1.dat" << endl;
    exit(1);
  }
  
  //Input critical radius from user
  cout << "Enter critical radius ";
  cin >> criticalRad;

  //Input radius of outer and inner cylinders
  fin  >> radiusOuter >> radiusInner; 

  //While not end of file, input point data
  fin >> x >> y;
  while(!fin.eof())
  {
    ++pointCount;  //increment point count
    dist = distance(x,y,xORIGIN, yORIGIN);  
    cout << "distance from origin of p1 is " << dist << endl;
    if(dist > criticalRad)
    {
       ++outside;  //increment outside counter 
    }
    fin >> x >> y;
  }

  //Print results
  //Pre-Multiply by 100.0 to force floating point arithmetic
  cout << (100.0*outside/pointCount) << "% lie outside the critcal radius" << endl;
  return 0;
}

#include <cmath>  //Required for sqrt and pow
double distance(double x1, double y1, double x2, double y2)
{
  double d1, d2, d;
  d1 = x2-x1;
  d2 = y2-y1;
  d = sqrt( pow(d1,2) + pow(d2,2) );
  return d;
}

