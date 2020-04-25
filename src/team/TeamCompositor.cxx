//
// Created by lenovo on 10.04.2020.
//

#include "TeamCompositor.hxx"
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

IUnit *TeamCompositor::pickChampion()

{
   while(true) {

       /*
        * TODO:
        *   In new implementation, change this lines into random generating number between 1 and 7
        */
       int champion;

       std::cout << "Choose your champion!" << std::endl;
       std::cout << "1. Druid" << std::endl;
       std::cout << "2. Dwarf" << std::endl;
       std::cout << "3. Elf" << std::endl;
       std::cout << "4. Bumblebee" << std::endl;
       std::cout << "5. FrostAtronach" << std::endl;
       std::cout << "6. Phoenix" << std::endl;
       std::cout << "7. Werewolf" << std::endl;
       std::cin >> champion;

       /*
        *  TODO:
        *   Dont touch underneath!
        */

       switch (champion) {
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
           default: {
               std::cout << "Choose again your champion!" << std::endl;
           }
       }
   }
}

std::vector<IUnit *> TeamCompositor::createTeam(IUnit *first, IUnit *second, IUnit *third)
{
    std::vector<IUnit *> team;

    team.push_back(first);
    team.push_back(second);
    team.push_back(third);
    return team;
}

void TeamCompositor::freeMemoryOutOfTeam(const std::vector<IUnit *> &team)
{
    for (auto x : team)
    {
        delete x;
    }
}