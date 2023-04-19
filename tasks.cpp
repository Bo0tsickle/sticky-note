#include <iostream>
#include <fstream>
#include <string>
#include "Tasks.h"
using std::string;

tasks::~Tasks() {}

Tasks(string title, string description, int priority) {

}

void SetStuff(string title, string description, int priority) {
    _title = title;
    _description = description 
    _priority = priority
}
        
void WriteTaskToFile() {
    ofstream saveFile;
    saveFile.open("task.txt");
    saveFile.write("test");
    saveFile.close();
}