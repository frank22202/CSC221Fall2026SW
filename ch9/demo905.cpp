#include <iostream>

using namespace std;
int main(){
    int numbers[] = {10, 20, 30, 40, 50};

    int* ptr1 = &numbers[0];
    int* ptr2 = &numbers[4];

    cout << ptr1 << endl;
    cout << ptr2 << endl;

    while(ptr1 <= ptr2){
        cout << *ptr1 << endl;
        ptr1++;
    }

    
}