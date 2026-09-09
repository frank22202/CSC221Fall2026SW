#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main(){
    int dice1, dice2;
    srand(time(0));
    
    dice1 = (rand() % 6) + 1; 
    dice2 = (rand() % 6) + 1; 
    cout << "you rolled " << dice1 + dice2 << endl; 

}