#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main(){
    const string FILE_NAME = "scores.dat";
    ofstream outFile(FILE_NAME, ios::out | ios::binary);

    if(!outFile.is_open()){
        cerr << "Can't open the file." << endl;
        return 1;
    }

    double score = 0.0;
    int count = 0;   

    do{
        cout << "Enter scores(-1 to exit): ";
        cin >> score;

        if(score >= 0 && score <= 100){
            outFile.write(reinterpret_cast<const char*>(&score), sizeof(double));
            count++;
        }
    }while(score >= 0 && score <= 100);
    
    outFile.close();
    return 0;
}