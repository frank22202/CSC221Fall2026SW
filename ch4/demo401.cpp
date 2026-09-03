#include <iostream>

using namespace std;

int main(){
    // 1. counter variable
    // 2. starting value
    // 3. test
    // 4. update
    for(int i = 0; i < 10; i++){
        cout << i << endl;
    }
    int total = 0;
    int counter = 0;
    for(int i = 1; i <= 100; i++){
        total += i;
        counter++;
    }
    cout << "The total is: " << total << endl;
    cout << "The average is: " << (double)total / counter << endl;

}