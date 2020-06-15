//
// Created by lenovo on 05.05.2020.
//

#include "ModernFightSimulator.hxx"

#include "AdvancedFightSimulator.hxx"
#include <string>
#include <iostream>
#include <vector>

void ModernFightSimulator::acquireTeamsForFight(std::vector<IUnit *> team_1, std::vector<IUnit *> team_2) {
    std::cout << "team_1! team_2! Prepare for battle!!" << std::endl;

    this->team_2 = team_2;
    this->team_1 = team_1;
}

bool ModernFightSimulator::stillAlive(IUnit *One, IUnit *Two) {
    if (One->getHealth() > 0 && Two->getHealth() > 0) {
        std::cout << "They are alive" << std::endl;
        return true;
    } else {
        std::cout << "One of them is dead" << std::endl;
        return false;
    }
}

//new fightSimulator -> powtórka z rozrywki -
std::vector<IUnit *> ModernFightSimulator::startBattle() {
    while (aliveMembers(team_1) > 0 && aliveMembers(team_2) > 0) {
        for (int i = 0; i < team_1.size(); i++) {
            int choice;
            std::cout << "Choose your opponent for " << team_1[i]->toString() << " with " << team_1[i]->getHealth() <<
                      " HP " << std::endl;
            std::cout << "1. First member of the team_2 -> " << team_2[0]->toString() <<
                      " with " << team_2[0]->getHealth() << " HP " << std::endl;
            std::cout << "2. Second member of the team_2 -> " << team_2[1]->toString() <<
                      " HP " << team_2[1]->getHealth() << std::endl;
            std::cout << "3. Third member of the team_2 -> " << team_2[2]->toString() <<
                      " HP " << team_2[2]->getHealth() << std::endl;
            do {
                std::cin >> choice;
            } while (choice < 1 || choice > 3);
            choice--;

            std::cout << "For first team member no. " << i << ", for second team member no. " << choice
                      << std::endl;

            if (stillAlive(team_1[i], team_2[choice])) {
                team_1[i]->takeDamage(team_2[choice]->getDamage(), team_2[choice]->getPenetration(),
                                      team_2[choice]->getDamageType());
                team_2[choice]->takeDamage(team_1[i]->getDamage(), team_1[i]->getPenetration(),
                                           team_1[i]->getDamageType());
            }
        }
    }

    if (aliveMembers(team_1) > aliveMembers(team_2))
    {
        std::cout << "Team_1 WON!" << std::endl;
        return team_1;
    }
    else if(aliveMembers(team_1) < aliveMembers(team_2))
    {
        std::cout << "Team_2 WON!" << std::endl;
        return team_2;
    }
    else {
        std::cout << "It's a draw time!" << std::endl;
        return std::vector<IUnit*>();
    }

}

unsigned int ModernFightSimulator::aliveMembers(const std::vector<IUnit *> &team) {
    unsigned deadMembers = 0u;
    for (auto member : team) {
        if (member->getHealth() <= 0) {
            deadMembers++;
        }
    }
    return team.size() - deadMembers;
}

// nowe repo - cppNotes
// każda notatka w nowym markdownie (zapewnić możliwość kożystania Wojtkowi - zgodnie z prawem polskim)
// Rozpisać się na temat: variable(typy, przykłady użycia - kodzik)

// nowy branch - i tam ma być czysty main. wymyślić własną grę -> przygotować nowe interfejsy - poczytać o GDD + przykłady kilku interfejsów