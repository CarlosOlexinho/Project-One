//
// Created by black on 09.04.2020.
//

#ifndef PROJECT_ONE_IFIGHTSIMULATOR_HXX
#define PROJECT_ONE_IFIGHTSIMULATOR_HXX


#include <vector>
#include "IUnit.hxx"

struct IFightSimulator
{
    /**
     * @brief This is a place to apply for a battle. register the teams, and prepare for a battle
     * @param team_1
     * @param team_2
     */
    virtual void acquireTeamsForFight(
        std::vector<IUnit*> team_1,
        std::vector<IUnit*> team_2
        ) = 0;

    /**
     * @brief The battle has started! Who will come out alive?
     * @return victorious team
     */
    virtual std::vector<IUnit*> startBattle() = 0;

};


#endif //PROJECT_ONE_IFIGHTSIMULATOR_HXX
