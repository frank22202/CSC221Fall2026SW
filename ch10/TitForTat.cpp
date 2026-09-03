/* This implements the Tit for Tat strategy with initial defect. */
#include <iostream>
using namespace std;
#include "TitforTat.h"
void TitforTat::print_name()
{
cout << "Jeanine ";
}
// Print name of the player's algorithm.
void TitforTat::print_algorithm()
{
cout << "Tit for Tat";
}
// Implement player's first move.
bool TitforTat::play()
{
return false;
}
// Implements player's subsequent moves.
bool TitforTat::play(bool opponents_last_play)
{
return opponents_last_play;
}
