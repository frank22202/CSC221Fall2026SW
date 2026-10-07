#include <iostream>

using namespace std;
int main(){
    int* ptr1, val1 = 2;
    int* ptr2, val2 = 2;

    ptr1 = &val1; 
    ptr2 = &val2;
    if(ptr1 == ptr2){
        cout << "true" << endl;
    }else{
        cout << "false" << endl;
    }

    if(*ptr1 == *ptr2){
        cout << "true" << endl;
    }else{
        cout << "false" << endl;
    }
}