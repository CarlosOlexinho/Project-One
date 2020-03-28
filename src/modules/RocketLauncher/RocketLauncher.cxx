//
// Created by lenovo on 28.03.2020.
//
#include <iostream>
#include <thread>
#include "RocketLauncher.hxx"

// char RocketLauncher::Rocket(char name, char time, char distance, char target)
// {
//     return name = "ICBM", time = "5 sec", distance = "1200 km", target = "Sosnowiec";
//
// }
// char RocketLauncher::prepare(char yes, char no)
// {
//     std:: string ready;
//     std::cout << "Are you ready to launch ICBM on Sosnowiec??" << std::endl;
//     std::cin >> ready;
//
//     if (ready == "yes")
//     {
//         std::this_thread::sleep_for(std::chrono::seconds(5));
//         std::cout << "ICBM is ready to start!!\n" << std::endl;
//     }
//     if (ready == "no")
//     {
//         std::cout << "Come back later!!\n" << std::endl;
//     }
// }
// char RocketLauncher::launch (char start)
// {
//     std::string launch;
//     std::cout << "Do you wont to launch ICBM??\n" << std::endl;
//     std::cin >> launch;
//     if (launch == "yes")
//     {
//         std::this_thread::sleep_for(std::chrono::seconds(5));
//         std::cout << "ICBM will start in 5 seconds!!\n" << std::endl;
//     }
//     if (launch == "no")
//     {
//         std::cout << "Come back later!!\n" << std::endl;
//     }
// }
void RocketLauncher::launch()
{

}
bool RocketLauncher::shouldLaunch()
{
    return false;
}
void RocketLauncher::prepareToLaunch()
{
    std:: string ready;
    std::cout << "Are you ready to launch ICBM on Sosnowiec??" << std::endl;
    std::cin >> ready;

    if (ready == "yes")
    {
        std::this_thread::sleep_for(std::chrono::seconds(5));
        std::cout << "ICBM is ready to start!!\n" << std::endl;
    }
    if (ready == "no")
    {
        std::cout << "Come back later!!\n" << std::endl;
    }
}
