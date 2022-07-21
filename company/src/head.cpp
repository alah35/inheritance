#include "../include/head.h"
#include <iostream>

Head::Head() {
    id = 0; //head always has id = 0
    order = 0;
    std::cout << "Enter a name of the head:" << std::endl;
    std::cin >> name;
}

int Head::give_order() {
    std::cout << "Enter an order:" << std::endl;
    std::cin >> this->order;
    return this->order;
}
