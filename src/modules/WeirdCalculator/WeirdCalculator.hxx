//
// Created by lenovo on 29.03.2020.
//

#ifndef PROJECT_ONE_WEIRDCALCULATOR_HXX
#define PROJECT_ONE_WEIRDCALCULATOR_HXX

#include "../../interface/ICalculator.hxx"

class WeirdCalculator
        : public ICalculator
{
public:
    int add(int x, int y) override;
    int subtract(int x, int y) override;
    int multiply(int x, int y) override;
    int divide(int x, int y) override;
};

#endif //PROJECT_ONE_WEIRDCALCULATOR_HXX
