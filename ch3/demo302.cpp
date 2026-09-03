/* Score coversion from number to the letter grade
   Date: 9/2/2026
   Auther: Yufan Pan
   Ticket#: 12345
   */
#include <iostream>
using namespace std;

int main(){
    int score;
    cout << "Enter the score:";
    cin >> score;

    if(score < 0 || score > 100){
        cout << "Invalid score" << endl;
    }else{
        if(score < 60){
            cout << "F" << endl;
        }else if(score < 70){
            cout << "D" << endl;
        }else if(score < 80){
            cout << "C" << endl;
        }else if(score < 90){
            cout << "B" << endl;
        }else{
            cout << "A" << endl;
        }
    }
}