#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    int iterations = 1000000; // More iterations = higher accuracy
    double pi = 0.0;
    double denominator = 1.0;
    double sign = 1.0;

    // Leibniz Series Calculation
    for (int i = 0; i < iterations; i++) {
        denominator = (2 * i) + 1; // Compute 1, 3, 5, 7 directly
        pi += sign * (4.0 / denominator);
        sign = -sign; // Alternate between + and -
    }

    // Display result with high precision
    cout << fixed << setprecision(10);
    cout << "Calculated Pi after " << iterations << " iterations: " << pi << endl;
    cout << "Actual Pi value (reference)           : 3.1415926535" << endl;

    return 0;
}