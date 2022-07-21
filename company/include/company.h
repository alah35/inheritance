#pragma once
#include "employee.h"
#include "team.h"
#include "head.h"
#include "vector"

class Company {
    private:
        Head head;
        int currentOrder;
        std::vector<Team> teams;

    public:
        Company(size_t teamsSize = 0, size_t workersSize = 0);
        void give_order();
        int free_workers(); //return number of workers with task = 0
};
