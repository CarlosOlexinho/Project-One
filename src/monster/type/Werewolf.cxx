//
// Created by lenovo on 05.04.2020.
//

#include "Werewolf.hxx"

Werewolf::Werewolf(double maxHealth, double damage)
        : Monster(
        maxHealth
        , damage
        , 0.5f
        , FrostDamage
        , 30.f
        , {
                {PhysicalDamage,    1.f},
                {FireDamage,        0.f},
                {WaterDamage,       0.f},
                {EarthDamage,       0.f},
                {FrostDamage,       0.f}
        }) { }
void Werewolf::takeDamage(double enemyDamage, double enemyPenetration, IUnit::DamageType attackDamageType)
{
    if(attackDamageType == IUnit::PhysicalDamage)
    {
        SimpleUnit::takeDamage(enemyDamage, enemyPenetration, attackDamageType);
    }
    else
    {
        Monster::takeDamage(enemyDamage,enemyPenetration,attackDamageType);
    }
}
std::string Werewolf::toString()
{
    return "Fluffy";
}

std::string Werewolf::victorySpeech()
{
    return "I'm hungry!";
}
std::string Werewolf::defeatSpeech()
{
    return "I'll join my ancestors in the land of eternal hunting...";
}