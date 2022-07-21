#pragma once
#include <string>

class Employee {
    protected:
        int id;
        std::string name;

    public:
        Employee(int inId = 0, std::string inName = "None"); //default constructor
        int get_id();
        void set_id(int inId);
        std::string get_name();
        void set_name(std::string inName);
};
