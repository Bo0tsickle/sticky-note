#include <iostream>
#include "Tasks.h"
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

    cout << "Enter your priority: ";
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
    if ( ( priority < 1) || ( priority > 3) ) {
        priority = -1;
    }

    return priority;
}

int main() {
    cout << "Welcome to the sticky notes app! Press: \n(1) Create Note\n(2) Delete Note\n(3) List Notes\n";

    Tasks task = Tasks(getTitle(), getDescription(), getPriority());

    if (task.m_priority == -1) {
        cout << "Priority should be a valid number between one and nine!\n";
        return 0;
    }
    else {
        task.WriteTaskToFile();
        cout << "Note Created!\n";
    }

    task.~Tasks();
    return 0;
}