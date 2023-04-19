#include <iostream>
#include <fstream>
#include <string>
#include "Tasks.h"
using std::string;

Tasks::Tasks(std::string title, std::string description, int priority) {
    SetTasks(title, description, priority);
}

void Tasks::SetTasks(string title, string description, int priority) {
    _title = title;
    _description = description ;
    _priority = priority;
}
        
void Tasks::WriteTaskToFile() {
    std::ofstream saveFile;
    saveFile.open("task.txt");
    saveFile << "test";
    saveFile.close();
}

Tasks::~Tasks() {}