#include <iostream>
#include "monster/Monster.hxx"
#include "humanoid/Humanoid.hxx"
#include "humanoid/type/Elf.hxx"
#include "monster/type/Phoenix.hxx"
#include "humanoid/type/Dwarf.hxx"
#include "humanoid/type/Druid.hxx"
#include "monster/type/FrostAtronach.hxx"
#include "monster/type/Werewolf.hxx"
#include "mech/Mech.hxx"
#include "mech/Bumblebee.hxx"

int main(int argc, char** args)
{

    IUnit *fighter_1 = new Elf(100,20,0.f,IUnit::WaterDamage);
    //IUnit *fighter_2  = new Phoenix(1100, 30);
    IUnit *fighter_3 = new FrostAtronach(1000, 30);
    /*
     * TODO:
     *      Make them fight till death of weaker one.
     *      (Till health is lower or equal 0)
     */

    while ( fighter_1->getHealth() > 0 && fighter_3->getHealth() > 0)
    {
        fighter_1->takeDamage(
                fighter_3->getDamage(),
                fighter_3->getPenetration(),
                fighter_3->getDamageType());
        fighter_3->takeDamage(
                fighter_1->getDamage(),
                fighter_1->getPenetration(),
                fighter_1->getDamageType());
    }

    std::cout
        << "Fighter_1, which is a " + fighter_1->toString() + " Health: " << fighter_1->getHealth()
        << ", Fighter_2, which is a " + fighter_3->toString() + " health: " << fighter_3->getHealth()
        << std::endl;

    delete fighter_1;
    delete fighter_3;

    return 0;
}