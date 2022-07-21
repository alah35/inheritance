#pragma once
#include "employee.h"

class Manager : public Employee {
    private:
    int inOrder;
    int outOrder;
    
    public:
    Manager();
    void set_order(int inInOrder);
    int get_taskCount(size_t inWorkersSize);

};
