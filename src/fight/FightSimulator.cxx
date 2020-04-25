//
// Created by lenovo on 17.04.2020.
//

#include "FightSimulator.hxx"
#include <string>
#include <iostream>
#include <vector>

void FightSimulator::acquireTeamsForFight(std::vector<IUnit *> team_1, std::vector<IUnit *> team_2)
{
    std::cout << "team_1! team_2! Prepare for battle!!" << std::endl;

    this->team_2 = team_2;
    this->team_1 = team_1;
}

std::vector<IUnit *> FightSimulator::startBattle()
{
    team_1[0]->takeDamage(
            team_2[0]->getDamage(),
            team_2[0]->getPenetration(),
            team_2[0]->getDamageType()
            );
    team_1[1]->takeDamage(
            team_2[1]->getDamage(),
            team_2[1]->getPenetration(),
            team_2[1]->getDamageType()
            );
    team_1[2]->takeDamage(
            team_2[2]->getDamage(),
            team_2[2]->getPenetration(),
            team_2[2]->getDamageType()
            );
    team_2[0]->takeDamage(
            team_2[0]->getDamage(),
            team_2[0]->getPenetration(),
            team_2[0]->getDamageType()
            );
    team_2[1]->takeDamage(
            team_2[1]->getDamage(),
            team_2[1]->getPenetration(),
            team_2[1]->getDamageType()
            );
    team_2[2]->takeDamage(
            team_2[2]->getDamage(),
            team_2[2]->getPenetration(),
            team_2[2]->getDamageType()
            );


    while (team_1[0]->getHealth() >= 0 && team_1[1]->getHealth() >= 0 && team_1[2]->getHealth() >= 0 && team_2[0]->getHealth() >= 0 && team_2[1]->getHealth() >= 0 && team_2[2]->getHealth() >= 0)
    {
        team_1[0]->getHealth();
    }

    return std::vector<IUnit *>();
}
