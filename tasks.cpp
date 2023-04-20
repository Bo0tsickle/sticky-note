#include <iostream>
#include <fstream>
#include <string>
#include "Tasks.h"
using std::string;

Tasks::Tasks(std::string title, std::string description, int priority) {
    Tasks::SetTasks(title, description, priority);
}

void Tasks::SetTasks(string title, string description, int priority) {
    Tasks::m_title = title;
    Tasks::m_description = description ;
    Tasks::m_priority = priority;
}
        
void Tasks::WriteTaskToFile() {
    std::ofstream saveFile;
    saveFile.open("task.txt");
    saveFile << "title: " << Tasks::m_title << "\ndes: " << Tasks::m_description << "\npriority: " << Tasks::m_priority << "\n\n";
    saveFile.close();
}