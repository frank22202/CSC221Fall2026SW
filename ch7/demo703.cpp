#include <iostream>
#include <random>
using namespace std;

int main() {
    const int TOTAL_ROLLS = 6'000'000;
    const int NUMS = 13;
    int dice1 = 0, dice2 = 0;
    srand(time(0));
    int frequencies[NUMS] = {0};
    for(int i=0;i<TOTAL_ROLLS;i++){
        dice1 = rand() % 6 + 1;
        dice2 = rand() % 6 + 1;
        frequencies[dice1 + dice2]++;
    }
    
    for(int i=2;i<NUMS;i++){
        cout << frequencies[i] << endl;
    }
}