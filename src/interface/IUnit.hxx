//
// Created by black on 04.04.2020.
//

#ifndef PROJECT_ONE_IMONSTER_HXX
#define PROJECT_ONE_IMONSTER_HXX
#include <string>
struct IUnit
{
    enum DamageType
    {
        PhysicalDamage = 0,
        FireDamage,
        WaterDamage,
        WindDamage,
        EarthDamage,
        FrostDamage,
        LightningDamage,
        SteamDamage,
    };

    virtual ~IUnit() = default;

    virtual void takeDamage(double enemyDamage, double enemyPenetration, DamageType attackDamageType) = 0;
    virtual double getDamage() = 0;
    virtual double getPenetration() = 0;
    virtual DamageType getDamageType() = 0;
    virtual double getHealth() = 0;
    //virtual double maxAvailableHealth();

    virtual std::string toString() = 0;
    virtual std::string victorySpeech() = 0;
    virtual std::string defeatSpeech() = 0;
};

#endif //PROJECT_ONE_IMONSTER_HXX
