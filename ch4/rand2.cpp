#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    std::cout << "RAND_MAX on this system is: " << RAND_MAX << "\n";
    
  //  srand(time(0));
srand(2);
    for (int i = 0; i < 100; i++) {
        int dice = (rand() % 6) + 1;
        
        cout << dice << " ";

        // Every 10 numbers, insert a line break
        if ((i + 1) % 10 == 0) {
            cout << "\n";
        }
    }

    return 0;
}