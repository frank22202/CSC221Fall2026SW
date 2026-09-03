#include <iostream>
using namespace std;

int main(){
    double score{65};
    score = 65.0 / 3.0;

    int score1 = 65.0 / 3.0;
    cout.setf(ios::fixed);
    cout.precision(5);
    cout << score << endl;
    cout << score1;
}