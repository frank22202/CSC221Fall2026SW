/*------------------------------------------------------------*/
/* Program chapter7_3 */
/* This program reads time and motion data from a file */
/* then finds maximum motion and time of occurrence. */
#include<iostream> //Required for cout
#include<fstream> //Required for ifstream
using namespace std;
int main()
{
   // Declare objects.
   double time[10], motion[10];
   ifstream sensor3("sensor3.dat" );
   // Check for successful open and read data into arrays.
   if(!sensor3.fail())
   {
      for (int k=0; k<10; ++k)
      {
         sensor3 >> time[k] >> motion[k];
         cout << time[k] << '\t' << motion[k] << endl;
      }
      //find max motion and time of occurrence
      int count{0};
      double maxMotion, timeOfMax;
      //initialize maxMotion;
      maxMotion = motion[0];
      for(double m:motion)
      {
         if(m > maxMotion)
      {
      maxMotion = m;
      timeOfMax = time[count];
      }
         ++count;
      }
      cout << "Maximum motion of " << maxMotion
            << " occurred at time " << timeOfMax << endl;
   }
   else
   {
      cout << " Could not open file sensor3.dat..goodbye." <<
      endl;
   }
   return 0;
}
