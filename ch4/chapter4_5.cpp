/******************************************************************/
/* Program chapter4_5                                             */
/*                                                                */
/* This program computes and prints the pseudorange for           */
/* 4 satellites.  It also prints the number of the satellite      */
/* that is closest to the receiver.                               */

#include<iostream> //Required for cout
#include<cfloat>   //required for DBL_MAX
using namespace std;

int main()
{
  //Declare and initialize objects
  const double C(299792458.0);  //meters per second
  const int NUMBER_OF_SATELLITES(4);
  int satID, minID;  
  double tTime, pRange, minPRange(DBL_MAX); 

  //Prompt user for input
  cout << "Enter id and transit time for " 
       << NUMBER_OF_SATELLITES << " satellites:\n"
       << "Use whitespace to separate the values(ie: 25 0.00567)\n" 
       << endl;

  for(int i=1; i<=NUMBER_OF_SATELLITES; ++i)
  {
    cin >> satID >> tTime;
    pRange = tTime*C;

    //Check for closest satellite
    if(pRange < minPRange)
    {
      minPRange = pRange;
      minID = satID;
    }
    cout << "Satellite " << satID << " has a pseudorange of " 
         << pRange << " m\n" << endl;
  }
  //Output ID of closest satellite
  cout << "\nSatellite " << minID 
       << " is closest to GPS receiver." << endl;
  return 0;
}
/*****************************************************************/
