/*-------------------------------------------------------------*/
/* Program chapter4_2                                          */
/*                                                             */
/* This program prints a degree-to-radian table                */
/* using a while loop structure.                               */
#include<iostream> //Required for cout
#include<iomanip> //Required for setw()
using namespace std;
const double PI{3.141593};
int main()
{
  // Declare and initialize objects.
  int degrees{0};
  double radians;
  // Set formats.
  cout.setf(ios::fixed);
  cout.precision(6);
  // Print radians and degrees in a loop.
  cout << "Degrees to Radians \n";
  while (degrees <= 360)
  {
  radians = degrees*PI/180;
  cout << setw(6) << degrees << setw(10) << radians << endl;
  degrees += 10;
  }
  // Exit program.
  return 0;
}
/*-------------------------------------------------------------*/
