#include <iostream>

int main() {
    int low = 1;
    int high = 20;
    char response;

    std::cout << "Think of a number between 1 and 20!\n";
    std::cout << "Enter 'h' if the guess is too high, 'l' if too low, and 'c' if correct.\n\n";

    while (low <= high) {
        // Calculate midpoint using standard binary search logic
        int mid = low + (high - low) / 2;

        std::cout << "Is your number " << mid << "? (h/l/c): ";
        std::cin >> response;

        if (response == 'c' || response == 'C') {
            std::cout << "\nFound it! Your number is " << mid << ".\n";
            break;
        } else if (response == 'h' || response == 'H') {
            // Target is smaller, discard upper half
            high = mid - 1;
        } else if (response == 'l' || response == 'L') {
            // Target is larger, discard lower half
            low = mid + 1;
        } else {
            std::cout << "Invalid input! Please enter 'h', 'l', or 'c'.\n";
        }
    }

    return 0;
}