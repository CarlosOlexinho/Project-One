//
// Created by lenovo on 05.04.2020.
//

#ifndef PROJECT_ONE_WEREWOLF_HXX
#define PROJECT_ONE_WEREWOLF_HXX

#include "../Monster.hxx"

class Werewolf
        : public Monster
{
public:
    Werewolf(double maxHealth
            , double damage);

    void takeDamage(double enemyDamage, double enemyPenetration, DamageType attackDamageType) override;

    std::string toString() override;
};


#endif //PROJECT_ONE_WEREWOLF_HXX
