/*----------------------------------------------------------------*/
/*  Program chapter6_8                                            */
/*                                                                */
/*  This program calculates the percentage points that lie        */
/*  outside of a critical radius.                                 */

#include <iostream>  //Required for cin, cout
#include <fstream>    //Required for file input
#include "Point.h"   //Programmer-defined data type
using namespace std;

int main()
{
  //Declare objects
  const Point ORIGIN(0,0);
  Point p;
  int pointCount(0), outside(0);
  double x,y,criticalRad;
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
  //fin >> x >> y;
  p.input(fin);
  while(!fin.eof())
  {
    ++pointCount;  //increment point count
    //p.setX(x);
    //p.setY(y);
    dist = p - ORIGIN;
    cout << "distance from origin of p1 is " << dist << endl;
    if(dist > criticalRad)
    {
       ++outside;  //increment outside counter 
    }
    //fin >> x >> y;
    p.input(fin);
  }

  //Print results
  //Pre-Multiply by 100.0 to force floating point arithmetic
  cout << (100.0*outside/pointCount) << "% lie outside the critcal radius" << endl;
  return 0;
}
