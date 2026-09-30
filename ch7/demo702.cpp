#include <iostream>
using namespace std;

const int ARRAY_SIZE = 5;
void printArray(const int arr[], int size){
    for(int i = 0; i<size;i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int scores[] = {98, 89, 100 , 77, 54};
    cout << "before: " << scores[0] << endl;
    int size_arr = std::size(scores); 
    printArray(scores, size_arr);
    cout << "after: " << scores[0] << endl;
}