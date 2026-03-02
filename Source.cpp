// 01/28/26 Clock Project 
// Jordan Gales

#include <iostream>
#include "chadaClock.h"

using namespace std;

int main() {
    int hour, minute, second;
    int choice = 0;

    // Get initial time input
    cout << "Enter initial time (HH MM SS): ";
    cin >> hour >> minute >> second;

    // This is the program loop 
    while (choice != 4) {
        displayClocks(hour, minute, second);
        displayMenu();
        cout << "Choose an option: ";
        cin >> choice;

        switch (choice) {
        case 1:
            addHour(hour);
            break;
        case 2:
            addMinute(hour, minute);
            break;
        case 3:
            addSecond(hour, minute, second);
            break;
        case 4:
            cout << "\nExiting program...\n";
            break;
        default:
            cout << "\nInvalid option. Try again.\n";
        }
    }

    return 0;
}