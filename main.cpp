#include <iostream>
#include "Tasks.h"
using std::cout;

int main() {
    cout << "Welcome to the sticky notes app! Press: \n(1) Create Note\n(2) Delete Note\n(3) List Notes";
    Tasks task = Tasks("deez", "nuts", 69);
    task.WriteTaskToFile();
    return 0;
}