#include <iostream>

using namespace std;

int main(){
    int score{0}, total{0}, counter{0};
    cout << "Enter the score(-1 to quit): ";
    cin >> score;
  
    while(score != -1){
        total += score;
        counter++;
        cout << "Enter the score(-1 to quit): ";
        cin >> score;
    }
    cout << "The average is: " << (double)total / counter << endl;
}   


