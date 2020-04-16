//
// Created by lenovo on 10.04.2020.
//

#include "teamCompositor.hxx"
#include <string>
#include <iostream>

IUnit* pickChampion()
{
    int champion;
    std::cout << "Choose your champion: " << std::endl;
    std::cout << "1. Druid" << std::endl;
    std::cout << "2. Dwarf" << std::endl;
    std::cout << "3. Elf" << std::endl;
    std::cout << "4. Bumblebee" << std::endl;
    std::cout << "5. FrostAtronach" << std::endl;
    std::cout << "6. Phoenix" << std::endl;
    std::cout << "7. Werewolf" << std::endl;

    std::cin >> champion;
    return champion;
};

