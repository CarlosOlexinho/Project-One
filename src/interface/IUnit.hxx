//
// Created by black on 04.04.2020.
//

#ifndef PROJECT_ONE_IMONSTER_HXX
#define PROJECT_ONE_IMONSTER_HXX

struct IUnit
{
    enum DamageType
    {
        PhysicalDamage,
        FireDamage,
        WaterDamage,
        WindDamage,
        EarthDamage
    };

    virtual void takeDamage(double enemyDamage, double enemyPenetration, DamageType attackDamageType) = 0;
    virtual double getDamage() = 0;
    virtual double getPenetration() = 0;
    virtual DamageType getDamageType() = 0;
};

#endif //PROJECT_ONE_IMONSTER_HXX
