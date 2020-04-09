//
// Created by lenovo on 08.04.2020.
//

#include "Mech.hxx"

Mech::Mech(double maxHealth
        , double damage
        , double penetration
        , IUnit::DamageType damageType
        , std::map<DamageType, double> configuration
        , std::map<DamageType, double> resistanceMapping)
        : RoboUnit(maxHealth, damage, penetration, damageType, resistanceMapping)
{
    this->configuration = configuration;
}

std::string Mech::toString()
{
    return "mech";
}
double Mech::getDamage()
{
    return RoboUnit::getDamage() * configuration[damageType];
}