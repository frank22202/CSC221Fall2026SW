/*------------------------------------------------------*/
/* The Player class declaration. */
/* File Player.h */
#ifndef PLAYER_H
#define PLAYER_H
#include <iostream>
using namespace std;
class Player
{
public:
  // Constructor
  Player();
  // Accessor Function
  virtual int get_score() const;
  // Print player's name.
  virtual void print_name();
  // Print name of the player's algorithm.
  virtual void print_algorithm();
  // Player's first move.
  virtual bool play();
  // Player's subsequent moves.
  virtual bool play(bool opponents_last_play);
  // Cumulative score.
  virtual void accumulate(int);
protected:
  int score;
};
#endif
/*-------------------------------------------------------*/
