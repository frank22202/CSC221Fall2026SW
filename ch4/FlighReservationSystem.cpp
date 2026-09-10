#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    int choice = 0;
    
    // Set floating-point formatting for prices/seat output
    cout << fixed << setprecision(2);

    while (choice != 5) {
        // Display Menu System
        cout << "Press (1) to Book First Class Ticket\n";
        cout << "Press (2) to Book Economy Class Ticket\n";
        cout << "Press (3) to Check Baggage Fee\n";
        cout << "Press (4) to Upgrade Seat Class\n";
        cout << "Press (5) to Quit\n";
        cout << "Enter menu choice and hit [ENTER]> ";
        cin >> choice;

        switch (choice) {
            case 1: {
                int seats;
                cout << "Enter the number of First Class seats> ";
                cin >> seats;
                double total = seats * 450.00;
                cout << "Total cost for " << seats << " First Class seat(s) is $" << total << ".\n\n";
                break;
            }
            case 2: {
                int seats;
                cout << "Enter the number of Economy Class seats> ";
                cin >> seats;
                double total = seats * 150.00;
                cout << "Total cost for " << seats << " Economy Class seat(s) is $" << total << ".\n\n";
                break;
            }
            case 3: {
                int bags;
                cout << "Enter the number of checked bags> ";
                cin >> bags;
                // First bag $30, additional bags $45 each
                double fee = (bags > 0) ? 30.00 + (bags - 1) * 45.00 : 0.00;
                cout << "The total baggage fee for " << bags << " bag(s) is $" << fee << ".\n\n";
                break;
            }
            case 4: {
                int currentSeats;
                cout << "Enter the number of seats to upgrade to First Class> ";
                cin >> currentSeats;
                double upgradeFee = currentSeats * 200.00;
                cout << "The total upgrade fee is $" << upgradeFee << ".\n\n";
                break;
            }
            case 5:
                cout << "Goodbye\n";
                break;
                
            default:
                cout << "Invalid choice. Please try again.\n\n";
                break;
        }
    }

    return 0;
}