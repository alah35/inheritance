#pragma once
#include <vector>
#include "manager.h"
#include "worker.h"

class Team {
    private:
        Manager manager;
        std::vector<Worker> workers;

    public:
        Team();
        Team(int inId, size_t inWorkersSize);
        void set_order(int inOrder);
        void give_tasks(); // gives tasks to workers in the team
        int free_workers(); // returns free workers in the team
};
