#include <iostream>
#include <string>
using std::string;

class tasks {
    private:
    string _title = "NULL";
    string _description = "NULL";
    int _priority = 0;
    
    public:
        tasks(string title, string description, int priority)
        : _title(title), _description(description), _priority(priority)
    {}
        ~tasks();
};

tasks::~tasks() {}
