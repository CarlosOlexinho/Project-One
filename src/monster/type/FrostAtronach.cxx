//
// Created by lenovo on 05.04.2020.
//

#include "FrostAtronach.hxx"

FrostAtronach::FrostAtronach(double maxHealth, double damage)
        : Monster(
        maxHealth
        , damage
        , 0.3f
        , FrostDamage
        , 30.f
        , {
                {PhysicalDamage,    0.05f},
                {FireDamage,        0.f},
                {WaterDamage,       0.5f},
                {EarthDamage,       0.05f},
                {FrostDamage,       1.f}
        }) { }
void FrostAtronach::takeDamage(double enemyDamage, double enemyPenetration, IUnit::DamageType attackDamageType)
{
    if(attackDamageType == IUnit::FireDamage)
    {
        SimpleUnit::takeDamage(enemyDamage, enemyPenetration, attackDamageType);
    }
    else
    {
        Monster::takeDamage(enemyDamage,enemyPenetration,attackDamageType);
    }
}
std::string FrostAtronach::toString()
{
    return "Ice Cube";
}