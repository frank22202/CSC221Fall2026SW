/*------------------------------------------------------------*/
/* Program chapter4_6                                         */
/* This programs finds the average of a set of exam scores.   */
#include<iostream>//Required for cin, cout
using namespace std;
int main()
{
  // Declare and initialize objects.
  double exam_score, sum(0), average;
  int counter;
  // Prompt user for input.
  cout << "Enter the number of exam scores to be read ";
  cin >> counter;
  cout << "Enter " << counter << " exam scores separated "
       << " by whitespace ";
  // Input exam scores using counter-controlled loop.
  for(int i=1; i<=counter; ++i)
  {
  cin >> exam_score;
  sum = sum + exam_score;
  }
  // Calculate average exam score.
  average = sum/counter;
  cout << counter << " students took the exam.\n";
  cout << "The exam average is " << average << endl;
  // Exit program
  return 0;
}
/*-------------------------------------------------------------*/
