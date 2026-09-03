/*---------------------------------------------------------*/
/* Program chapter8_1                                      */
/* This program reads and stores temperature values        */
/* for multiple trials from the input file engine.dat.     */

#include<iostream> //Required for cerr, cout
#include<fstream>  //Required for ifstream
using namespace std;

int main()
{
// Declare objects.
   int numEngines, numTrials;  
   ifstream data1;

   //Open input file. 
   data1.open("engine.dat");
   if(data1.fail())
   {
      cerr << "could not open engine.dat";
      exit(1);
   }
   //Input row and column size
   data1 >> numEngines >> numTrials;

   //Declare constants for array declaration
   const int NROWS(numEngines);   
   const int NCOLS(numTrials);   
   double temps[NROWS][NCOLS];
 
   //Read temperature data and store in array.
   for (int i=0; i<NROWS; ++i)
   {
      for (int j=0; j<NCOLS; ++j)
      {
         data1 >> temps[i][j];
      }
   }
   data1.close();

   //Echo input
   cout << numEngines << ',' << numTrials << endl;
   for (int i=0; i<NROWS; ++i)
   {
      for (int j=0; j<NCOLS; ++j)
      {
         cout << temps[i][j] << '\t';
      }
      cout << endl;  //end of ith row
   }
   return 0;
}
/*---------------------------------------------------------*/
