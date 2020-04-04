//
// Created by black on 28.03.2020.
//
#include <iostream>
#include "Fibonacci.hxx"

float Fibonacci::getValue()
{
    int n;
    std::cout << "Fibonacci's number: \n\n";
    std::cin >> n;
    double long fib[n];
    {
        fib[0] = 1;
        fib[1] = 1;

        for (int i     = 2; i < n; i++)
        {
            fib[i] = fib[i - 1] + fib[i - 2];
        }

        std::cout
                << "Fibonacci number " << n
                << std::fixed << fib[n - 1] << std::endl;

    }
}
