#include <iostream>
using namespace std;

int main() {
    int low = 1;
    int high = 20;
    char response;

    cout << "Enter a number between 1 and 20: " << endl;
    
    while(low <= high){
        int mid = (low + high) / 2;

        cout << "Are you guessing (h/l/c)" << mid << endl;
        cin >> response;

        if(response == 'c'){
            cout << "Found it! Your number is " << mid << endl;
            break;
        } else if (response == 'h'){
            high = mid - 1;            
        } else if (response == 'l'){
            low = mid + 1;
        } else {
            cout << "Invalid input:" << endl;
        }
    }

    return 0;
}