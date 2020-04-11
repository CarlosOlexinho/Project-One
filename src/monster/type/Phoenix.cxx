//
// Created by black on 05.04.2020.
//

#include "Phoenix.hxx"

Phoenix::Phoenix(double maxHealth, double damage)
: Monster(
    maxHealth
    , damage
    , 0.3f
    , FireDamage
    , 30.f
    , {
        {PhysicalDamage, .5f},
        {FireDamage, 1.f},
        {WaterDamage, 0.f},
        {EarthDamage, 0.f}
    }) { }
void Phoenix::takeDamage(double enemyDamage, double enemyPenetration, IUnit::DamageType attackDamageType)
{
    if(attackDamageType == IUnit::WaterDamage)
    {
        SimpleUnit::takeDamage(enemyDamage, enemyPenetration, attackDamageType);
    }
    else
    {
        Monster::takeDamage(enemyDamage,enemyPenetration,attackDamageType);
    }
}
std::string Phoenix::toString()
{
    return "Phoenix";
}

std::string Phoenix::victorySpeech()
{
    return "I shall burn you all!";
}
std::string Phoenix::defeatSpeech()
{
    return "I'll be reborn form ashes...";
}