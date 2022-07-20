#include "../include/branch.h"
#include <iostream>

std::string Branch::get_elfName() { return elfName; };

bool Branch::is_there_elf() { return elfName != "None"; }

void Branch::grow_branches(size_t inSize) {
    for (int i = 0; i < inSize; i++) {
        std::cout << "Enter a name of a local elf:" << std::endl;
        std::string name;
        std::cin >> name;
        Branch *branch = new Branch;
        branch->elfName = name;
        branch->parent = this;
        child.push_back(branch);
    }
}

Branch * Branch::find_elf(std::string inName) {
    if (this->elfName == inName)
        return this;
    if (this->child.size() != 0) {
        for (auto i: child) {
            Branch *found = i->find_elf(inName);
            if (found != nullptr)
                return found;
        }
        return nullptr;
    }
    return nullptr;
}

int Branch::get_number_neighbors() {
   int neighbors = 0;

    if (this->child.size() != 0) {
        for (auto i: this->child)
            neighbors += i->is_there_elf();
    }
    else
        if (this->parent->parent != nullptr) {
        neighbors += this->parent->is_there_elf();
        for (auto i: this->parent->child)
            neighbors += i->is_there_elf() && i != this;
    }
    return neighbors;
}
