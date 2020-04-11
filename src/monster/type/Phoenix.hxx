//
// Created by black on 05.04.2020.
//

#ifndef PROJECT_ONE_PHOENIX_HXX
#define PROJECT_ONE_PHOENIX_HXX


#include "../Monster.hxx"

class Phoenix
    : public Monster
{
public:
    Phoenix(double maxHealth
            , double damage);

    void takeDamage(double enemyDamage, double enemyPenetration, DamageType attackDamageType) override;

    std::string toString() override;
    std::string victorySpeech();
    std::string defeatSpeech();
};


#endif //PROJECT_ONE_PHOENIX_HXX
