#include <iostream>
#include <fstream>
#include <iomanip>
#include <string>

using namespace std;

int main(){
    const string FILE_NAME = "scores.dat";
    ifstream inFile(FILE_NAME, ios::in | ios::binary);

    if (!inFile.is_open()){
    cerr << "Can't open the file." << endl;
    return 1;
    }

    double score = 0.0;
    double sum =0.0;
    int count = 0;

    while(inFile.read(reinterpret_cast<char*>(&score), sizeof(double))){
        cout << score << endl;
        sum += score;
        count++;
    }

    inFile.close();

        if(count > 0){
        double average = sum / count;

        cout << fixed << setprecision(2);
        cout << "The average is " << average << endl;
    }else{
        cerr << "Something's wrong!" << endl;
    }
    return 0;
}