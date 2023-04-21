#pragma once
#include <string>

class Note {
    public: 
        std::string m_title;
        std::string m_description;
        int m_priority;

        Note(std::string title, std::string description, int priority);
        void SetNote(std::string title, std::string description, int priority);
        void WriteNoteToFile();
        void DeleteNote(std::string title);
};