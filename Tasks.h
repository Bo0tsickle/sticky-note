#pragma once
#include <string>

class Tasks {
    private: 
        std::string _title = "NULL";
        std::string _description = "NULL";
        int _priority = 0;
    
    public: 
        Tasks(std::string title, std::string description, int priority);
        void SetTasks(std::string title, std::string description, int priority);
        void WriteTaskToFile();
};

#pragma endregion