//
// Created by lenovo on 08.04.2020.
//

#include "Bumblebee.hxx"

Bumblebee::Bumblebee(double maxHealth, double damage, double penetration, IUnit::DamageType damageType)
        : Mech (
        maxHealth,
        damage,
        penetration,
        damageType,
        {
                {Bumblebee::PhysicalDamage, 5.f},
                {Bumblebee::FireDamage,     10.f},
                {Bumblebee::WaterDamage,    0.f},
                {Bumblebee::WindDamage,     0.f},
        },
        {
                {Bumblebee::PhysicalDamage, 0.8f},
                {Bumblebee::FireDamage,     0.5f},
                {Bumblebee::WaterDamage,    0.f},
                {Bumblebee::WindDamage,     0.8f},
        })
{

}
double Bumblebee::getDamage()
{
    return Mech::getDamage() * 2;
}
std::string Bumblebee::toString()
{
    return "Bumblebee";
}