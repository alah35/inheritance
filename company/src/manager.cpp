#include "../include/manager.h"
#include <iostream>

Manager::Manager() {
    id = 1;
    std::cout << "Enter a name of the manager:" << std::endl;
    std::cin >> name;
    inOrder = outOrder = 0;
}

void Manager::set_order(int inInOrder) { 
    inOrder = inInOrder; 
    outOrder = inInOrder + id;
    std::cout << "Manager " << this->name << " received an order" << std::endl;
}

int Manager::get_taskCount(size_t inWorkersSize) {
    std::srand(outOrder);
    return std::rand() % inWorkersSize + 1;
}



