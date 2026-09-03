/* Program chapter10_10 */
/* This program implements a version of the Iterated
Prisoner's Dilemma */
#include <iostream>
using namespace std;
#include "Player.h" //base class player
#include "TitforTat.h" //TitforTat player
//Function prototypes
void setup(Player*, Player*);
void play_game(Player*, Player*);
void report(Player*, Player*);
int payoff(bool move, bool opponent_move);
int main()
{
// Declare objects.
Player p1;
TitforTat p2;
Player* ptr1 = &p1;
Player* ptr2 = &p2;
// Notify players.
setup(ptr1, ptr2);
play_game(ptr1, ptr2);
cout << endl;
report(ptr1, ptr2);
return 0;
}
void setup(Player* p1, Player* p2)
{
// Announce players.
p1->print_name();
cout << " is playing ";
p1->print_algorithm();
cout << endl;
p2->print_name();
cout << " is playing ";
p2->print_algorithm();
cout << endl;
}
int payoff(bool move, bool opponent_move)
{
if (move)
{
if (opponent_move)
{
return 3; // Both cooperate.
}
else
{
return 0; // I cooperate, opponent defects.
}
}
else
{
if (opponent_move)
{
return 5; // I defect, opponent cooperates.
}
else
{
return 1; // Both defect.
}
}
}
/* Play a single game of the iterated
* prisoner's dilemma between two players.
*/
void play_game(Player* p1, Player* p2)
{
// Declare objects.
int max_iterations;
bool p1_move, p2_move, old_p1_move;
cout << "Enter the number of iterations for the game: ";
cin >> max_iterations;
p1_move = p1->play(); // get the first move.
p2_move = p2->play(); // get the first move.
for(int i=1; i<max_iterations; i++)
{
old_p1_move = p1_move;
p1_move = p1->play(p2_move); // get the next move
p2_move = p2->play(old_p1_move); // get the next move
// Update the scores for this round of play.
p1->accumulate(payoff(p1_move, p2_move));
p2->accumulate(payoff(p2_move, p1_move));
}
}
void report(Player *p1, Player *p2)
{
if (p1->get_score() > p2->get_score()) // Player 1 won.
{
p1->print_name();
cout << " (" << p1->get_score() << ") beat ";
p2->print_name();
cout << " (" << p2->get_score() << ").\n";
}
else if (p2->get_score() > p1->get_score()) // Player 2 won.
{
p2->print_name();
cout << " (" << p2->get_score() << ") beat ";
p1->print_name();
cout << " (" << p1->get_score() << ").\n";
}
else // The players tied.
{
p1->print_name();
cout << " and ";
p2->print_name();
cout << " tied at " << p1->get_score() << " each.\n";
}
}

