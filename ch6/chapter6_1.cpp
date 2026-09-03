#include<iostream> //Required for cin, cerr
#include<fstream> //Required for ifstream, ofstream
#include<string> //Required for string, c_str()
using namespace std;
//Function prototype.
double celsiusToFahr(double celsius); //Programmer defined function.
/*-----------------------------------------------------------------*/
/* Program chapter6_1 */
/* This program reads temperatures in degrees Celsius */
/* from an input file, calls a conversion function */
/* and writes converted temperatures to an output file. */
int main()
{
  //Declare variables.
  ifstream fin;
  ofstream fout;
  string filename;
  double cels, fahr;;
  //Open files.
  cout << "Enter name of input file\n ";
  cin >> filename;
  fin.open(filename);
  if(fin.fail())
  {
    cerr << "Could not open the file " << filename << endl;
    exit(1);
  }
  fout.open( (filename + "ToFahr") );
  fin >> cels;
  //while not end of file
  while(!fin.eof())
  {
    //Convert temperature and write to file.
    fahr = celsiusToFahr(cels); //Function call.
    fout << fahr << endl;
    fin >> cels;
  }
  fin.close();
  fout.close();
  return 0;
}
/*-----------------------------------------------------------------*/
/* This function performs a conversion from */
/* degrees Celsius to degrees Fahrenheit. */
/* Precondition: celsius holds a temperature in degrees Celsius */
/* Postcondition: returns degrees Fahrenheit */
double celsiusToFahr(double celsius) //Function header.
{
  //Declare local variables.
  double temp;
  //Convert from degrees celsius to degrees Fahrenheit.
  temp = (9.5/5.0)*celsius + 32.0;
  return temp;
}
