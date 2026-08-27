/*-------------------------------------------------------------*/
/* Program chapter2_4                                          */
/*                                                             */
/* This program computes area of a circle.                     */
/* Results are displayed with two digits                       */
/* to the right of the decimal point.                          */
#include<iostream> //Required for cout, setf() and precision().
#include<cmath>    //Required for acos().
using namespace std;
const double PI = acos(-1.0);
int main()
{
  //Declare and initialize objects.
    double radius{10}, area;
  area = PI*radius*radius;

  //Call the setf member function using dot operator.
  cout.setf(ios::fixed); //Fixed form(xx.xx).

  //Call the precision member function using dot operator.
  cout.precision(2); //Display 2 digits to right of decimal.
  cout << "The radius of the circle is: " << radius
       << " centimeters\nThe area is "
       << area << " square centimeters\n";

  //exit program
  return 0;
}
/*-----------------------------------------------------------*/
