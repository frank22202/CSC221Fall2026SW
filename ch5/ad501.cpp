#include <iostream>
#include <fstream>

using namespace std;

int main() {
    // Relative Path: Looks for 'scores.txt' in the project's current working directory
    const string FILE_PATH = "scores.txt";
    // const string FILE_PATH = "data/scores.txt";  // Subfolder 'data' inside working dir
    // const string FILE_PATH = "../scores.txt";    // Parent directory one level up
    ofstream outFile(FILE_PATH);
    //ofstream outFile(FILE_PATH, ios::app); out, in, app, trunc, binary, ate
    // Opens 'log.txt' for writing and appends new content to the end
    //ofstream outFile("log.txt", ios::out | ios::app);
    // Opens 'data.bin' for both reading and writing in binary mode
    //fstream file("data.bin", ios::in | ios::out | ios::binary);

    if (!outFile.is_open()) {
        cerr << "Error opening file." << endl;
        return 1;
    }

    double score = 0.0;
    int count = 0;

    cout << "Enter exam scores (enter -1 when finished):" << endl;

    while (true) {
        cout << "Enter score: ";
        cin >> score;

        // Break out of the loop if sentinel value is entered
        if (score == -1) {
            break;
        }

        // Write score to file
        outFile << score << endl;
        count++;
    }

    outFile.close();
    cout << count << " scores written to file." << endl;

    return 0;
}