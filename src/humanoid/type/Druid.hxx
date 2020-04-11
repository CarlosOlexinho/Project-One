//
// Created by lenovo on 05.04.2020.
//

#ifndef PROJECT_ONE_DRUID_HXX
#define PROJECT_ONE_DRUID_HXX

#include "../Humanoid.hxx"

class Druid
        : public Humanoid
{
public:
    Druid(double maxHealth
            , double damage
            , double penetration
            , DamageType damageType);

    double getDamage() override;
    std::string toString() override;
    std::string victorySpeech();
    std::string defeatSpeech();
};


#endif //PROJECT_ONE_DRUID_HXX
