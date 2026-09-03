/*-----------------------------------------------------------*/
/* Program chapter4_4                                        */
/*                                                           */
/* This program prints a degree-to-radian table              */
/* using a for loop structure.                               */
#include<iostream> // Required for setw()
#include<iomanip> // Required for cout
using namespace std;
const double PI{3.141593};
int main()
  {
  // Declare the objects.
  double radians;
  // Set formats.
  cout.setf(ios::fixed);
  cout.precision(6);
  // Print degrees and radians in a loop.
  cout << "Degrees to Radians \n";
  for (int degrees=0; degrees<=360; degrees+=10)
  {
    radians = degrees*PI/180;
    cout << setw(6) << degrees << setw(10) << radians << endl;
  }
  // Exit program.
  return 0;
}
/*-----------------------------------------------------------*/
