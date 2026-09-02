/*------------------------------------------------------------------*/
/*  Program chapter3_1 generates a truth table for the condition:   */
/*     A && B || B && C                                             */
/*  and determines if the condtion is a tautology                   */

#include <iostream>
using namespace std;

int main()
{
  //Declare and intialize objects
  bool A(false), B(false), C(false);
  bool tautology(true);  //assume true
  bool condition = (A && B || B && C);
  
  //Print table header
  cout << "TABLE 3.2\n A\tB\tC\t\tA && B || B && C" << endl;
  cout << "_________________________________________________" << endl;
  cout << A << '\t' << B << '\t' << C << "\t\t\t" << condition << endl; //(A && B || B && C) << endl;
  if(!condition) tautology = false;

  //Toggle C
  C = !C;
  condition = (A && B || B && C);
  cout << A << '\t' << B << '\t' << C << "\t\t\t" << condition << endl; //(A && B || B && C) << endl;
  if(!condition) tautology = false;

  //Toggle B and C
  B = !B;
  C = !C;
  condition = (A && B || B && C);
  if(!condition) tautology = false;
  cout << A << '\t' << B << '\t' << C << "\t\t\t" <<condition << endl; // (A && B || B && C) << endl;

  //Toggle C
  C = !C;
  condition = (A && B || B && C);
  if(!condition) tautology = false;
  cout << A << '\t' << B << '\t' << C << "\t\t\t" << condition << endl; //(A && B || B && C) << endl;

  //Toggle A, B and C
  A = !A;
  B = !B;
  C = !C;
  condition = (A && B || B && C);
  if(!condition) tautology = false;
  cout << A << '\t' << B << '\t' << C << "\t\t\t" << condition << endl; //(A && B || B && C) << endl;

  //Repeat the pattern for B and C..

  //Toggle C
  C = !C;
  condition = (A && B || B && C);
  if(!condition) tautology = false;
  cout << A << '\t' << B << '\t' << C << "\t\t\t" << condition << endl; //(A && B || B && C) << endl;

  //Toggle B and C
  B = !B;
  C = !C;
  condition = (A && B || B && C);
  if(!condition) tautology = false;
  cout << A << '\t' << B << '\t' << C << "\t\t\t" << condition << endl; //(A && B || B && C) << endl;

  //Toggle C
  C = !C;
  condition = (A && B || B && C);
  if(!condition) tautology = false;
  cout << A << '\t' << B << '\t' << C << "\t\t\t" << condition << endl; //(A && B || B && C) << endl;

  if(tautology) cout << "This condition is a tautology." << endl;
  else cout << "This condtion is not a tautology." << endl;
  return 0;
}
