//
// Created by black on 05.04.2020.
//

#ifndef PROJECT_ONE_SIMPLEUNIT_HXX
#define PROJECT_ONE_SIMPLEUNIT_HXX


#include <string>
#include <map>
#include "interface/IUnit.hxx"

class SimpleUnit
    : public IUnit
{
protected:
    double     health;
    double     damage;
    double     penetration;
    DamageType damageType;

    std::map<DamageType, double> resistanceMapping;

public:
    SimpleUnit(double health
               , double damage
               , double penetration
               , DamageType damageType
               , std::map<DamageType, double> resistanceMapping);

    void takeDamage(double enemyDamage, double enemyPenetration, DamageType attackDamageType) override;
    double getDamage() override;
    double getPenetration() override;
    DamageType getDamageType() override;
    double getHealth() override;
    //double maxAvaiableHealth() override;


    std::string toString() override;
};


#endif //PROJECT_ONE_SIMPLEUNIT_HXX
