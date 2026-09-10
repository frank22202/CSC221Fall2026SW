#include <iostream>
#include <fstream>  // Required for ifstream
#include <iomanip>  // Required for setprecision
#include <string>

using namespace std;

int main() {
    // 1. Open the input file stream
    // Relative Path: Looks for 'scores.txt' in the project's current working directory
    const string FILE_PATH = "scores.txt";
    // const string FILE_PATH = "data/scores.txt";  // Subfolder 'data' inside working dir
    // const string FILE_PATH = "../scores.txt";    // Parent directory one level up
    ifstream inFile(FILE_PATH);

    // Check if the file exists and opened successfully
    if (!inFile.is_open()) {
        cerr << "Error: Could not open 'scores.txt'. Make sure the file exists." << endl;
        return 1;
    }

    double score = 0.0;
    double sum = 0.0;
    int count = 0;

    // 2. Read scores sequentially until the end of the file (EOF)
    while (inFile >> score) {
        sum += score;
        count++;
    }

    // 3. Close the file stream
    inFile.close();

    // 4. Calculate and display the results
    if (count > 0) {
        double average = sum / count;

        cout << "--- Score Summary ---" << endl;
        cout << "Total Scores Read: " << count << endl;
        cout << "Sum of Scores:     " << sum << endl;
        
        // Format output to 2 decimal places
        cout << fixed << setprecision(2);
        cout << "Average Score:     " << average << endl;
    } else {
        cout << "The file 'scores.txt' was empty. No scores to process." << endl;
    }

    return 0;
}