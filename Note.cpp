#include <iostream>
#include <fstream>
#include <string>
#include "Note.h"
using namespace std;

Note::Note(string title, string description, int priority) {
    Note::SetNote(title, description, priority);
}

void Note::SetNote(string title, string description, int priority) {
    Note::m_title = title;
    Note::m_description = description ;
    Note::m_priority = priority;
}
        
void Note::WriteNoteToFile() {
    ofstream saveFile;
    saveFile.open("notes.txt");
    saveFile << "Title: " << Note::m_title << "\nDescription: " << Note::m_description << "\nPriority: " << Note::m_priority << "\n\n";
    saveFile.close();
}

void Note::DeleteNote(string title) {
    string noteToDelete;
    string line;
    cout << "Please enter the title of the note you wish to remove: ";
    cin >> noteToDelete;

    fstream saveFile;
    fstream temp;
    temp.open("temp.txt");
    saveFile.open("notes.txt");
    while (getline(saveFile, line)) {
        line.replace(line.find(noteToDelete), noteToDelete.length(), "");
        temp << line << endl;
    }

    temp.close();
    saveFile.close();

    remove("saveFile.txt");
    rename("temp.txt", "notes.txt");
}