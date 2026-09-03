/*----------------------------------------------------*/
/* Program chapter8_2 */
/* */
/* This program computes power averages */
/* over a 10-week period. */
#include<iostream> //Required for cin, cout, cerr
#include<fstream> //Required for ifstream
#include<string> //Required for string
using namespace std;
const int MAXROWSIZE = 10;
const int MAXCOLSIZE = 7;
double columnAvg(double a[][MAXCOLSIZE], int colNum, int rows);
void input2D(istream& in, double a[][MAXCOLSIZE], int, int);

int main()
{
  // Declare objects.
  double power[MAXROWSIZE][MAXCOLSIZE], col_sum;
  string filename;
  ifstream data1;
  // Open file and read data into array.
  cout << "Enter name of input file.\n";
  cin >> filename;
  data1.open(filename.c_str());
  if(data1.fail())
  {
    cerr << "Error opening data file\n";
    exit(1);
  }
  // Set format flags.
  cout.setf(ios::fixed);
  cout.setf(ios::showpoint);
  cout.precision(1);
  input2D(data1,power,MAXROWSIZE,MAXCOLSIZE);
  for (int j=0; j<MAXCOLSIZE; ++j)
  {
    cout << "Day" << j+1 <<": Average =" 
         << columnAvg(power,j,MAXROWSIZE) << endl;
  }
  // Close file and exit program.
  data1.close();
  return 0;
}
/*----------------------------------------------------*/
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
double columnAvg(double arr[][MAXCOLSIZE], int colNum,
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

