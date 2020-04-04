//
// Created by black on 28.03.2020.
//

#ifndef PROJECT_ONE_GOLDENNUMBER_HXX
#define PROJECT_ONE_GOLDENNUMBER_HXX

#include "/../../interface/IYieldValue.hxx"

class GoldenNumber
        : public IYieldValue
{
    float getValue() override;
};


#endif //PROJECT_ONE_GOLDENNUMBER_HXX
