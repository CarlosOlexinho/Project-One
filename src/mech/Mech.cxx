//
// Created by lenovo on 08.04.2020.
//

#include "Mech.hxx"

Mech::Mech(double maxHealth
        , double damage
        , double penetration
        , IUnit::DamageType damageType
        , std::map<DamageType, double> specialisation
        , std::map<DamageType, double> resistanceMapping)
        : RoboUnit(maxHealth, damage, penetration, damageType, resistanceMapping)
{
    this->specialisation = specialisation;
}

std::string Mech::toString()
{
    return "mech";
}
double Mech::getDamage()
{
    return RoboUnit::getDamage() * specialisation[damageType];
}