#include <iostream>
#include "modules/calculator/SimpleCalculator.hxx"
#include "modules/interface/IYieldValue.hxx"
#include "modules/interface/IRocketLauncher.hxx"

int main(int argc, char** args)
{
    ICalculator* calculator = new SimpleCalculator;
    IYieldValue* fibonacci;                 // @TODO Create Fibonacci class which will implement interface -> IYieldValue
    IYieldValue* goldenNumber;              // @TODO Create GoldenNumber class which will implement interface -> IYieldValue
    IRocketLauncher* icbmLauncher;        // @TODO Create IcbmLauncher class which will implement interface -> IRocketLauncher
    ICalculator* newWorldCalculator;        // @TODO Create NewWorldCalculator class which will implement interface -> ICalculator
                                            //      Note: Adding is subtracting, multiplying is dividing.
    /*
     *
     *
     *              YOU ARE NOT ELIGIBLE TO CHANGE ANYTHING UNDER THIS COMMENT
     *
     *
     */

    std::cout << "I want to add 13 and 4!" << std::endl;
    std::cout << "Yes sir, the result is " << calculator->add(13,4) << std::endl;
    std::cout << "I want to subtract 124 and 14!" << std::endl;
    std::cout << "Yes sir, the result is " << calculator->subtract(124,14) << std::endl;
    std::cout << "I want to div 12 and 4!" << std::endl;
    std::cout << "Yes sir, the result is " << calculator->divide(12,4) << std::endl;
    std::cout << "I want to mul 13 and 4!" << std::endl;
    std::cout << "Yes sir, the result is " << calculator->multiply(13,4) << std::endl;


    std::cout << "I want to get fibonacci number n=100!" << std::endl;
    std::cout << "Yes sir, the result is " << fibonacci->getValue(100) << std::endl;


    std::cout << "I want to get golden number number n=100!" << std::endl;
    std::cout << "Yes sir, the result is " << goldenNumber->getValue(100) << std::endl;


    std::cout << "I want to kill everyone! Prepare ICBM!" << std::endl;
    std::cout << "Yes sir, preparing: " << std::endl;
    icbmLauncher->prepareToLaunch();
    if(icbmLauncher->shouldLaunch()) { icbmLauncher->launch(); }

    std::cout << "I want to create new calculator, where all operations are reversed!" << std::endl;
    std::cout << "Yes sir!" << std::endl;

    std::cout << "I want to add 13 and 4!" << std::endl;
    std::cout << "Yes sir, the result is " << newWorldCalculator->add(13,4) << std::endl;
    std::cout << "I want to subtract 124 and 14!" << std::endl;
    std::cout << "Yes sir, the result is " << newWorldCalculator->subtract(124,14) << std::endl;
    std::cout << "I want to div 12 and 4!" << std::endl;
    std::cout << "Yes sir, the result is " << newWorldCalculator->divide(12,4) << std::endl;
    std::cout << "I want to mul 13 and 4!" << std::endl;
    std::cout << "Yes sir, the result is " << newWorldCalculator->multiply(13,4) << std::endl;

    delete calculator;
    delete fibonacci;
    delete goldenNumber;
    delete icbmLauncher;
    delete newWorldCalculator;
}