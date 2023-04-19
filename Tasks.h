#pragma once
#include <string>

class Tasks {
    private: 
        std::string m_title;
        std::string m_description;
        /// @brief 
        int m_priority;
    
    public: 
        Tasks(std::string title, std::string description, int priority);
        void SetTasks(std::string title, std::string description, int priority);
        void WriteTaskToFile();
};