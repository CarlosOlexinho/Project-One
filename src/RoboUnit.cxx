//
// Created by lenovo on 07.04.2020.
//

#include "RoboUnit.hxx"
#include <iostream>

RoboUnit::RoboUnit(double maxHealth
        , double damage
        , double penetration
        , IUnit::DamageType damageType
        , std::map<DamageType, double> resistanceMapping)
{
    this->health            = maxHealth;
    this->damage            = damage;
    this->penetration       = penetration;
    this->damageType        = damageType;
    this->resistanceMapping = resistanceMapping;
}

void RoboUnit::takeDamage(double enemyDamage, double enemyPenetration, IUnit::DamageType attackDamageType)
{
    std::cout << toString() << ", has received " << enemyDamage << " damage!" << std::endl;
    health -= enemyDamage * (1 - (resistanceMapping[attackDamageType] - enemyPenetration));
    std::cout << toString() << " has " << health << " health" << std::endl;
}
double RoboUnit::getDamage()
{
    return this->damage;
}
double RoboUnit::getPenetration()
{
    return this->penetration;
}
IUnit::DamageType RoboUnit::getDamageType()
{
    return this->damageType;
}

double RoboUnit::getHealth()
{
    return this->health;
}

std::string RoboUnit::toString()
{
    return "RoboUnit";
}