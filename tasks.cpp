#include <iostream>
#include <string>
using std::string;

class Tasks {
    private:
        string _title = "NULL";
        string _description = "NULL";
        int _priority = 0;
    
    public:
        Tasks(string title, string description, int priority)
        : _title(title), _description(description), _priority(priority)
        {}
        void WriteTitleToFile        
        ~Tasks();
};

tasks::~Tasks() {}
