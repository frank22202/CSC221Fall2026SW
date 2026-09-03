#include <iostream>
#include <string>

void analyzeHighway(int number) {
    // Check for valid overall range (1 to 999, excluding multiples of 100)
    if (number <= 0 || number >= 1000 || number % 100 == 0) {
        std::cout << number << " is not a valid highway number.\n";
        return;
    }

    // Determine primary highway and highway type
    int primaryNumber = number % 100;
    bool isAuxiliary = (number >= 100);

    // Determine direction based on the primary highway number
    std::string direction = (primaryNumber % 2 == 1) ? "north/south" : "east/west";

    // Output results
    if (isAuxiliary) {
        std::cout << "I-" << number << " is an auxiliary highway, serving I-" 
                  << primaryNumber << ", which runs " << direction << ".\n";
    } else {
        std::cout << "I-" << number << " is a primary highway, running " 
                  << direction << ".\n";
    }
}

int main() {
    int highwayNumber;
    std::cout << "Enter a highway number: ";

    if (std::cin >> highwayNumber) {
        analyzeHighway(highwayNumber);
    } else {
        std::cout << "Invalid input. Please enter a valid integer.\n";
    }

    return 0;
}
