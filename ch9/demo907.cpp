#include <iostream>

using namespace std;
int main(){
    int* ptr1;
    *ptr1 = 100;
    cout << ptr1 << endl;
    cout << *ptr1 << endl;
}