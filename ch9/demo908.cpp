#include <iostream>

using namespace std;

void passByValue(int* ptr){
    *ptr = 99;
    int num2 = 125;
    ptr = &num2;
    cout << "[value] ptr addr: " << ptr << " value: " << *ptr << endl;
}

void passByRef(int*& ptr){
    *ptr = 99;
    int num2 = 125;
    ptr = &num2;
    cout << "[ref] ptr addr: " << ptr << " value: " << *ptr << endl;
}

int main(){
    int num1 = 10;
    int* ptr1 = &num1;

    cout << "[main] original addr: " << ptr1 << " value: " << *ptr1 << endl;
    passByValue(ptr1);
    cout << "[main value] after addr: " << ptr1 << " value: " << *ptr1 << endl;

    passByRef(ptr1);
    cout << "[main ref] after addr: " << ptr1 << " value: " << *ptr1 << endl;
}