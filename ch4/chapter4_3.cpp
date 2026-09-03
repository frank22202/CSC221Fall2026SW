/*-----------------------------------------------------------------*/
/* Program chapter4_3                                              */
/*                                                                 */
/* This program prints a degree-to-radian table                    */
/* using a do-while loop structure.                                */
#include<iostream> //Required for cout
#include<iomanip> //Required for setw()
using namespace std;
const double PI{3.141593};
int main()
{
  // Declare and initialize objects.
  int degrees(0);
  double radians;
  // Set formats.
  cout.setf(ios::fixed);
  cout.precision(6);
  // Print degrees and radians in a loop.
  cout << "Degrees to Radians \n";
  do
  {
    radians = degrees*PI/180;
    cout << setw(6) << degrees << setw(10) << radians << endl;
    degrees += 10;
  } while (degrees <= 360);
  // Exit program.
  return 0;
}
/*-----------------------------------------------------------------*/
