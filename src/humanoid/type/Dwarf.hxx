//
// Created by lenovo on 05.04.2020.
//

#ifndef PROJECT_ONE_DWARF_HXX
#define PROJECT_ONE_DWARF_HXX

#include "../Humanoid.hxx"

class Dwarf
        : public Humanoid
{
public:
    Dwarf(double maxHealth
            , double damage
            , double penetration
            , DamageType damageType);

    double getDamage() override;
    std::string toString() override;
};


#endif //PROJECT_ONE_DWARF_HXX
