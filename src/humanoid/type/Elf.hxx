//
// Created by black on 05.04.2020.
//

#ifndef PROJECT_ONE_ELF_HXX
#define PROJECT_ONE_ELF_HXX

#include "../Humanoid.hxx"

class Elf
    : public Humanoid
{
public:
    Elf(double maxHealth
        , double damage
        , double penetration
        , DamageType damageType);

    double getDamage() override;
    std::string toString() override;
};


#endif //PROJECT_ONE_ELF_HXX
