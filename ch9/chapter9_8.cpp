/*---------------------------------------------------------------*/
/* Program chapter 9_8                                           */
/*                                                               */
/* This program reads a data file of ENSO index values and       */
/* determines the maximum El Nino condition in the file.         */
#include<iostream> //Required for cout
#include<fstream> //Required for ifstream
const int MAX_SIZE = 1000;
using namespace std;
int main()
{
  //Declare variables
  int k=0, year[MAX_SIZE],qtr[MAX_SIZE], maxK=0;
  double index[MAX_SIZE];
  ifstream fin("ENSO1.txt");
  if(fin.fail())
  {
    cerr <<"Could not open file ENSO1.txt" <<endl;
    exit(1);
  }
  fin >> *year >> *qtr >> *index;
  while(fin)
  {
    if(*(index+k) > *(index+maxK))
    {
      maxK = k;
    }
    k++;
    fin >> *(year+k) >> *(qtr+k) >> *(index+k);
  }//end while
  /* Print data for maximum El Nino condition. */
  cout << "Maximum El Nino conditions in Data File \n";
  cout << "Year:" << *(year+maxK) <<" Quarter:"
      << *(qtr+maxK) << endl;
  return 0;
}
/*---------------------------------------------------------------*/
