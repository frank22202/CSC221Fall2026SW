#include <iostream>

using namespace std;
int main(){
    int* ptr1; //preferred C++ style
    int *ptr2, num1 = 10;
    int * ptr3 = nullptr;
    int *ptr4 = &num1;

    cout << "ptr1" << ptr1 << endl;
    cout << "ptr2" << ptr2 << endl;
    cout << "ptr3" << ptr3 << endl;
    cout << "ptr4" << ptr4 << endl;

    ptr1 = &num1;
    ptr2 = ptr4;

    cout << "ptr1" << ptr1 << endl;
    cout << "ptr2" << ptr2 << endl;
    cout << "ptr3" << ptr3 << endl;
    cout << "ptr4" << ptr4 << endl;

    *ptr1 = 9999;
    cout << "ptr1 " << *ptr1 << endl;
    cout << "ptr2 " << *ptr2 << endl;
    // cout << "ptr3 " << *ptr3 << endl;
    cout << "ptr4 " << *ptr4 << endl;

}