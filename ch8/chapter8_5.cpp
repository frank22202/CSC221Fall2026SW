/*----------------------------------------------------------*/
/* Program chapter8_5                                       */
/* This program illustrates the use of the vector class     */
/* to implement a two-dimensional array.                    */

#include<iostream>  //Required for cout
#include<fstream>   //Required for ifstream
#include<vector>    //Required for vector
using namespace std;

void input2D(istream& in, vector< vector<double> >& arr);
double columnAvg(vector< vector<double> > arr, int colNum);

int main()
{
   //Open input file 
   ifstream fin("engine.dat");
   if(fin.fail())
   {
     cerr << "Could not open file engine.dat" << endl;
     exit(1);
   }
   //File open successful, declare objects
   int rows, cols;
   double colAvg;
   fin >> rows >> cols;
   vector< vector<double> > temps(rows);
   for(int i=0; i<temps.size(); ++i) temps[i].resize(cols);  
   input2D(fin,temps);
   for(int j=0; j<cols; ++j)
   {
     cout << "The average value of column " << j << " is " 
          << columnAvg(temps,j) << endl;
   }
   return 0;
}
void input2D(istream& in, vector< vector<double> >& arr)
{

   double val;
   int rows, cols;
   rows = arr.size();
   cols = arr[0].size(); //all rows have same # of cols
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
double columnAvg(vector< vector<double> > arr, int colNum)
{
  double avg = 0.0;
  int r = arr.size();
  for(int i=0; i<r; ++i)
  {
     avg += arr[i][colNum];
  }
  return (avg/r);
}
/*-----------------------------------------------------------*/

