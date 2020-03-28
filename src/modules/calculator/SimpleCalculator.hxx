//
// Created by black on 21.03.2020.
//

#ifndef PROJECT_ONE_SIMPLECALCULATOR_HXX
#define PROJECT_ONE_SIMPLECALCULATOR_HXX


#include "../interface/ICalculator.hxx"

class SimpleCalculator
    : public ICalculator
{
public:
    int add(int x, int y) override;
    int subtract(int x, int y) override;
    int multiply(int x, int y) override;
    int divide(int x, int y) override;
};


#endif PROJECT_ONE_SIMPLECALCULATOR_HXX
