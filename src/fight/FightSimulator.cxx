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

bool FightSimulator::stillAlive(IUnit* One, IUnit* Two)
{
    if(One->getHealth() > 0 && Two->getHealth() > 0)
    {
        std::cout << "They are alive" << std::endl;
        return true;
    }
    else
    {
        std::cout << "One of them is dead" << std::endl;
        return false;
    }
}

std::vector<IUnit* > FightSimulator::startBattle()
{

    while(aliveMembers(team_1) > 0 && aliveMembers(team_2) > 0)
    {
        for (int i=0; i < team_1.size(); i++)
        {
            for (int j=0; j < team_2.size(); j++)
            {
                int currentId = (j+i) % team_2.size();
                std::cout << "\n\nFor first team member no. " << i << ", for first team member no. " << currentId << std::endl;
                if (stillAlive(team_1[i], team_2[currentId]))
                {
                    team_1[i]->takeDamage(
                            team_2[currentId]->getDamage(), team_2[currentId]->getPenetration(), team_2[currentId]->getDamageType()
                    );
                    team_2[currentId]->takeDamage(
                            team_1[i]->getDamage(), team_1[i]->getPenetration(), team_1[i]->getDamageType()
                    );
                    break;
                }
            }
        }

    }

    if(aliveMembers(team_1) > aliveMembers(team_2))
    {
        std::cout << std::endl << std::endl << "Team 1 won!" << std::endl;
        return team_1;
    }
    else if(aliveMembers(team_1) == aliveMembers(team_2) )
    {
        std::cout << std::endl << std::endl << "Team 2 won!" << std::endl;
        return team_2;
    }
    else{}
    //rozkminić jak zwrócić pusty wektor
}
unsigned int FightSimulator::aliveMembers(const std::vector<IUnit*>& team)
{
    unsigned deadMembers = 0u;
    for (auto member : team)
    {
        if (member->getHealth() <= 0)
        {
            deadMembers++;
        }
    }
    return team.size() - deadMembers;
}
