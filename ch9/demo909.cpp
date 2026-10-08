#include <iostream>

using namespace std;
int main(){
    int* ptr1 = new int{56};
    int* ptr2 = new int;
    *ptr2 = 42;

    cout << *ptr1 << endl;
    cout << *ptr2 << endl;

    delete ptr1;
    delete ptr2;

    ptr1 = nullptr;
    ptr2 = nullptr;

}