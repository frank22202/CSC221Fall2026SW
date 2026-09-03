/*----------------------------------------------------------------*/
/* Program chapter6_4 */
/* This program calculates the total weight and */
/* center of gravity of an aircraft. */
#include<iostream> //Required for cin, cout
using namespace std;
//Program Assumptions
const double PERSON_WT(160.0); //Average weight/person
const double FUEL_MOMENT(1169167.3); //Fuel moment for full tank
const double EMPTY_WT(9021.0); //Standard empty weight
const double EMPTY_MOMENT(2751405.0); //Standard empty moment
const double FUEL_WT(3618.0); //Full fuel weight
const double CARGO_DIST(345.0);
const double CREW_DIST(120.0);
//function prototypes
double CargoMoment(double);
double CrewMoment(int);
void GetData(int&, double&);
int main()
{
//Declare objects.
int crew; //number of crew on board (1 or 2)
double cargo; //weight of baggage, pounds
double total_weight, center_of_gravity;
//Set format flags.
cout.setf(ios::fixed);
cout.setf(ios::showpoint);
cout.precision(1);
GetData(crew, cargo);
total_weight = EMPTY_WT + crew*PERSON_WT + cargo
+ FUEL_WT;
center_of_gravity = (CargoMoment(cargo) + CrewMoment(crew)
+ FUEL_MOMENT + EMPTY_MOMENT)/total_weight;
cout << endl << "The total weight is " << total_weight
<< " pounds. \n"
<< "The center of gravity is " << center_of_gravity
<< " inches from the nose of the plane.\n";
return(0);
}//end main
/*----------------------------------------------------------------*/
double CargoMoment(double weight)
{
return(CARGO_DIST*weight);
}//end CargoMoment
/*----------------------------------------------------------------*/
double CrewMoment(int crew)
{
return(CREW_DIST*crew*PERSON_WT);
}//end CrewMoment
/*----------------------------------------------------------------*/
void GetData(int& crew, double& cargo)
{
cout << "enter number of crew members (Maximum of 2) ";
cin >> crew;
while(crew <= 0 || crew > 2)
{
cout << endl << crew
<< " is an invalid entry\n"
<< " re-enter number of crew, 0 < crew <= 2 ";
cin >> crew;
}//end while
cout << crew << " crew members, thank you.\n\n";
cout << "enter weight of cargo (Maximum of 5000 lbs) ";
cin >> cargo;
while(cargo < 0 || cargo > 5000)
{
cout << endl << cargo
<< " is an invalid entry"
<< " re-enter cargo weight, 0 < cargo <= 5000\n ";
cin >> cargo;
}//end while
cout << cargo << " pounds of cargo loaded. Thank you.\n\n";
return;
}//end getdata
/*----------------------------------------------------------------*/
