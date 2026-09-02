#include<iostream> //Required for cin,cout
#include<iomanip> //Required for setprecision(), setw()
#include<cmath> //Required for pow()
using namespace std;
int main()
{
  // Declare objects.
  double time, velocity, acceleration;

  // Get time value from the keyboard.
  cout << "Enter new time value in seconds: \n";
  cin >> time;

  // Compute velocity and acceleration.
  velocity = 0.00001*pow(time,3) - 0.00488*pow(time,2)
           + 0.75795*time + 181.3566;
  acceleration = 3 - 0.000062*velocity*velocity;

  // Print velocity and acceleration.
  cout << fixed << setprecision(3);
  cout << "Velocity = " << setw(10)
       << velocity << " m/s" << endl;
  cout << "Acceleration = " << setw( 14)
       << acceleration << "m/s^2" << endl;

  // Exit program.
  return 0;
}
/*----------------------------------------------------*/
