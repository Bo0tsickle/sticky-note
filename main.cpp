#include <iostream>
#include "Note.h"
#include "Extra.h"
using namespace std;


int main() {

    Note note = Note(getTitle(), getDescription(), getPriority());

    int input = getInput();
    if (input == -1) {
        cout << "Invalid input!";
        return 0;
    }

    if (input == 1) {
        if (note.m_priority == -1) {
            cout << "Priority should be a valid number between one and nine!\n";
            return 0;
        }
        else {
            note.WriteNoteToFile();
            cout << "Note Created!\n";
        }
    }
    else if (input == 2) {
        printNotes();
    }

    note.~Note();
    return 0;
}