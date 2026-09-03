/*----------------------------------------------------*/
/* Program chapter7_8                                 */
/* This program inputs wave height data from an       */
/* input file and calculates the significant wave     */
/* height(WVHT).                                      */

#include<iostream>  //Required for cin, cout, cerr.
#include<fstream>   //Required for ifstream.
#include<string>    //Required for string.
#include<iomanip>   //Required for setw()
using namespace std;

//Function Prototypes
double average(double[], int);

int main()
{
  //Declare and initialize objects
  const int SAMPLE_SIZE = 20;
  double waveHeights[SAMPLE_SIZE], WVHT, newVal;
  int year, month, day, hour, minute;
  string filename, header;
  ifstream fin;
  
  //Get filname and open file
  cout << "Enter name of input file: ";
  cin >> filename;
  fin.open(filename);
  if(fin.fail()) 
  {
    cerr << "Could not open the file " << filename 
         << " Goodbye." << endl;
    exit(1);
  }
  //Read header from input file
  getline(fin,header);
  
  //Read first line of input data
  int i = 0;
  fin >> year >> month >> day >> hour 
      >> minute >> waveHeights[i];

  //Echo header
  cout << header << endl;

  //Print starting date and time.
  cout << "Starting time: " << endl << year
       << setw(3) << month << setw(3) << day 
       << setw(3) << hour << setw(3) << minute << endl; 

  //Read remaining lines of input
  //Order waveHeight in descending order
  int pos;
  for(i=1; i<SAMPLE_SIZE; ++i)
  {

     fin >> year >> month >> day >> hour 
         >> minute >> newVal;
     //find ordered position 
     pos = 0;  //start at top
     while(pos < i && newVal < waveHeights[pos])
     {
       ++pos;
     }
     if(pos == i)  
     {
        //newVal belongs at end of array
        waveHeights[i] = newVal;
     }
     else
     {
       //Insert newVal at midpoint in array
       //Move values down to make room
       for(int k=i; k>pos; --k)
       {
         waveHeights[k] = waveHeights[k-1];
       }
       //Assign new value to array
       waveHeights[pos] = newVal;
     }
  }//end for

  //Calculate the WVHT
  //WVHT is defined as the average of the 
  //the highest one-third of all wave heights.
  //Average top 1/3 of array elements.
  int top3rd = SAMPLE_SIZE/3;
  WVHT = average(waveHeights, top3rd);

  //Print ending date and time.
  cout << "ending time: " << endl << year
       << setw(3) << month << setw(3) << day 
       << setw(3) << hour << setw(3) << minute << endl; 
  cout << "WVHT is " << WVHT << endl;

  fin.close();
  return 0;
}

double average(double array[], int size)
{
    double sum = 0.0;
    for(int i=0; i<size; ++i)
    {
       sum += array[i];
    }
    sum = sum/size;
    return sum;
}
