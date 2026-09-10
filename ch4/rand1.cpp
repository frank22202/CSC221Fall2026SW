#include <iostream>
#include <cstdlib> // For rand() and srand()

int main() {
    // Set a fixed seed (e.g., 42)
    std::srand(42); 

    // Every time you run this program, these exact numbers will appear
    for (int i = 0; i < 5; ++i) {
        int dice = (std::rand() % 6) + 1;
        std::cout << dice << " ";
    }

    return 0;
}