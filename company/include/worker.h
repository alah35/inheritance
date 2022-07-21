#pragma once
#include "employee.h"

class Worker :public Employee {
    private:
        int task;

    public:
        Worker();
        Worker(int inId);
        bool has_task();
        void set_task(int inTask);
};
