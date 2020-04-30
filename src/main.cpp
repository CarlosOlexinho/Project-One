#include <iostream>
#include "monster/Monster.hxx"
#include "humanoid/Humanoid.hxx"
#include "interface/ITeamCompositor.hxx"
#include "interface/IFightSimulator.hxx"
#include "team/TeamCompositor.hxx"
#include "fight/FightSimulator.hxx"
#include "team/RandomTeamCompositor.hxx"

int main(int argc, char** args)
{
    /**
     *      TODO FIXME:
     *          Fix frostatronach regeneration speed! Dont let it regenerate over max health!
     *              Notes:
     *                  - You should most likely add field to each IUnit implementation, which
     *                      will represent max health available for unit.
     *                  - You should check this field before regenerating. If it will over heal, get
     *                      health back to max hp
     *
     *      TODO:
     *          Implement new TeamCompositor, which will randomly choose which unit will be selected
     *              (should do it 3 times).
     *               Notes:
     *                  - Read about std::rand (https://en.cppreference.com/w/cpp/numeric/random/rand)
     *
     */

    ITeamCompositor* teamCompositor = new RandomTeamCompositor;
    //ITeamCompositor* teamCompositor = new TeamCompositor;
    IFightSimulator* fightSimulator = new FightSimulator;

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