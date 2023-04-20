#include <iostream>
#include "Tasks.h"
using namespace std;

int main() {
    cout << "Welcome to the sticky notes app! Press: \n(1) Create Note\n(2) Delete Note\n(3) List Notes\n";

    Tasks task = getInput();

    

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
        __throw_invalid_argument("Not a number!");
    }
    if ( ( priority < 1) && ( priority > 3) ) {
        priority = -1;
    }

    Tasks task = Tasks(title, description, priority);

    return task;
}