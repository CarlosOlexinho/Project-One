//
// Created by lenovo on 17.04.2020.
//

#include "FightSimulator.hxx"
#include <string>
#include <iostream>
#include <vector>

fightSimulator::void FightSimulator::acquireTeamsForFight(std::vector<IUnit *> team_1, std::vector<IUnit *> team_2)
{
    std::cout << "team_1! team_2! Prepare for battle!!"
    std::vector<IUnit *> team_1;
    std::vector<IUnit *> team_2;
}

fightSimulator::std::vector<IUnit *> FightSimulator::startBattle()
{
    team_1(first).takeDamage(
            team_2.getDamage(first),
            team_2.getPenetration(first),
            team_2getDamageType(first)
            );
    team_1(second).takeDamage(
            team_2.getDamage(second),
            team_2.getPenetration(second),
            team_2getDamageType(second)
             );
    team_1(third).takeDamage(
            team_2.getDamage(third),
            team_2.getPenetration(third),
            team_2getDamageType(third),
            );
    team_2(first).takeDamage(
            team_1.getDamage(first),
            team_1.getPenetration(first),
            team_1getDamageType(first)
            );
    team_2(first).takeDamage(
            team_1.getDamage(second),
            team_1.getPenetration(second),
            team_1getDamageType(second)
            );
    team_2(third).takeDamage(
            team_1.getDamage(third),
            team_1.getPenetration(third),
            team_1getDamageType(third)
    );

    while (team_1.getHealth() >= 0 && team_2.getHealth() >= 0)
    {
        team_1.getHealth() -= team_1.takeDamage(
                team_2.getDamage(first),
                team_2.getPenetration(first),
                team_2.getDamageType(first),
                team_2.getDamage(second),
                team_2.getPenetration(second),
                team_2.getDamageType(second),
                team_2.getDamage(third),
                team_2.getPenetration(third),
                team_2.getDamageType(third)
                );
        team_2.getHealth() -= team_2.takeDamage(
                team_1.getDamage(first),
                team_1.getPenetration(first),
                team_1.getDamageType(first),
                team_1.getDamage(second),
                team_1.getPenetration(second),
                team_1.getDamageType(second),
                team_1.getDamage(third),
                team_1.getPenetration(third),
                team_1.getDamageType(third)
                );
    }

    return std::vector<IUnit *>();
}
