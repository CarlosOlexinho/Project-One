//
// Created by lenovo on 05.04.2020.
//

#include "Druid.hxx"

Druid::Druid(double maxHealth, double damage, double penetration, IUnit::DamageType damageType)
        : Humanoid(
        maxHealth,
        damage,
        penetration,
        damageType,
        {
                {Druid::PhysicalDamage, 0.05f},
                {Druid::FireDamage,     10.f},
                {Druid::WaterDamage,    10.f},
                {Druid::WindDamage,     10.f},
                {Druid::EarthDamage,    12.f}
        },
        {
                {Druid::PhysicalDamage, 0.05f},
                {Druid::FireDamage,     0.8f},
                {Druid::WaterDamage,    0.8f},
                {Druid::WindDamage,     0.8f},
                {Druid::EarthDamage,    0.8f}
        })
{

}
double Druid::getDamage()
{
    return Humanoid::getDamage() * 2;
}
std::string Druid::toString()
{
    return "Paranormalnix";
}