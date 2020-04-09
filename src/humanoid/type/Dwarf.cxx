//
// Created by lenovo on 05.04.2020.
//

#include "Dwarf.hxx"

Dwarf::Dwarf(double maxHealth, double damage, double penetration, IUnit::DamageType damageType)
        : Humanoid(
        maxHealth,
        damage,
        penetration,
        damageType,
        {
                {Dwarf::PhysicalDamage,  11.f},
                {Dwarf::FireDamage,      0.f},
                {Dwarf::WaterDamage,     0.f},
                {Dwarf::WindDamage,      0.f},
                {Dwarf::EarthDamage,     0.f},
        },
        {
                {Dwarf::PhysicalDamage, 0.8f},
                {Dwarf::FireDamage,     0.5f},
                {Dwarf::WaterDamage,    0.5f},
                {Dwarf::WindDamage,     0.5f},
                {Dwarf::EarthDamage,    0.5f}
        })
{

}
double Dwarf::getDamage()
{
    return Humanoid::getDamage() * 2;
}
std::string Dwarf::toString()
{
    return "Fest Dwarf";
}