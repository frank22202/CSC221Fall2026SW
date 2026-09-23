#include <iostream>
using namespace std;

void changeRef(int& x){ //pass by reference
    x = 333;
    cout << &x << endl;
}

void change(int x){ //pass by value
    x = 20;    
    cout << &x << endl; 
}

int main(){
    int number1 = 10;
    // change(number1);
    // cout << number1 << endl; //10
    // cout << &number1 << endl;

    changeRef(number1);
    cout << number1 << endl; //10
    cout << &number1 << endl;
}

