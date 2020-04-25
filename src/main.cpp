#include <iostream>
#include "monster/Monster.hxx"
#include "humanoid/Humanoid.hxx"
#include "interface/ITeamCompositor.hxx"
#include "interface/IFightSimulator.hxx"
#include "team/TeamCompositor.hxx"
#include "fight/FightSimulator.hxx"

int main(int argc, char** args)
{

    // TODO: Add your interface implementations here.
    ITeamCompositor* teamCompositor = new TeamCompositor;
    IFightSimulator* fightSimulator = new FightSimulator;

    // TODO: Here you shall put team members into teams
    auto team_1 = teamCompositor
        ->createTeam(teamCompositor->pickChampion(), teamCompositor->pickChampion(), teamCompositor->pickChampion());
    auto team_2 = teamCompositor
        ->createTeam(teamCompositor->pickChampion(), teamCompositor->pickChampion(), teamCompositor->pickChampion());

    fightSimulator->acquireTeamsForFight(team_1, team_2);
    auto victoriousTeam = fightSimulator->startBattle();

    for(IUnit* victoriousMember : victoriousTeam)
    {
        if(victoriousMember->getHealth() > 0)
        {
            std::cout << victoriousMember->toString() << " says : " << victoriousMember->victorySpeech() << std::endl;
        }
        else
        {
            std::cout << victoriousMember->toString() << " says : " << victoriousMember->defeatSpeech() << std::endl;
        }
    }

    teamCompositor->freeMemoryOutOfTeam(team_1);
    teamCompositor->freeMemoryOutOfTeam(team_2);

    return 0;
}