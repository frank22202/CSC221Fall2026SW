/*-----------------------------------------------------------*/
/* Program 5_1                                               */
/* This program reads data pairs from the                    */
/* the file sensor.dat and writes valid data pairs           */
/* to the file checkedSensor.dat. Valid data pairs           */
/* may not be negative. Invalid data is written to           */
/* to standard error(cerr)                                   */
#include<iostream> //Required for cerr
#include<fstream> //Required for ifstream, ofstream
using namespace std;
int main()
{
  //Define file streams for input and output.
  ifstream fin("sensor.dat");
  ofstream fout("checkedSensor.dat");
  //Check for possible errors.
  if(fin. fail())
  {
    cerr << "could not open input file sensor.dat\n";
    exit(1);
  }
  if(fout. fail())
  {
    cerr << "could not open output file checkedSensor.dat\n";
    exit(1);
  }
  //All files are open.
  double t, motion;
  int count(0);
  fin >> t >> motion;
  while(!fin.eof())
  {
    ++count;
    //Write valid data to output file.
    if(t >= 0 && motion >= 0)
    {
      fout << t << " " << motion << endl;
    }
    //Write invalid data to standard error output.
    else
    {
      cerr << "Bad data encountered on line"
          << count << endl
          << t << " " << motion << endl;
    }
    //Input next data pair.
    fin >> t >> motion;
  }//end while
  //close all files.
  fin.close();
  fout.close();
  return 0;
}
