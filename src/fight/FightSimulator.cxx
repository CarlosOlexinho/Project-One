//
// Created by lenovo on 17.04.2020.
//

#include "FightSimulator.hxx"
#include <string>
#include <iostream>
#include <vector>

void FightSimulator::acquireTeamsForFight(std::vector<IUnit*> team_1, std::vector<IUnit*> team_2)
{
    std::cout << "team_1! team_2! Prepare for battle!!" << std::endl;

    this->team_2 = team_2;
    this->team_1 = team_1;
}

std::vector<IUnit*> FightSimulator::startBattle()
{
    bool isFirstFightDone  = false;
    bool isSecondFightDone = false;
    bool isThirdFightDone  = false;

    while(not( isFirstFightDone && isSecondFightDone && isThirdFightDone ))
    {
        if(team_1[0]->getHealth() > 0 && team_2[0]->getHealth() > 0)
        {
            team_1[0]->takeDamage(
                team_2[0]->getDamage(), team_2[0]->getPenetration(), team_2[0]->getDamageType()
            );
            team_2[0]->takeDamage(
                team_2[0]->getDamage(), team_2[0]->getPenetration(), team_2[0]->getDamageType()
            );
        }
        else
        {
            isFirstFightDone = true;
        }

        if(team_1[1]->getHealth() > 0 && team_2[1]->getHealth() > 0)
        {
            team_1[1]->takeDamage(
                team_2[1]->getDamage(), team_2[1]->getPenetration(), team_2[1]->getDamageType()
            );
            team_2[1]->takeDamage(
                team_2[1]->getDamage(), team_2[1]->getPenetration(), team_2[1]->getDamageType()
            );
        }
        else
        {
            isSecondFightDone = true;
        }

        if(team_1[2]->getHealth() > 0 && team_2[2]->getHealth() > 0)
        {
            team_1[2]->takeDamage(
                team_2[2]->getDamage(), team_2[2]->getPenetration(), team_2[2]->getDamageType()
            );
            team_2[2]->takeDamage(
                team_2[2]->getDamage(), team_2[2]->getPenetration(), team_2[2]->getDamageType()
            );
        }
        else
        {
            isThirdFightDone = true;
        }
    }

    if(aliveMembers(team_1) > aliveMembers(team_2))
    {
        std::cout << std::endl << std::endl << "Team 1 won!" << std::endl;
        return team_1;
    }
    else
    {
        std::cout << std::endl << std::endl << "Team 2 won!" << std::endl;
        return team_2;
    }
}
unsigned int FightSimulator::aliveMembers(const std::vector<IUnit*>& team)
{
    unsigned deadMembers = 0u;
    for(auto member : team)
    {
        if(member->getHealth() > 0)
        {
            deadMembers++;
        }
    }
    return team.size() - deadMembers;
}
