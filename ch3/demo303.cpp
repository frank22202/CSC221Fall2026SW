/* Score coversion from number to the letter grade
   Date: 9/2/2026
   Auther: Yufan Pan
   Ticket#: 12346
   */
#include <iostream>
using namespace std;

int main(){
    int score;
    cout << "Enter the score:";
    cin >> score;

    switch(score/10){
        case 0: case 1: case 2: case 3: case 4: case 5:
            cout << "F" << endl;
            break;
        case 6:
            cout << "D" << endl;
            break;
        case 7:
            cout << "C" << endl;
            break;
        case 8:
            cout << "B" << endl;
            break;
        case 9:
            cout << "A" << endl;
            break;
        case 10:
            cout << "A" << endl;
            break;
        default:
            cout << "Invalid score!" << endl;
    }

}