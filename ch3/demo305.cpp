#include <iostream>
#include <random>
#include <vector>

int main() {
    // Set up C++ random number generator
    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<int> dist(1, 6);

    // Roll the dice
    // dice1 = random.randint(1, 6)
    int dice1 = dist(gen);

    // Create a vector of size 7 initialized to 0
    // counter = [0] * 7
    std::vector<int> counter(7, 0);

    // if-elif-else logic
    if (dice1 == 1) {
        counter[1] += 1;
    } else if (dice1 == 2) {
        counter[2] += 1;
    } else if (dice1 == 3) {
        counter[3] += 1;
    } else if (dice1 == 4) {
        counter[4] += 1;
    } else if (dice1 == 5) {
        counter[5] += 1;
    } else {
        counter[6] += 1;
    }

    // Print values from index 1 to 6
    // for i in range(1, 7):
    for (int i = 1; i < 7; ++i) {
        std::cout << counter[i] << "\n";
    }

    return 0;
}