#ifndef TITFORTAT_H
#define TITFORTAT_H
#include "player.h"
/*---------------------------------------------------------------*/
/* */
/* This implements the Tit for Tat strategy. */
/* filename TitforTat.h */
class TitforTat : public Player
{
public:
// Print player's name.
void print_name();
// Print name of the player's algorithm.
void print_algorithm();
// Implement player's first move.
bool play();
// Implements player's subsequent moves.
bool play(bool opponents_last_play);
};
#endif
