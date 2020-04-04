//
// Created by black on 28.03.2020.
//
#include <iostream>
#include "GoldenNumber.hxx"

void GoldenNumber::getValue()
{
    int n;
    double long fib[100000];
    {
        std::cout << "Fibonacci's number: ";
        std::cin >> n;

        fib[0] = 1;
        fib[1] = 1;
        for (int i = 2; i < n; i++)
        {
            fib[i] = fib[i - 1] + fib[i - 2];
        }
        std::cout << "Golden number: " << fib[n - 1] / fib[n - 2] << std::endl;
    }
}