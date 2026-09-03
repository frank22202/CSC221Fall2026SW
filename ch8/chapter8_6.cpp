/*----------------------------------------------------*/
/* Program chapter8_6                                 */
/*                                                    */
/* This program uses Gauss elimination to */
/* determine the mesh currents for a circuit. */
#include <iostream> //Required for cin, cout
using namespace std;
// Define global constant for number of unknowns.
const int N = 3;
// Declare function prototypes.
void eliminate(double a[][N+1], int n, int index);
void back_substitute(double a[][N+1],
int n, double soln[N]);
int main()
{
  // Declare objects.
  double r1, r2, r3, r4, r5, v1, v2,
          a[N][N+1], soln[N];
  // Get user input.
  cout << "Enter resistor values in ohms: \n"
      << "(R1, R2, R3, R4, R5) \n";
  cin >> r1 >> r2 >> r3 >> r4 >> r5;
  cout << "Enter voltage values in volts: \n"
      << "(V1, V2) \n";
  cin >> v1 >> v2;
  // Specify equation coefficients.
  a[0][0] = r1 + r2;
  a[0][1] = a[1][0] = -r2;
  a[0][2] = a[2][0] = a[1][3] = 0;
  a[1][1] = r2 + r3 + r4;
  a[1][2] = a[2][1] = -r4;
  a[2][2] = r4 + r5;
  a[0][3] = v1;
  a[2][3] = -v2;
  // Perform elimination step.
  for (int index=0; index<N-1; index++)
  {
    eliminate(a,N,index);
  }
  // Perform back substitution step.
  back_substitute(a,N,soln);
  // Print solution.
  cout << "\nSolution: \n";
  for (int i=0; i<N; ++i)
  {
    cout << "Mesh Current " << i+1 << ": "<< soln[i] << endl;
  }
  // Exit program.
  return 0;
}
/*---------------------------------------------------------*/
/* This function performs the elimination step. */
void eliminate(double a[][N+1], int n, int index)
{
  // Declare objects.
  double scale_factor;
  // Eliminate object from equations.
  for (int row=index+1; row<n; ++row)
  {
    scale_factor = -a[row][index]/a[index][index];
    a[row][index] = 0;
    for (int col=index+1; col<=n; ++col)
    {
      a[row][col] += a[index][col]*scale_factor;
    }
  }
  // Void return.
  return;
}
/*---------------------------------------------------------*/
/* This function performs the back substitution. */
void back_substitute(double a[][N+1], int n,
double soln[])
{
  // Perform back substitution in each equation.
  soln[n-1] = a[n-1][n]/a[n-1][n-1];
  for (int row=n-2; row>=0; --row)
  {
    for (int col=n-1; col>=row+1; --col)
    {
      a[row][n] -= soln[col]*a[row][col];
    }
  soln[row] = a[row][n]/a[row][row];
  }
  // Void return.
  return;
}
/*---------------------------------------------------------*/
