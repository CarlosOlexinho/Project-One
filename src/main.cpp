#include <iostream>
#include "monster/Monster.hxx"

int main(int argc, char** args)
{
    Monster fighter_1(
        500.f,
        30.f,
        0.f,
        IUnit::PhysicalDamage,
        {
            {Monster::PhysicalDamage, 0.4f},
            {Monster::FireDamage, 0.4f},
            {Monster::WaterDamage, 0.4f},
            {Monster::WindDamage, 0.4f},
            {Monster::EarthDamage, 0.4f}
        });

    Monster fighter_2(
        100.f,
        15.f,
        0.1f,
        IUnit::WaterDamage,
        {
            {Monster::PhysicalDamage, 0.9f},
            {Monster::FireDamage, 0.9f},
            {Monster::WaterDamage, 0.9f},
            {Monster::WindDamage, 0.9f},
            {Monster::EarthDamage, 0.9f}
        });

    fighter_1.takeDamage(
        fighter_2.getDamage(),
        fighter_2.getPenetration(),
        fighter_2.getDamageType()
        );

    fighter_2.takeDamage(
        fighter_1.getDamage(),
        fighter_1.getPenetration(),
        fighter_1.getDamageType()
        );

    /*
     * TODO:
     *      Make them fight till death of weaker one.
     *      (Till health is lower or equal 0)
     */

    return 0;
}