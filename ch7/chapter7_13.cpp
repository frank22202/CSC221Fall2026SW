/*----------------------------------------------------*/
/* Program chapter7_13                                 */
/* This program inputs a collection of points and     */
/* finds the Point that is closest to the origin      */
#include<iostream>  //Required for cin, cout, cerr.
#include<fstream>   //Required for ifstream.
#include<string>    //Required for string.
#include<vector>    //Required for vector.
#include "Point.h"  //Required for Point.
using namespace std;

// Function prototypes.
void readPointFile(istream& in,
                   vector<Point>& v); //Pass by reference

Point closeToOrigin(vector<Point> v); //Pass by value.
int main()
{
  //Declare objects.
  Point p;
  string filename;
  ifstream file1;
  //Prompt user for file name and
  //open file.
  cout << "Enter filename ";
  cin >> filename;
  file1.open(filename.c_str());
  if( file1.fail() )
  {
    cerr << "error opening file " << filename << endl;
    exit(1);
  }
  //Build Point vector
  vector<Point> v;
  readPointFile(file1, v);
  //Find point closest to orign
  p = closeToOrigin(v);
  cout << "(" << p.getX() << "," << p.getY() << ")"
       << " is closest to the origin." << endl;
  return 0;
}
/*---------------------------------------------------------*/
/*---------------------------------------------------------*/
void readPointFile(istream& in,
		   vector<Point>& v)
{
  int npts;
  // Read number of data points.
  in >> npts;
  v.resize(npts);
  Point p;
  // Read Points and store in vector.
  // Points are formatted as x,y
  double x,y;
  char comma;
  for (int i=0; i<npts; ++i)
  {
    in >> x >> comma >> y;
    p.setX(x);
    p.setY(y);
    v[i] = p;;
  }
}
/*---------------------------------------------------------*/
/*---------------------------------------------------------*/
/* This function returns the point */
/* closest to the origin */
Point closeToOrigin(vector<Point> v)
{
  Point p1, origin(0.0,0.0);
  int closest(0); //offset of closest.
  for(int i=1; i<v.size(); ++i)
  {
    if(v[i]-origin < v[closest]-origin)
    {
    closest = i;
    }
  }
  return v[closest];
}
/*---------------------------------------------------------*/
