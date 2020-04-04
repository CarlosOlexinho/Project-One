//
// Created by black on 28.03.2020.
//

#ifndef PROJECT_ONE_FIBONACCI_HXX
#define PROJECT_ONE_FIBONACCI_HXX

#include "/../../interface/IYieldValue.hxx"
#include "../../interface/IYieldValue.hxx"

class Fibonacci
        : public IYieldValue
{
public:
    float getValue() override;
};


#endif //PROJECT_ONE_FIBONACCI_HXX
