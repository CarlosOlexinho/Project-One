//
// Created by black on 21.03.2020.
//

#ifndef PROJECT_ONE_IYIELDVALUE_HXX
#define PROJECT_ONE_IYIELDVALUE_HXX

class IYieldValue
{
public:
    virtual ~IYieldValue() = default;
    virtual float getValue(int n) = 0;
};

#endif //PROJECT_ONE_IYIELDVALUE_HXX
