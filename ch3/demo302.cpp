#include <iostream>
#include <iomanip>  // Needed for std::fixed and std::setprecision
#include <typeinfo> // Needed for typeid
using namespace std;
int main() {
    // 1. Initial integer declaration
    // score = 65
    double score = 65.0; 
    score = 65.0 / 3.0;

    int score1 = 65 / 3; 
    cout.setf(ios::fixed);
    std::cout << cout.precision(5) << score << "\n";

    // 5. Print integer score1
    // print(score1)
    std::cout << score1 << "\n";

    return 0;
}