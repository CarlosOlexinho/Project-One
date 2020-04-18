#include <iostream>
#include "monster/Monster.hxx"
#include "humanoid/Humanoid.hxx"
#include "humanoid/type/Elf.hxx"
#include "monster/type/Phoenix.hxx"
#include "humanoid/type/Dwarf.hxx"
#include "humanoid/type/Druid.hxx"
#include "monster/type/FrostAtronach.hxx"
#include "monster/type/Werewolf.hxx"
#include "mech/Mech.hxx"
#include "mech/Bumblebee.hxx"
#include "interface/ITeamCompositor.hxx"
#include "interface/IFightSimulator.hxx"
#include "team/TeamCompositor.hxx"
#include "fight/FightSimulator.hxx"

int main(int argc, char** args)
{

    // TODO: Add your interface implementations here.
    ITeamCompositor *teamCompositor = new TeamCompositor;
    //IFightSimulator *fightSimulator;

    // TODO: Here you shall put team members into teams
    auto team_1 = teamCompositor->createTeam(teamCompositor -> pickChampion(), teamCompositor -> pickChampion(), teamCompositor -> pickChampion());
    auto team_2 = teamCompositor->createTeam(teamCompositor -> pickChampion(), teamCompositor -> pickChampion(), teamCompositor -> pickChampion());

        fightSimulator->acquireTeamsForFight(team_1,team_2);
        auto victoriousTeam = fightSimulator->startBattle();

            for(IUnit* victoriousMember : victoriousTeam)
            {
                    if(victoriousMember->getHealth() > 0)
                 {
                    std::cout << victoriousMember->victorySpeech() << std::endl;
                 }
                    else
                    {
                        std::cout << victoriousMember->defeatSpeech() << std::endl;
                    }
            }

    teamCompositor->freeMemoryOutOfTeam(team_1);
    teamCompositor->freeMemoryOutOfTeam(team_2);

    return 0;
}