//
// Created by black on 04.04.2020.
//

#ifndef PROJECT_ONE_MONSTER_HXX
#define PROJECT_ONE_MONSTER_HXX

#include "../SimpleUnit.hxx"

class Monster
    : public SimpleUnit
{
    double regeneration;

public:
    Monster(double maxHealth
            , double damage
            , double penetration
            , DamageType damageType
            , double regeneration
            , std::map<DamageType, double> resistanceMapping);
    ~Monster() override = default;

    void takeDamage(double enemyDamage, double enemyPenetration, DamageType attackDamageType) override;

    double maxAvaiableHeatlh();
    double getRegeneration();
    std::string toString() override;
};


#endif //PROJECT_ONE_MONSTER_HXX
