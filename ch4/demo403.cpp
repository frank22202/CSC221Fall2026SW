#include <iostream>

using namespace std;

int main(){
    int score{0}, total{0}, counter{0};
    do{
        cout << "Enter the score(-1 to quit): ";
        cin >> score;  
        if(score < 100 && score >= 0){
            total += score;
            counter++;
        }
 
    }while(score < 100 && score >= 0);
    cout << "The average is: " << (double)total / counter << endl;
}