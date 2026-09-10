#include <iostream>
#include <iomanip>
#include <cmath> // Required for pow()

using namespace std;

int main() {
    double timeInHours = -1.0;
    double altitude = 0.0;

    cout << "=== WEATHER BALLOON ALTITUDE CALCULATOR ===\n\n";

    // Input loop with validation (Must be between 0 and 48 hours)
    while (timeInHours < 0 || timeInHours > 48) {
        cout << "Enter time in hours (0 to 48): ";
        cin >> timeInHours;

        if (timeInHours < 0 || timeInHours > 48) {
            cout << "Invalid input. Time must be between 0 and 48 hours.\n\n";
        }
    }

    // Calculation using pow(base, exponent)
    altitude = (-0.12 * pow(timeInHours, 4)) 
             + (12.0 * pow(timeInHours, 3)) 
             - (380.0 * pow(timeInHours, 2)) 
             + (4100.0 * timeInHours) 
             + 220.0;

    // Output single calculation result
    cout << fixed << setprecision(2);
    cout << "\nAt " << timeInHours << " hours, the balloon's altitude is " 
         << altitude << " meters.\n\n";

    // Print hourly log directly in a for loop using pow()
    cout << "--- Hourly Altitude Log ---\n";
    cout << setw(10) << "Hour (t)" << setw(20) << "Altitude (m)\n";
    cout << "------------------------------\n";

    for (int t = 0; t <= 48; t += 6) { // Increments by 6 hours for clean display
        double hourlyAltitude = (-0.12 * pow(t, 4)) 
                              + (12.0 * pow(t, 3)) 
                              - (380.0 * pow(t, 2)) 
                              + (4100.0 * t) 
                              + 220.0;

        cout << setw(10) << t << setw(20) << hourlyAltitude << "\n";
    }

    return 0;
}