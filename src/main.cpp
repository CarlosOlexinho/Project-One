#include <iostream>
#include "monster/Monster.hxx"
#include "humanoid/Humanoid.hxx"
#include "interface/ITeamCompositor.hxx"
#include "interface/IFightSimulator.hxx"
#include "team/TeamCompositor.hxx"
#include "fight/FightSimulator.hxx"
#include "team/RandomTeamCompositor.hxx"
#include "fight/AdvancedFightSimulator.hxx"
#include "fight/ModernFightSimulator.hxx"

int main(int argc, char **args) {
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
// Wstawić tu menu wyboru dla symulatora i wyboru drużyny.
    int choice = 0;
    int select = 0;

    ITeamCompositor *teamCompositor;
    IFightSimulator *fightSimulator;

//    *teamCompositor;
//    (*teamCompositor).pickChampion();
//    teamCompositor->pickChampion();

    do {
        std::cout << "Welcome in Fight Creator!" << std::endl;
        std::cout << "How do you wont to create team's?" << std::endl;
        std::cout << "1. By myself." << std::endl;
        std::cout << "2. Randomly." << std::endl;
        std::cin >> choice;

        switch (choice) {
            case 1:
                teamCompositor = new TeamCompositor;
                break;
            case 2:
                teamCompositor = new RandomTeamCompositor;
                break;
            default: {
                std::cout << "Wrong option!" << std::endl;
            }
        }
    } while (choice != 1 && choice != 2);

    do {
        std::cout << "Which Fight Simulator do you wont?" << std::endl;
        std::cout << "1. Fight  Simulator." << std::endl;
        std::cout << "2. Advanced Fight Simulator" << std::endl;
        std::cout << "3. Modern Fight Simulator" << std::endl;
        std::cin >> select;

        switch (select) {
            case 1:
                fightSimulator = new FightSimulator;
                break;
            case 2:
                fightSimulator = new AdvancedFightSimulator;
                break;
            case 3:
                fightSimulator = new ModernFightSimulator;
                break;
            default: {
                std::cout << "Wrong option!" << std::endl;
            }
        }
    } while (select < 1 || select > 3);

    auto team_1 = teamCompositor
            ->createTeam(teamCompositor->pickChampion(), teamCompositor->pickChampion(),
                         teamCompositor->pickChampion());
    auto team_2 = teamCompositor
            ->createTeam(teamCompositor->pickChampion(), teamCompositor->pickChampion(),
                         teamCompositor->pickChampion());

    fightSimulator->acquireTeamsForFight(team_1, team_2);
    auto victoriousTeam = fightSimulator->startBattle();

    for (IUnit *victoriousMember : victoriousTeam) {
        if (victoriousMember->getHealth() > 0) {
            std::cout << victoriousMember->toString() << " says : " << victoriousMember->victorySpeech() << std::endl;
        } else {
            std::cout << victoriousMember->toString() << " says : " << victoriousMember->defeatSpeech() << std::endl;
        }
    }

    teamCompositor->freeMemoryOutOfTeam(team_1);
    teamCompositor->freeMemoryOutOfTeam(team_2);

    return 0;
}