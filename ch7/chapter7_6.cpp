/*----------------------------------------------------------*/
/* Program chapter7_6                                       */
/*                                                          */
/* This program reads storm values from a data file */
#include<iostream> //Required for cin, cout, cerr.
#include<fstream> //Required for fin.
using namespace std;
//Function Prototypes.
double category(double speed);
int main()
{
  //Declare and initialize variables.
  const int MAX_SIZE = 500;
  int k(0), npts, id[MAX_SIZE];
  double mph [MAX_SIZE], max(0);
  ifstream fin("storm1.txt");
  if(fin.fail())
  {
    cerr << "Could not open file storm1.txt" << endl;
    exit(1);
  }
  //Read data and determine maximum mph.
  fin >> id[k] >> mph[k];
  while(!fin.fail())
  {
    if(mph[k] > max)
    {
        max = mph[k];
    }
    ++k;
    fin >> id[k] >> mph[k];
  }//end while
  npts = k;
  //Print hurricane report.
  if(max >= 74)
  {
    cout << "Storms that Qualify as Hurricanes \n"
         << "Identification\t Peak Wind(mph)\t Category\n";
  }
  else
  {
    cout << "No hurricanes in the file \n";
  }
  for(k=0; k<npts; ++k)
  {
    if(mph[k] >= 74)
    {
      if(mph[k] == max)
      {
        cout << "\t" << id[k] << "*\t\t" << mph[k] << "\t"
            << category(mph[k]) << endl;
      }
      else
      {
        cout << "\t" << id[k] << "\t\t" <<mph[k] << "\t"
            << category(mph[k]) << endl;
      }
    }//end if k
  }//end for
  fin.close();
  return 0;
}
/*----------------------------------------------------------*/
/* This function determines the hurricane intensity */
/* category. */
double category(double speed)
{
  //Declare variables.
  int intensity(1);
  //Determine category.
  if(speed >= 155)
  {
    intensity=5;
  }
  else if(speed >= 131)
  {
    intensity = 4;
  }
  else if(speed >= 111)
  {
    intensity = 3;
  }
  else if(speed >= 96)
  {
    intensity = 2;
  }
    return intensity;
}
/*----------------------------------------------------------*/
