#include <iostream>
#include <vector>
using namespace std;

void selectionSort(vector<double>& vec){
    int n = vec.size();
    double temp = 0;

    for(int i=0;i < n - 1;i++){
        int minIdx = i;
        for(int j=i+1;j < n;j++){
            if(vec[j] < vec[minIdx] )
                minIdx = j;
        }
        if(minIdx != i){
            temp = vec[i];
            vec[i] = vec[minIdx];
            vec[minIdx] = temp;
        }
    }
}

int main(){
    vector<double> scores = {68.32, 99.68, 100, 52.87, 71.25};

    for (double score : scores) cout << score << " ";
    cout << "\n";
    selectionSort(scores);
        for (double score : scores) cout << score << " ";
    cout << "\n";

    return 0;
}