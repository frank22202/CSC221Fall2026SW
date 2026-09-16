#include <iostream>
#include <string>
using namespace std;

int fact(int num){
    if (num == 0 || num == 1) //base case
        return 1;
    else{
        return num * fact(num - 1); //general case
    }
}

int main() {
    cout << fact(5) << endl;
}