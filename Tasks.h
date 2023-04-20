#pragma once
#include <string>

class Tasks {
    public: 
        std::string m_title;
        std::string m_description;
        int m_priority;

        Tasks(std::string title, std::string description, int priority);
        void SetTasks(std::string title, std::string description, int priority);
        void WriteTaskToFile();
};