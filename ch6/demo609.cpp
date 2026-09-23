#include <iostream>
using namespace std;
int globalVariable;

void swap(int x, int y){
    int temp = x;
    x = y;
    y = temp;
}

void swapAddr(int& x, int& y){
    int temp = x;
    x = y;
    y = temp;
}

int main() {
    int number1 = 2;
    int number2 = 7;
    // swap(number1, number2); //pass by value
    swapAddr(number1, number2); // pass by reference

    std::cout << number1 << ", " << number2 << endl;
    return 0;
}
