#include "../include/company.h"
#include <iostream>

Company::Company(size_t teamsSize, size_t workersSize) {
    currentOrder = 0;
    for (int i = 0; i < teamsSize; i++) {
        Team team(i, workersSize);
        teams.push_back(team);
    }
}

void Company::give_order() {
    currentOrder = head.give_order();
    for (auto team: teams) {
        team.set_order(currentOrder);
        team.give_tasks();
    }
}

int Company::free_workers() {
    int free_workers = 0;
    for (auto team: teams) 
        free_workers += team.free_workers();
    return free_workers; 
}

