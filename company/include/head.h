#pragma once
#include "employee.h"

class Head : public Employee{
    private:
        int order;
    public:
        Head();
        int give_order();
};
