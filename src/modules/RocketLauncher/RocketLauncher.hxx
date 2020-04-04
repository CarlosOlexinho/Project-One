//
// Created by lenovo on 28.03.2020.
//

#ifndef PROJECT_ONE_ROCKETLAUNCHER_HXX
#define PROJECT_ONE_ROCKETLAUNCHER_HXX

#include "../../interface/IRocketLauncher.hxx"

class RocketLauncher
        : public IRocketLauncher
{
public:
    /***
     * @brief Prompts user about system details (what type of rocket, what time of launch etc.)
     */
    void prepareToLaunch() override;

    /***
     * @brief Prompts user about readiness to launch and collects user confirmation (should launch, or not)
     * @return if user accepted the launch
     */
    bool shouldLaunch() override;

    /***
     * @brief launches the rocket
     */
    void launch() override;
};

#endif //PROJECT_ONE_ROCKETLUNCHER_HXX
