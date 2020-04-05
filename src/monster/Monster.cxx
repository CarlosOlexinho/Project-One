//
// Created by black on 04.04.2020.
//

#include <iostream>
#include "Monster.hxx"

Monster::Monster(double maxHealth
                 , double damage
                 , double penetration
                 , IUnit::DamageType damageType
                 , double regeneration
                 , std::map<DamageType, double> resistanceMapping)
    : SimpleUnit(maxHealth, damage, penetration, damageType, resistanceMapping)
{
    this->regeneration = regeneration;
}

double Monster::getRegeneration()
{
    return regeneration;
}
std::string Monster::toString()
{
    return "Monster";
}

void Monster::takeDamage(double enemyDamage, double enemyPenetration, IUnit::DamageType attackDamageType)
{
    SimpleUnit::takeDamage(enemyDamage, penetration, damageType);

    if (getHealth() <= 0)
    {
        this->health = 0;
        std::cout << toString() << " has died!" << std::endl;
    }
    else
    {
        this->health += regeneration;
        std::cout << toString() << " has regenerated health to: " << getHealth() << "!" << std::endl;
    }
}
