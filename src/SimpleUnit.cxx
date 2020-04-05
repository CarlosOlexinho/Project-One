//
// Created by black on 05.04.2020.
//

#include "SimpleUnit.hxx"
#include <iostream>

SimpleUnit::SimpleUnit(double maxHealth
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

void SimpleUnit::takeDamage(double enemyDamage, double enemyPenetration, IUnit::DamageType attackDamageType)
{
    std::cout << toString() << ", has received " << enemyDamage << " damage!" << std::endl;
    health -= enemyDamage * (1 - (resistanceMapping[attackDamageType] - enemyPenetration));
    std::cout << toString() << " has " << health << " health" << std::endl;
}
double SimpleUnit::getDamage()
{
    return this->damage;
}
double SimpleUnit::getPenetration()
{
    return this->penetration;
}
IUnit::DamageType SimpleUnit::getDamageType()
{
    return this->damageType;
}

double SimpleUnit::getHealth()
{
    return this->health;
}

std::string SimpleUnit::toString()
{
    return "SimpleUnit";
}
