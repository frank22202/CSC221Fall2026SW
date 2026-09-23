#include <iostream>
using namespace std;

int add(int number1, int number2){
    cout << "from 1st function" << endl;
     return number1 + number2;
}
double add(double number1, double number2){
    cout << "from 2nd function" << endl;
    return number1 + number2;
}

int add(int number1, int number2, int number3){
    cout << "from 3rd function" << endl;
    return number1 + number2 + number3;
}

string add(const string& a, const string& b){
    cout << "from 4th function" << endl;
    return a + b;
}

int main(){
    cout << add(2, 3) << endl;
    cout << add(12.3, 5, 98.3) << endl;
    cout << add("John ", "Smith") << endl;
    return 0;
}

