//
// Created by black on 04.04.2020.
//

#include <iostream>
#include "Monster.hxx"

void Monster::takeDamage(double enemyDamage, double enemyPenetration, IUnit::DamageType attackDamageType)
{
    health -= enemyDamage * (1-(resistanceMapping[attackDamageType]-enemyPenetration));
    std::cout << "Unit has " << health << " health" << std::endl;
}
double Monster::getDamage()
{
    return this->damage;
}
double Monster::getPenetration()
{
    return this->penetration;
}
IUnit::DamageType Monster::getDamageType()
{
    return this->damageType;
}
Monster::Monster(double maxHealth
                 , double damage
                 , double penetration
                 , IUnit::DamageType damageType
                 , std::map<DamageType, double> resistanceMapping)
{
    this->health = maxHealth;
    this->damage = damage;
    this->penetration = penetration;
    this->damageType = damageType;
    this->resistanceMapping = resistanceMapping;
}

double Monster::getHealth()
{
    return this->health;
}