#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main(){
    double pi = 0.0;
    double denominator = 1.0;
    double sign = 1.0;

    for(int i = 0;i < 1'000'000; i++){
        denominator = (2 * i) + 1;
        pi += sign * (4.0 / denominator);
        sign = -sign;
    }

    cout << fixed << setprecision(15);
    cout << pi << endl;
    cout << M_PI  << endl;
}