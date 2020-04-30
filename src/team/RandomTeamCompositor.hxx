//
// Created by lenovo on 28.04.2020.
//

#ifndef PROJECT_ONE_RANDOMTEAMCOMPOSITOR_HXX
#define PROJECT_ONE_RANDOMTEAMCOMPOSITOR_HXX

#include "../interface/ITeamCompositor.hxx"

class RandomTeamCompositor
        : public ITeamCompositor
{
public:
    IUnit* pickChampion() override;

    std::vector<IUnit *> createTeam(IUnit *first, IUnit *second, IUnit *third) override;

    void freeMemoryOutOfTeam(const std::vector<IUnit *> &team) override;
};


#endif //PROJECT_ONE_RANDOMTEAMCOMPOSITOR_HXX
