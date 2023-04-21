#include <iostream>
#include "other.h"
using namespace std;

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