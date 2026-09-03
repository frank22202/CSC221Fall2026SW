/*-------------------------------------------------------*/
/* */
/* The Player class implementation. */
/* This implements the always cooperate strategy. */
/* File Player.cpp */
#include "Player.h"
// Constructor
Player::Player() : score(0)
{}
// Accessor function
int Player::get_score() const
{
  return score;
}
// Print player's name.
void Player::print_name()
{
  cout << "Base Class Player";
}
// Print name of the player's algorithm.
void Player::print_algorithm()
{
  cout << "Always Cooperate\n";
}
// Implement player's first move.
bool Player::play()
{
  return true;
}
// Implements player's subsequent moves.
bool Player::play(bool opponents_last_play)
{
  return true;
}
// Keep a cumulative score.
void Player::accumulate(int s)
{
  score+=s;
}
