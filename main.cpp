#include <iostream>
#include "Tasks.h"
using namespace std;

int main() {
    cout << "Welcome to the sticky notes app! Press: \n(1) Create Note\n(2) Delete Note\n(3) List Notes\n";

    Tasks task = getInput();

    if (task.m_priority == -1) {
        cout << "Priority should be a number!";
        return 0;
    }
    else {
        task.WriteTaskToFile();
        cout << "Note Created!";
    }

    task.~Tasks();
    return 0;
}

Tasks getInput() {
    string title;
    string description;
    string tempPriority;
    int priority;

    cout << "Enter your title: ";
    cin >> title;
    cout << "Enter your description: ";
    cin >> description;
    cout << "Enter your priority";
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
    if ( ( priority < 1) && ( priority > 3) ) {
        priority = -1;
    }

    Tasks task = Tasks(title, description, priority);

    return task;
}