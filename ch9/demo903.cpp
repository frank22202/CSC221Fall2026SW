#include <iostream>

using namespace std;
int main(){
    int *ptr1, *ptr2;
    int *ptr3;
    int *ptr4;

    const int* ptr5;
    int const* ptr6;

    int value = 42;
    int* ptr7 = &value;
    int** dblPtr = &ptr7;
    int*** trplPtr = &dblPtr;

    cout << "ptr7 " << *ptr7 << endl;
    cout << "dblPtr " << **dblPtr << endl;
    cout << "trplPtr " << ***trplPtr << endl;
}