/*----------------------------------------------------*/
/* Program chapter5_7                                 */
/* This program illustrates the use of stream         */
/* flags and stream functions for detecting           */
/* and handling input errors.                         */
#include<iostream> //Required for cin, cout, cerr.
#include<fstream> //Required for ifstream, ofstream.
#include<string> //Required of string
#include<iomanip> //Required for setw()
using namespace std;
int main()
{
  //Declare variables.
  ifstream fin;
  ofstream fout;
  int iVar1, count (0);
  string filename;
  char junk;
  //Request name of input file.
  cout << "Enter the name of input file";
  cin >> filename;
  //Open file and check for failure.
  fin.open(filename);
  while(fin.fail())
  {
    ++count;
    //Open failed. Attempt to recover.
    //rdstate() returns the iostate of a stream
    //Print the state of the fin stream
    cout << "could not open" << filename
          <<". The state of the fin stream is"
          << fin.rdstate() << endl;
    cerr << setw(10) << "badbit:" << setw(10)
          << fin.bad() << endl;
    cerr << setw(10) << "failbit:" << setw(10)
          << fin.fail() << endl;
    cerr << setw(10) << "eofbit:" << setw(10)
          << fin.eof() << endl;
    cerr << setw(10) << "goodbit:" << setw(10)
          << fin.good() << endl;
    cerr << "**********************" << endl;
    fin.clear(); //reset fin to good state
    //Print the state of fin after clearing.
    cout << "fin state reset to"
          << fin.rdstate() << endl;
    cout << setw(10) << "badbit:" << setw(10)
          << fin.bad() << endl;
    cout << setw(10) << "failbit:" << setw(10)
          << fin.fail() << endl;
    cout << setw(10) << "eofbit:" << setw(10)
          << fin.eof() << endl;
    cout << setw(10) << "goodbit:" << setw(10)
          << fin.good() << endl;
    cout << "***********************" << endl;
    if(count >= 5)
    {
      cerr << "Failed to open an input file.";
      exit(1);
    }
    cout << "enter the name of a file";
    cin >> filename;
    fin.open(filename.c_str());
  }
  //File has been successfully opened.
  //Get state of fin.
  cout << "File" << filename
        << "is open. State of fin is"
        << fin.rdstate() << endl;
  //Open file for output.
  fout.open("output.dat");
  //Print table of values to output file.
  //Print heading.
  fout << "Count iVar2" << endl;
  fout << "--------------------" << endl;
  //Read and print data from file
  count = 0;//Reset count to zero.
  fin >> iVar1;
  while(!fin.eof())
  {
    //Test state of fin.
    if(!fin) //if fin is bad
    {
      cerr << "Bad data encountered.\n";
      cerr << "The state of fin is:"
            << fin.rdstate()<<endl;
      cerr << setw(10) << "badbit:"
            << setw(10) << fin.bad() << endl;
      cerr << setw(10) << "failbit:"
            << setw(10) << fin.fail() << endl;
      cerr << setw(10) << "eofbit:"
            << setw(10) << fin.eof() << endl;
      cerr << setw(10) << "goodbit:"
            << setw(10) << fin.good() << endl;
      cerr << "********************" << endl;
      //Reset fin to good state
      fin.clear();
      //Remove bad character from input stream.
      fin.get(junk);
      cerr << "The bad character is:" << junk << endl;
      continue; //Force next iteration of while loop.
    }
    ++count;
    fout << setw(5) << count
          << setw(10) << iVar1 << endl;
    fin >> iVar1;
  }
  //Print current state of fin to standard output.
  cout << "Outside of while, state of fin is:"
      << fin.rdstate() << endl;
  cout << setw(10) << "badbit:" <<
      setw(10) << fin.bad() << endl;
  cout << setw(10) << "failbit:"
      << setw(10) << fin.fail() << endl;
  cout << setw(10) << "eofbit:"
      << setw(10) << fin.eof() << endl;
  cout << setw(10) << "goodbit:"
      << setw(10) << fin.good() << endl;
  cout << "********************" << endl;
  fin.close();
  fout.close();
  return 0;
}
