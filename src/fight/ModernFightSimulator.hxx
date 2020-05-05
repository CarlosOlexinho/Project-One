//
// Created by lenovo on 05.05.2020.
//

#include "../interface/IFightSimulator.hxx"

#ifndef PROJECT_ONE_MODERNFIGHTSIMULATOR_HXX
#define PROJECT_ONE_MODERNFIGHTSIMULATOR_HXX


class ModernFightSimulator
        : public IFightSimulator
{
    std::vector<IUnit *> team_1;
    std::vector<IUnit *> team_2;

    void acquireTeamsForFight(std::vector<IUnit *> team_1, std::vector<IUnit *> team_2) override;

    unsigned int aliveMembers(const std::vector<IUnit *> &team);

    std::vector<IUnit *> startBattle() override;

    bool stillAlive(IUnit *One, IUnit *Two);
};


#endif //PROJECT_ONE_MODERNFIGHTSIMULATOR_HXX
