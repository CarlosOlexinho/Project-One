//
// Created by lenovo on 08.04.2020.
//

#ifndef PROJECT_ONE_BUMBLEBEE_HXX
#define PROJECT_ONE_BUMBLEBEE_HXX

#include "Mech.hxx"

class Bumblebee
        : public Mech
{
public:
    Bumblebee(double maxHealth
            , double damage
            , double penetration
            , DamageType damageType);

    double getDamage() override;
    std::string toString() override;
};


#endif //PROJECT_ONE_BUMBLEBEE_HXX
