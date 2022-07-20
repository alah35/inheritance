#include <iostream>
#include "../include/branch.h"

int main() {
    std::vector<Branch*> forest;
    for (int i = 0; i < 5; i++) {
        Branch *tree = new Branch;
        tree->grow_branches(std::rand() % 3 + 3);
        for (int j = 0; j < tree->child.size(); j++) {
            tree->child[j]->grow_branches(std::rand() % 2 + 2);
        }
        forest.push_back(tree);
    }
    std::cout << "Enter a name of the elf:" << std::endl;
    std::string NameToFind;
    std::cin >> NameToFind;
    Branch *found = nullptr;
    for (int i = 0; i < forest.size() && found == nullptr; i++)
        found = forest[i]->find_elf(NameToFind);
    if (found == nullptr)
        std::cout << "There is not this elf" << std::endl;
    else 
        std::cout << found->get_elfName() << " has neighbors: " <<  found->get_number_neighbors() << std::endl;
    return 0;
}

