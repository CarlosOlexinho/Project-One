//
// Created by lenovo on 28.03.2020.
//
#include <iostream>
#include <thread>
#include "RocketLauncher.hxx"

void RocketLauncher::prepareToLaunch()
{
    std:: string ready;
    std::cout << "Are you ready to launch ICBM on Sosnowiec??" << std::endl;
    std::cin >> ready;

    if (ready == "yes")
    {
        std::cout << "Preparing to launch ICBM!!" << std::endl;
        std::this_thread::sleep_for(std::chrono::seconds(5));
        std::cout << "ICBM is ready to start!!\n" << std::endl;
    }
    if (ready == "no")
    {
        std::cout << "Come back later!!\n" << std::endl;
    }
}

bool RocketLauncher::shouldLaunch()
{
    std::string launch;
    std::cout << "Do you wont to launch ICBM??" << std::endl;
    if (launch == "yes")
    {
        return true;
    }
    else if (launch == "no")
    {
        return false;
    }
}

void RocketLauncher::launch()
{
    std::cout << "ICBM will take off in 5 seconds!!" << std::endl;
    std::this_thread::sleep_for(std::chrono::seconds(5));
    std::cout << "ICBM fly away!!" << std::endl;
}