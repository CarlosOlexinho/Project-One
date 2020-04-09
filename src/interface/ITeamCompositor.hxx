//
// Created by black on 09.04.2020.
//

#ifndef PROJECT_ONE_ITEAMCOMPOSITOR_HXX
#define PROJECT_ONE_ITEAMCOMPOSITOR_HXX

#include <vector>
#include "IUnit.hxx"

struct ITeamCompositor
{
    /**
     * @brief Shows user available champions, and returns one of them
     * @return Return chosen champion by player
     */
    virtual IUnit* pickChampion() = 0;

    /**
     * @brief Gets three members of a team, and puts them together
     * @param first (team member)
     * @param second (team member)
     * @param third (team member)
     * @return A team coupled together
     */
    virtual std::vector<IUnit*> createTeam(IUnit* first, IUnit* second, IUnit* third) = 0;

    /**
     * @brief Removes team members from memory after they are finished with fight (use delete on each element),
     *          remember to remove ALL TEAM MEMBERS!
     * @param team A team to be removed from memory
     */
    virtual void freeMemoryOutOfTeam(const std::vector<IUnit*>& team) = 0;
};

#endif //PROJECT_ONE_ITEAMCOMPOSITOR_HXX
