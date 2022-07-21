#include "../include/company.h"
#include <iostream>

int main() {
    std::cout << "Enter a number of teams in the company:" << std::endl;
    int numTeams;
    std::cin >> numTeams;
    std::cout << "Enter a number of workers in each team:" << std::endl;
    int numWorkers;
    std::cin >> numWorkers;

    Company company(numTeams, numWorkers);
    while (company.free_workers()) {
        company.give_order();
    }
    

    return 0;
}
