//
// Created by lenovo on 10.04.2020.
//

#include "TeamCompositor.hxx"
#include <vector>
#include <string>
#include <iostream>

IUnit *TeamCompositor::pickChampion()
{
    IUnit *champion;

    std::cout << "Choose your champion!" << std::endl;
    std::cout << "1. Druid" << std::endl;
    std::cout << "2. Dwarf" << std::endl;
    std::cout << "3. Elf" << std::endl;
    std::cout << "4. Bumblebee" << std::endl;
    std::cout << "5. FrostAtronach" << std::endl;
    std::cout << "6. Phoenix" << std::endl;
    std::cout << "7. Werewolf" << std::endl;
    std::cout << "There is no more champion!" << std::endl;

    switch (champion)
    {
        case 1. Druid = new Druid;
        case 2. Dwarf = new Dwarf;
        case 3. Elf = new Elf;
        case 4. Bumblebee = new Bumblebee;
        case 5. FrostAtronach = new FrostAtronach;
        case 6. Phoenix = new Phoenix;
        case 7. Werewolf = new Werewolf;
        else
        {
            std::cout << "Choose again your champion!" << std::endl;
            switch champion()
        }

    }

    std::cin >> champion;
    return champion;
}

std::vector<IUnit *> TeamCompositor::createTeam(IUnit *first, IUnit *second, IUnit *third)
{
    std::vector<IUnit *> team_1, team_2;

    team_1.push_back(first);
    team_1.push_back(second);
    team_1.push_back(third);

    team_2.push_back(first);
    team_2.push_back(second);
    team_2.push_back(third);

    return team_1, team_2;
}

void TeamCompositor::freeMemoryOutOfTeam(const std::vector<IUnit *> &team)
{
    for (auto x : team)
    {
        delete x;
    }
}