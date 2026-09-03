#include <iostream>
#include <bitset>
using namespace std;

int main(){
    cout << char(65) << endl;
    cout << char(66) << endl;

    cout << "\U0001f600\n";
    cout << "\U0001f601\n";
    cout << "\U0001f602\n";

    cout << bitset<8>(65) << endl;
    cout << std::hex << 61 << endl;
    cout << std::oct << 61 << endl;
    cout << std::dec;

    cout << char(65);
    cout << char(0x41);
    cout << char(0b01000001);
    cout << int('A');
}