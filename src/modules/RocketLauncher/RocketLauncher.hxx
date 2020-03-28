//
// Created by lenovo on 28.03.2020.
//

#ifndef PROJECT_ONE_ROCKETLAUNCHER_HXX
#define PROJECT_ONE_ROCKETLAUNCHER_HXX

#include "../interface/IRocketLauncher.hxx"

class RocketLauncher
        : public IRocketLauncher
{
public:
    char Rocket(char name, char time, char distance, char target) override;
    char prepare (char yes, char no) override ;
    char launch (char start) override;
};


#endif //PROJECT_ONE_ROCKETLUNCHER_HXX
