#include <iostream>
#include <cmath>    // Provides std::log, std::log10, std::pow, std::floor
#include <numbers>  // Provides std::numbers::pi and std::numbers::e (C++20 onwards)
using namespace std;

const double PI = std::acos(-1.0);
const double E  = std::exp(1.0);

int main() {
    // 1. Math constants (C++20 std::numbers namespace)
    // print(math.pi)
    // print(math.e)
    std::cout << std::numbers::pi << "\n";
    std::cout << std::numbers::e << "\n";
    std::cout << PI << "\n";
    std::cout << E << "\n";

    // 2. Base-10 logarithms

    std::cout << std::log10(10) << "\n";
    std::cout << std::log10(1000) << "\n";
    std::cout << std::log10(1'000'000) << "\n";
    std::cout << std::log2(1'000'000'000) << "\n";

    // 3. Power function
    // print(math.pow(2, 3))
    std::cout << std::pow(2, 3) << "\n";

    // 4. Floor rounding
    // print(math.floor(3.99))
    std::cout << std::floor(3.99) << "\n";

    return 0;
}