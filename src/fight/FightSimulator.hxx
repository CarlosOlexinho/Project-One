//
// Created by lenovo on 17.04.2020.
//

#ifndef PROJECT_ONE_FIGHTSIMULATOR_H
#define PROJECT_ONE_FIGHTSIMULATOR_H

#include "../interface/IFightSimulator.hxx"

class FightSimulator
       : public IFightSimulator
{
    std::vector<IUnit*> team_1;
    std::vector<IUnit*> team_2;

    void acquireTeamsForFight(std::vector<IUnit*> team_1, std::vector<IUnit*> team_2) override;
    unsigned int aliveMembers(const std::vector<IUnit*>& team);

    std::vector<IUnit*> startBattle() override;
    bool stillAlive(IUnit *One, IUnit *Two);
};


#endif //PROJECT_ONE_FIGHTSIMULATOR_H
