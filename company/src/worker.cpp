#include "../include/worker.h"
#include <iostream>

Worker::Worker() {
    id = task = 0;
    std::cout << "Enter a name of the worker:" << std::endl;
    std::cin >> name;
}

Worker::Worker(int inId) {
    id = inId;
    task = 0;
    std::cout << "Enter a name of the worker:" << std::endl;
    std::cin >> name;
}

bool Worker::has_task() { return task; }

void Worker::set_task(int inTask) { 
    task = inTask; 
    std::cout << "Worker: " << this->name << " received a task: "
        << (char)task << std::endl;
}



