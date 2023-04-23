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
        
void Note::WriteNoteToFile(Note note) {
    ofstream saveFile(note.m_title + ".txt");
    saveFile << "Title: " << Note::m_title << "\nDescription: " << Note::m_description << "\nPriority: " << Note::m_priority << "\n\n";
    saveFile.close();
}

