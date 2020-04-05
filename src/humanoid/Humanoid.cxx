//
// Created by black on 05.04.2020.
//

#include "Humanoid.hxx"


#include <iostream>

Humanoid::Humanoid(double maxHealth
                   , double damage
                   , double penetration
                   , IUnit::DamageType damageType
                   , std::map<DamageType, double> specialisation
                   , std::map<DamageType, double> resistanceMapping)
    : SimpleUnit(maxHealth, damage, penetration, damageType, resistanceMapping)
{
    this->specialisation = specialisation;
}

std::string Humanoid::toString()
{
    return "Humanoid";
}
double Humanoid::getDamage()
{
    return SimpleUnit::getDamage() * specialisation[damageType];
}
