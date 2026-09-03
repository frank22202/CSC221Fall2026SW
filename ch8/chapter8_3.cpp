/*-------------------------------------------------------------*/
/* Program chapter8_3                                          */
/* This program reads and stores temperature values            */
/* for multiple trials from the input file engine.dat,         */
/* then determines which engines performed below the           */
/* average trial temperature.                                  */

#include<iostream> //Required for cerr, cout
#include<fstream>  //Required for ifstream
using namespace std;

//Declare constants and Function Prototypes
static const int MAXCOLSIZE(50);
static const int MAXROWSIZE(50);
double columnAvg(const double a[][MAXCOLSIZE], int colNum, int rows);
void input2D(istream& in, double a[][MAXCOLSIZE], int, int);

int main()
{
   //Declare objects.
   int numEngines, numTrials;  
   ifstream data1;
   double temps[MAXROWSIZE][MAXCOLSIZE];
   double avgTemp;

   //Open input file. 
   data1.open("engine.dat");
   if(data1.fail())
   {
      cerr << "could not open engine.dat";
      exit(1);
   }
   //Input row and column size
   data1 >> numEngines >> numTrials;

   //Read temperature data and store in array.
   input2D(data1, temps, numEngines, numTrials);

   data1.close();

   for(int i=0; i<numTrials; ++i)
   {
     //Calculate average engine temperature for each trial.
     avgTemp = columnAvg(temps, i, numEngines);
     //Generate Report
     cout << "\nTrial " << (i+1) << "\t\tAverage Engine Temperature " 
           << avgTemp << endl;
      cout << "==============================================\n";
      for(int j=0; j<numEngines; ++j)
      {
        if(temps[j][i] < avgTemp)
        {
          cout << "Engine " << (j+1) 
               << " performed below the average temp." << endl; 
        }
      }
   }
   return 0;
}
/*---------------------------------------------------------*/

/*---------------------------------------------------------*/
/* This function reads data from an input stream and       */
/* assigns the data to the 2D array, arr.                  */
/* Pre-conditions:                                         */
/*   The istream in has been defined.                      */
/*   The integer cols is <= MAXCOLSIZE                     */
/*   The integer rows is <= MAXROWSIZE                     */
/* Post-conditions:                                        */
/*   rows*cols values are assigned to the array, arr       */

void input2D(istream& in, double arr[][MAXCOLSIZE], 
             int rows, int cols)
{
    
   for (int i=0; i<rows; ++i)
   {
      for (int j=0; j<cols; ++j)
      {
         in >> arr[i][j];
      }
   }
}
/*-----------------------------------------------------------*/
/*-----------------------------------------------------------*/
/* This function returns the average of colunm colNum        */
/* Pre-conditions:                                           */
/*   The array arr has rowSize rows of valid data            */
/*   The integer colNum is < MAXCOLSIZE                      */
double columnAvg(const double arr[][MAXCOLSIZE], int colNum, 
                 int rowSize)
{
  double avg = 0.0;
  for(int i=0; i<rowSize; ++i)
  {
     avg += arr[i][colNum];
  }
  return (avg/rowSize);
}
/*-----------------------------------------------------------*/
