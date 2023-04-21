#include <iostream>
#include <fstream>
#include <string>
#include "Extra.h"
using namespace std;

void printNotes() {
    string line;
    ifstream save;
    save.open( "task.txt" );
    while ( std::getline(save, line) ) {
        cout << line << "\n";
    }
}

int getInput() {
    string tempInput;
    int input;

    cout << "Welcome to the sticky notes app! Press: \n(1) Create Note\n(2) Delete Note\n(3) List Notes\n";
    cin >> tempInput;
    
    // convert to an integer
    // also implement error checking so
    // invalid input is set to -1
    // main function checks this and replies later on
    try {
        input = stoi( tempInput );
    }
    catch( exception ) {
        input = -1;
    }
    if ( ( input < 1) || ( input > 3 )) {
        input = -1;
    }

    return input;
}

string getTitle() {
    string title;

    cout << "Enter your title: ";
    cin >> title;

    return title;
}

string getDescription() {
    string description;

    cout << "Enter your description: ";
    cin >> description;

    return description;
}



int getPriority() {
    string tempPriority;
    int priority;

    cout << "Enter your priority as a number from 1 to 9: ";
    cin >> tempPriority;
    
    // convert string priority to an integer
    // also implement error checking so
    // invalid priority is set to -1
    // main function checks this and replies later on
    try {
        priority = stoi( tempPriority );
    }
    catch( exception ) {
        priority = -1;
    }
    if ( ( priority < 1) || ( priority > 9 )) {
        priority = -1;
    }

    return priority;
}