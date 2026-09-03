/*-----------------------------------------------------*/
/* Program chapter10_9 */
/* filename: testCube.cpp */
/* This program tests the Cube class */
#include<iostream>//Required for cout
#include "Point.h"//Required for Point
#include "Cube.h"//Required for Cube
using namespace std;
int main()
{
  Point p1(4,2);
  //Test constructors.
  Cube c1, c2(p1, 3);
  //Test << operator
  cout << "c1: ";
  c1.print(cout);
  cout << endl;
  cout << "c2: " ;
  c2.print(cout);
  cout << endl;
  //Test volume.
  cout << "Volume of a c2 is " << c2.volume()
        << endl;
  return 0;
}
/*-----------------------------------------------------*/
