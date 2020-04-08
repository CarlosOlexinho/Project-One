//
// Created by black on 05.04.2020.
//

#ifndef PROJECT_ONE_HUMANOID_HXX
#define PROJECT_ONE_HUMANOID_HXX

#include <map>
#include "../SimpleUnit.hxx"

class Humanoid
    : public SimpleUnit
{
    std::map<DamageType, double> specialisation;

public:
    Humanoid(double maxHealth
            , double damage
            , double penetration
            , DamageType damageType
            , std::map<DamageType, double> specialisation
            , std::map<DamageType, double> resistanceMapping);
    ~Humanoid() override = default;

    double getDamage() override;

    std::string toString() override;
};


#endif //PROJECT_ONE_HUMANOID_HXX
