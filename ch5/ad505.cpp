#include <iostream>
#include <fstream>
#include <iomanip>
#include <string>

using namespace std;

int main() {
    const string FILE_PATH = "scores.bin";

    // 1. Open file stream in binary read mode
    ifstream inFile(FILE_PATH, ios::in | ios::binary);

    if (!inFile.is_open()) {
        cerr << "Error opening binary file: " << FILE_PATH << endl;
        return 1;
    }

    double score = 0.0;
    double sum = 0.0;
    int count = 0;

    // 2. Read exact byte blocks directly into 'score' until EOF
    while (inFile.read(reinterpret_cast<char*>(&score), sizeof(double))) {
        cout << "Read Score #" << (count + 1) << ": " << score << endl;
        sum += score;
        count++;
    }

    inFile.close();

    // 3. Calculate and print average
    if (count > 0) {
        double average = sum / count;

        cout << "\n--- Binary File Summary ---" << endl;
        cout << "Total Scores Read: " << count << endl;
        cout << "Sum of Scores:     " << sum << endl;
        
        cout << fixed << setprecision(2);
        cout << "Average Score:     " << average << endl;
    } else {
        cout << "\nThe file '" << FILE_PATH << "' contained no scores." << endl;
    }

    return 0;
}