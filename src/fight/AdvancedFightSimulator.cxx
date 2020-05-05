//
// Created by lenovo on 03.05.2020.
//

#include "AdvancedFightSimulator.hxx"
#include <string>
#include <iostream>
#include <vector>

void AdvancedFightSimulator::acquireTeamsForFight(std::vector<IUnit*> team_1, std::vector<IUnit*> team_2)
{
    std::cout << "team_1! team_2! Prepare for battle!!" << std::endl;

    this->team_2 = team_2;
    this->team_1 = team_1;
}

bool AdvancedFightSimulator::stillAlive(IUnit* One, IUnit* Two)
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
//new fightSimulator -> powtórka z rozrywki -
std::vector<IUnit* > AdvancedFightSimulator::startBattle()
{

    while(aliveMembers(team_1) > 0 && aliveMembers(team_2) > 0)
    {
        for (int i=0; i < team_1.size(); i++)
        {
//            tutaj zacząć implementację i to poniżej zastąpić w nowej klasie - tak aby można było wybrać prezciwnika
            for (int j=0; j < team_2.size(); j++)
            {
                int currentId = (j+i) % team_2.size();  // offest
                std::cout << "\n\nFor first team member no. " << i << ", for first team member no. " << currentId << std::endl;
//                ten if zostaje - wywalić cuurentId i wstawić tam cina(wybór użytkowanika)
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
//            tutaj się to kończy; wywalić fora i wstawić couta i cina - później switcha i jeżeli w cin będzie jakieś gówno to atak na pierwszego.
        }

    }

    if(aliveMembers(team_1) > aliveMembers(team_2))
    {
        std::cout << std::endl << std::endl << "Team 1 won!" << std::endl;
        return team_1;
    }
    else
    if(aliveMembers(team_1) < aliveMembers(team_2) )
    {
        std::cout << std::endl << std::endl << "Team 2 won!" << std::endl;
        return team_2;
    }
    else
    {
        std::cout << "There is nothing here!" << std::endl;
        return std::vector<IUnit*>();
    }
    //rozkminić jak zwrócić pusty wektor
}
unsigned int AdvancedFightSimulator::aliveMembers(const std::vector<IUnit*>& team)
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

// kolejny fight simulator dający opcję wyboru ataku dla pierwszego członka zespołu pierwszego - drugi się tylko broni.
//