#pragma once
#include <vector>
#include <string>


class Branch {

    private:
        Branch *parent = nullptr;
        std::string elfName = "None";

    public:
        std::vector<Branch*> child;
        
        std::string get_elfName();
        bool is_there_elf();
        void grow_branches(size_t inSize);
        Branch * find_elf(std::string inName);
        int get_number_neighbors();
};
