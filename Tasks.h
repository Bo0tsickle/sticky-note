#pragma once
#include <string>

class Tasks {
    private: 
        std::string m_title = "NULL";
        std::string m_description = "NULL";
        int m_priority = 0;
    
    public: 
        Tasks(std::string title, std::string description, int priority);
        void SetTasks(std::string title, std::string description, int priority);
        void WriteTaskToFile();
};

#pragma endregion