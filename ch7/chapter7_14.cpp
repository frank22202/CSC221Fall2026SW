/*---------------------------------------------------------*/
/* Program chapter7_14 */
/* This program runs a simulation to calculate */
/* the probability of drawing 2 red cards, each */
/* with a face value less than 10, from a */
/* shuffled deck of 52 cards. The results are */
/* then compared to analytical results. */
#include<iostream> //Required for cout.
#include "Card.h" //Required for Card.
#include "CardDeck.h" //Required for CardDeck. */
using namespace std;
int main()
{
  //Declare objects.
  CardDeck theDeck;
  Card card1, card2;
  double pE(0), eventCounter(0);
  int n(0);
  bool isRed;
  cout << "Enter the analytical result ";
  cin >> pE;
  cout << "Enter number of experiments to run ";
  cin >> n;
  for(int i=0; i<n; ++i)
  {
    theDeck.shuffleDeck();
    card1 = theDeck.draw();
    card2 = theDeck.draw();
    //Check if the event occured.
    if( (card1.getSuit() == 'H' || card1.getSuit() == 'D')
      &&(card2.getSuit() == 'H' || card2.getSuit() == 'D'))
    {
      isRed = true;
    }
    else
    {
      isRed = false;
    }
    if( isRed && (card1.getRank() < 10 && card2.getRank() < 10) )
    {
      ++eventCounter;
      cout << "Event " << eventCounter << endl;
      card1.displayCard(cout);
      cout << " ";
      card2.displayCard(cout);
      cout << endl;
    }//end if
  }//end for
  cout << "Analytical results: " << pE << endl
      << "Simulated results: " << eventCounter << '/' << n
      << " = " << eventCounter/n << endl;
  return 0;
}
/*---------------------------------------------------------*/
