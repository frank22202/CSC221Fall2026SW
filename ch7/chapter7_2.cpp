/*-----------------------------------------------------------------*/
/* Program chapter7_2                                              */
/*                                                                 */
/* This program reads time and motion values from an input file    */
/* and assigns the values to the arrays time and motion.           */
/* Input values are printed to standard output for verification.   */

#include<iostream> //required for cout
#include<fstream>  //required for ifstream
using namespace std;

int main()
{
   // Declare objects.
   double time[10], motion[10];
   ifstream sensor3("sensor3.dat");

   // Check for succesfull open and read data into arrays.
   if(!sensor3.fail())
   {
      for (int k=0; k<10; ++k)
      {
         sensor3 >> time[k] >> motion[k];
         cout << time[k] << '\t' << motion[k] << endl;
      }
   }
   else
   {
      cout << "Could not open file sensor3.dat..goodbye." << endl;
   }
   return 0;
}
