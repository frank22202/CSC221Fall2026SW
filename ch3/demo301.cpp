#include <iostream>
#include <bitset> // Required for binary formatting
#include <format>
using namespace std;

int main() {

    // 1. Print Emojis (Requires a terminal that supports UTF-8)
    cout << "\U0001f600\n";
    cout << "\U0001f601\n";
    cout << "\U0001f602\n";

    // 2. Binary conversion (using std::format)
     std::cout << std::format("{:b}\n", 65);
     std::cout << std::format("{:x}\n", 61);
     std::cout << std::format("{:o}\n", 61);

    // 3. Hexadecimal and Octal conversions (using stream manipulators)
    std::cout << "0x" << std::hex << 61 << "\n";
    std::cout << "0o" << std::oct << 61 << "\n";

    // Reset stream back to standard base-10 (decimal)
    std::cout << std::dec;

    std::cout << char(65) << endl;
    std::cout << char(0x41) << endl;
    std::cout << char(0b01000001) << endl;
    std::cout << int('A') << endl;

    // 4. Multi-line Triple-Quoted String (using C++ Raw String Literals R"(...)")
    std::cout << R"(This
        is a test
        thanks
)";

    return 0;
}
