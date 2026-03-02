#include <iostream>
#include <iomanip>
#include "chadaClock.h"

using namespace std;


// This displays the 12-hour clock

void displayClock12(int hour, int minute, int second) {
    string period = (hour >= 12) ? "PM" : "AM";
    int displayHour = hour % 12;

    if (displayHour == 0) {
        displayHour = 12;
    }

    cout << setw(2) << setfill('0') << displayHour << ":"
        << setw(2) << setfill('0') << minute << ":"
        << setw(2) << setfill('0') << second << " " << period;
}


// This displays the 24-hour clock

void displayClock24(int hour, int minute, int second) {
    cout << setw(2) << setfill('0') << hour << ":"
        << setw(2) << setfill('0') << minute << ":"
        << setw(2) << setfill('0') << second;
}


// This one displays both clocks 

void displayClocks(int hour, int minute, int second) {
    cout << "\n**************************\n";
    cout << "*     12-Hour Clock      *\n";
    cout << "*     ";
    displayClock12(hour, minute, second);
    cout << "        *\n";
    cout << "**************************\n";

    cout << "**************************\n";
    cout << "*     24-Hour Clock      *\n";
    cout << "*     ";
    displayClock24(hour, minute, second);
    cout << "           *\n";
    cout << "**************************\n";
}


// This displays the user menu

void displayMenu() {
    cout << "\nMenu\n";
    cout << "1 - Add One Hour\n";
    cout << "2 - Add One Minute\n";
    cout << "3 - Add One Second\n";
    cout << "4 - Exit Program\n";
}


// This is how we add one hour

void addHour(int& hour) {
    hour = (hour + 1) % 24;
}


// This is how we add one minute

void addMinute(int& hour, int& minute) {
    minute++;
    if (minute == 60) {
        minute = 0;
        addHour(hour);
    }
}

// This is how we add one second

void addSecond(int& hour, int& minute, int& second) {
    second++;
    if (second == 60) {
        second = 0;
        addMinute(hour, minute);
    }
}