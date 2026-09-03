#include <iostream>
#include <string>

int main() {
    int number;
    std::cout << "Enter a highway number: ";

    if (!(std::cin >> number)) {
        std::cout << "Invalid input. Please enter a valid integer.\n";
        return 1;
    }

    // Check for valid overall range (1 to 999, excluding multiples of 100 like 200)
    if (number <= 0 || number >= 1000 || number % 100 == 0) {
        std::cout << number << " is not a valid highway number.\n";
        return 0;
    }

    // Extract the primary highway (rightmost two digits) and determine direction
    int primaryNumber = number % 100;
    std::string direction = (primaryNumber % 2 != 0) ? "north/south" : "east/west";

    // Print result based on primary vs auxiliary
    if (number >= 100) {
        std::cout << "I-" << number << " is an auxiliary highway, serving I-" 
                  << primaryNumber << ", which runs " << direction << ".\n";
    } else {
        std::cout << "I-" << number << " is a primary highway, running " 
                  << direction << ".\n";
    }

    return 0;
}
