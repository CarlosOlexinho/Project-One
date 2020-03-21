//
// Created by black on 21.03.2020.
//

#ifndef PROJECT_ONE_ICALCULATOR_HXX
#define PROJECT_ONE_ICALCULATOR_HXX

class ICalculator
{
public:
    virtual ~ICalculator() = default;

    virtual int add(int x, int y) = 0;
    virtual int subtract(int x, int y) = 0;
    virtual int multiply(int x, int y) = 0;
    virtual int divide(int x, int y) = 0;
};

#endif //PROJECT_ONE_ICALCULATOR_HXX
