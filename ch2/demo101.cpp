#include<iostream>
#include<cctype>

    int main(){
        int number1{23};
        double number2{65.5};
        char ch{'h'};
        
        std::cout << isdigit(ch) << "\n";
        std::cout << --number1; 
        // std::cout << number2; /
}