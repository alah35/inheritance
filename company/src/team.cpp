#include "../include/team.h"
#include <iostream>

Team::Team() {}

Team::Team(int inId, size_t inWorkersSize) {
    manager.set_id(inId + 1);
    for (int i = 0; i < inWorkersSize; i++) {
        Worker worker(inId + 1 + manager.get_id());
        workers.push_back(worker);
    }
}

void Team::set_order(int inOrder) { this->manager.set_order(inOrder); }

void Team::give_tasks() {
    int taskCount = this->manager.get_taskCount(workers.size());
    for (int i = 0; i < workers.size() && taskCount != 0; i++) {
        if (!workers[i].has_task()) {
            workers[i].set_task(std::rand() % 3 + 65); // gives to worker a num of task which is the ASCII code A, B or C
            taskCount--;
        }
    }
}

int Team::free_workers() {
    int counter = 0;
    for (auto i: this->workers)
        counter += !i.has_task();
    return counter;
}

