/*----------------------------------------------------*/
/* Program chapter2_3                                 */
/*                                                    */
/* This program illustrates the use of the            */
/* programmer-defined data type Point                 */

#include <iostream>  //Required for cout
#include "Point.h"   //Required for Point
using namespace std;

int main()
{
  //Declare and initialize objects.
  cout << "In main, declare p1..." << endl;
  Point p1; 
  cout << "\nIn main, declare p2..." << endl;
  Point p2(1.5, -4.7);
  cout << "\nIn main, declare ORIGIN..." << endl;
  const Point ORIGIN(0.0, 0.0);
  return 0;
}
/*----------------------------------------------------*/
