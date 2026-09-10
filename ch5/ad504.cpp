#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {
    const string FILE_PATH = "scores.bin";
    const double SENTINEL = -1.0;

    // 1. Open file stream in binary write mode
    ofstream outFile(FILE_PATH, ios::out | ios::binary);

    if (!outFile.is_open()) {
        cerr << "Error opening binary file: " << FILE_PATH << endl;
        return 1;
    }

    double score = 0.0;
    int count = 0;

    cout << "Enter exam scores (enter " << SENTINEL << " to stop):" << endl;

    // 2. Sentinel-controlled do-while loop
    do {
        cout << "Enter score: ";
        cin >> score;

        // Guard condition: Do not write the sentinel value to disk
        if (score != SENTINEL) {
            // Write raw bytes of 'score' to the binary file
            outFile.write(reinterpret_cast<const char*>(&score), sizeof(double));
            count++;
        }

    } while (score != SENTINEL);

    outFile.close();

    cout << "\nFinished! Saved " << count << " scores as binary data to '" << FILE_PATH << "'." << endl;

    return 0;
}