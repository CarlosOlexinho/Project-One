//
// Created by lenovo on 28.04.2020.
//

#include "RandomTeamCompositor.hxx"
#include "../humanoid/type/Druid.hxx"
#include "../humanoid/type/Dwarf.hxx"
#include "../humanoid/type/Elf.hxx"
#include "../mech/Bumblebee.hxx"
#include "../monster/type/FrostAtronach.hxx"
#include "../monster/type/Phoenix.hxx"
#include "../monster/type/Werewolf.hxx"
#include <vector>
#include <string>
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <random>
#include <c++/4.8.3/thread>

IUnit* RandomTeamCompositor::pickChampion()
{
    unsigned champion;

    static std::random_device rd;

//    std::this_thread::sleep_for(std::chrono::milliseconds(100));
    champion = rd() % 7 + 1;

    switch (champion)
    {
        case 1:
            return new Druid(100, 40, 0.f, Druid::EarthDamage);
        case 2:
            return new Dwarf(100, 40, 0.5f, Dwarf::PhysicalDamage);
        case 3:
            return new Elf(100, 40, 0.2f, Elf::WaterDamage);
        case 4:
            return new Bumblebee(300, 30, 0.3f, Bumblebee::FireDamage);
        case 5:
            return new FrostAtronach(300, 20);
        case 6:
            return new Phoenix(300, 20);
        case 7:
            return new Werewolf(300, 20);
    }

}

std::vector<IUnit*> RandomTeamCompositor::createTeam(IUnit* first, IUnit* second, IUnit* third)
{
    std::vector<IUnit*> team;

    team.push_back(first);
    team.push_back(second);
    team.push_back(third);
    return team;
}

void RandomTeamCompositor::freeMemoryOutOfTeam(const std::vector<IUnit*>& team)
{
    for (auto x : team)
    {
        delete x;
    }
}