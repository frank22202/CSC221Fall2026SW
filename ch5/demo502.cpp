#include <iostream>
#include <fstream>

using namespace std;

int main(){
    const string FILE_NAME = "scores.txt";
    ofstream outFile(FILE_NAME, ios::app);

    if(!outFile.is_open()){
        cerr << "Can't open the file." << endl;
        return 1;
    }

    double score = 0.0;
    int count = 0;

    while(true){
        cout << "Enter score: ";
        cin >> score;

        if(score < 0 || score > 100){
            break;
        }

        outFile << score << endl;
        count++;
    }

    outFile.close();
    cout << count << " scores written to the file." << endl;

    return 0;
}