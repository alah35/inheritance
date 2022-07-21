#include "../include/employee.h"

Employee::Employee(int inId, std::string inName) {
    id = inId;
    std::string name = inName;
}

int Employee::get_id() { return id; }

void Employee::set_id(int inId) { id = inId; }

std::string Employee::get_name() { return name; }

void Employee::set_name(std::string inName) { name = inName; }
