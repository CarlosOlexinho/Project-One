//
// Created by lenovo on 08.04.2020.
//

#ifndef PROJECT_ONE_MECH_HXX
#define PROJECT_ONE_MECH_HXX

#include "../RoboUnit.hxx"

class Mech

            : public RoboUnit
    {
        std::map<DamageType, double> specialisation;

    public:
        Mech(double maxHealth
                , double damage
                , double penetration
                , DamageType damageType
                , std::map<DamageType, double> specialisation
                , std::map<DamageType, double> resistanceMapping);
        ~Mech() override = default;

        double getDamage() override;

        std::string toString() override;
    };

#endif //PROJECT_ONE_MECH_HXX
