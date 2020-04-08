//
// Created by lenovo on 07.04.2020.
//

#ifndef PROJECT_ONE_ROBOUNIT_HXX
#define PROJECT_ONE_ROBOUNIT_HXX

#include <string>
#include <map>
#include "interface/IUnit.hxx"

class RoboUnit
        : public IUnit
{
protected:
    double     health;
    double     damage;
    double     penetration;
    DamageType damageType;

    std::map<DamageType, double> resistanceMapping;

public:
    RoboUnit(double health
            , double damage
            , double penetration
            , DamageType damageType
            , std::map<DamageType, double> resistanceMapping);

    void takeDamage(double enemyDamage, double enemyPenetration, DamageType attackDamageType) override;
    double getDamage() override;
    double getPenetration() override;
    DamageType getDamageType() override;
    double getHealth() override;

    std::string toString() override;
};



#endif //PROJECT_ONE_ROBOUNIT_HXX
