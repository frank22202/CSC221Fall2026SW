#include <iostream>

int main() {
    std::cout << "Printing even numbers between 1 and 10:\n";

    for (int i = 1; i <= 10; ++i) {
        if (i % 2 != 0) {
            continue; // Skip odd numbers; jump straight to ++i
        }
        std::cout << i << " ";
    }
    
    std::cout << "\n";
    return 0;
}