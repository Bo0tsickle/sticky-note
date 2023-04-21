#include <iostream>
#include "Note.h"
#include "Extra.h"
using namespace std;


int main() {
    int input = getInput();
    if (input == -1) {
        cout << "Invalid input!";
        return 0;
    }
    if (input == 1) {
        Note note = Note(getTitle(), getDescription(), getPriority());
        if (note.m_priority == -1) {
            cout << "Priority should be a valid number between one and nine!\n";
            return 0;
        }
        else {
            note.WriteNoteToFile();
            cout << "Note Created!\n";
        }
        note.~Note();
    }
    else if (input == 2) {
        DeleteNote();
    }
    else if (input == 3) {
        printNotes();
    }
    else {
        cout << "Invalid input!";
    }

    return 0;
}