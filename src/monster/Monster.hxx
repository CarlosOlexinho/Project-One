//
// Created by black on 04.04.2020.
//

#ifndef PROJECT_ONE_MONSTER_HXX
#define PROJECT_ONE_MONSTER_HXX

#include <map>
#include "../interface/IUnit.hxx"

class Monster
    : public IUnit
{
    double     health;
    double     damage;
    double     penetration;
    DamageType damageType;

    std::map<DamageType, double> resistanceMapping;
public:
    Monster(double maxHealth
            , double damage
            , double penetration
            , DamageType damageType
            , std::map<DamageType, double> resistanceMapping);

    void takeDamage(double enemyDamage, double enemyPenetration, DamageType attackDamageType) override;
    double getDamage() override;
    double getPenetration() override;
    DamageType getDamageType() override;

    double getHealth();
};


#endif //PROJECT_ONE_MONSTER_HXX
