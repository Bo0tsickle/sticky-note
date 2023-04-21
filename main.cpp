#include <iostream>
#include "Tasks.h"
#include "other.h"
using namespace std;


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