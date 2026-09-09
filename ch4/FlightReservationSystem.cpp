#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    int choice{0};
    cout << fixed << setprecision(5);

    while (choice != 5){
        cout << "Press (1) to Book First Class Ticket\n";
        cout << "Press (2) to Book Economy Class Ticket\n";
        cout << "Press (3) to Check Baggage Fee\n";
        cout << "Press (4) to Upgrade Seat Class\n";
        cout << "Press (5) to Quit\n";
        cin >> choice;

        switch (choice){
            case 1:{
                int seats;
                cout << "Enter the number of First Class seats> ";
                cin >> seats;
                double total = seats * 450.00;
                cout << "Total cost for" << seats << " First Class seat(s) is $" <<
                total << ".\n";
                break;
            }
            case 2:{
                int seats;
                cout << "Enter the number of Economy Class seats> ";
                cin >> seats;
                double total = seats * 150.00;
                cout << "Total cost for" << seats << " Economy Class seat(s) is $" <<
                total << ".\n";
                break;
            }
            case 3:{
                int bags;
                cout << "Enter the number of checked bags> ";
                cin >> bags;
                double total = 0.0;
                if (bags == 1){
                    total = 30.00;
                }else{
                    total = 30.00 + (bags - 1) * 45.00;
                }
                cout << "Total baggages fee for " << bags << "is $" << total << ".\n";
                break;
            }
            case 4:{
                // will work on this 9/10
                break;
            }
            case 5:{
                cout << "Goodbye\n";
                break;
            }
            default:
                cout << "Invalid choice!";
        }
    }

    return 0;
}