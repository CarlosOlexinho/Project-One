//
// Created by black on 05.04.2020.
//

#include "Elf.hxx"


Elf::Elf(double maxHealth, double damage, double penetration, IUnit::DamageType damageType)
    : Humanoid(
        maxHealth,
        damage,
        penetration,
        damageType,
    {
        {Elf::PhysicalDamage, 0.75f},
        {Elf::FireDamage, 0.5f},
        {Elf::WaterDamage, 11.5f},
        {Elf::WindDamage, 10.f}
    },
    {
        {Elf::PhysicalDamage, 0.05f},
        {Elf::FireDamage, 0.5f},
        {Elf::WaterDamage, 1.f},
        {Elf::WindDamage, 0.8f}
    })
{

}
double Elf::getDamage()
{
    return Humanoid::getDamage() * 2;
}
std::string Elf::toString()
{
    return "Wasser the German Elf";
}
