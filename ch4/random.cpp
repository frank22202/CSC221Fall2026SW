#include <iostream>
#include <cstdlib> // For rand() and srand()
#include <ctime>   // For time()
using namespace std;
int main() {
    // Seed the random number generator using current system time
    
    int dice1, dice2;
    srand(time(0));
    // Generate a number between 1 and 6

       
        dice1 = (rand() % 6) + 1;
        dice2 = (rand() % 6) + 1;


    cout << "You rolled a: " << dice1 << "\n";
    cout << "You rolled a: " << dice2 << "\n";

    return 0;
}