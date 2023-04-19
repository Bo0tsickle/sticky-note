#include <iostream>
#include <fstream>
#include <string>
#include "Tasks.h"
using std::string;

Tasks::Tasks(std::string title, std::string description, int priority) {
    SetTasks(title, description, priority);
}

void Tasks::SetTasks(string title, string description, int priority) {
    m_title = title;
    m_description = description ;
    m_priority = priority;
}
        
void Tasks::WriteTaskToFile() {
    std::ofstream saveFile;
    saveFile.open("task.txt");
    saveFile << "test";
    saveFile.close();
}

Tasks::~Tasks() {}