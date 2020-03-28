//
// Created by black on 21.03.2020.
//

#ifndef PROJECT_ONE_IROCKETLAUNCHER_HXX
#define PROJECT_ONE_IROCKETLAUNCHER_HXX

class IRocketLauncher
{
public:
    virtual ~IRocketLauncher() = default;

    virtual char Rocket(char name, char time, char distance, char target) ;

    /***
     * @brief Prompts user about system details (what type of rocket, what time of launch etc.)
     */
    virtual void prepareToLaunch() = 0;

    virtual char prepare (char yes, char no);
    /***
     * @brief Prompts user about readiness to launch and collects user confirmation (should launch, or not)
     * @return if user accepted the launch
     */
    virtual bool shouldLaunch() = 0;

    virtual char launch(char yes);

    /***
     * @brief launches the rocket
     */
     virtual void launch() = 0;
};

#endif PROJECT_ONE_IROCKETLAUNCHER_HXX
