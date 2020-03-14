#include <iostream>
#include <stdio.h>
#include <cstdlib>
// #include <conio.h>
// #include <windows.h>
#include <iomanip>


std::string login, password;
float       firstNumberCalc, secondNumberCalc;
char        pick, choose, fibo;
double long fib[100000];
int         n;


void menu()
{
    std::cout << std::endl;
    std::cout << std::endl;
    std::cout << "MAIN MENU" << std::endl;
    std::cout << "------------------" << std::endl;
    std::cout << "1. Calculator" << std::endl;
    std::cout << "2. Fibonacci number" << std::endl;
    std::cout << "3. Golden number" << std::endl;
    std::cout << "4. ICBM" << std::endl;
    std::cout << "5. Exit" << std::endl;
};

int main()
{
    std::cout << "Welcome!" << std::endl;
    std::cout << "Login: ";
    std::cin >> login;
    std::cout << std::endl << "Password: ";
    std::cin >> password;

    int loginAttempts = 0;

    while(loginAttempts < 3)
    {
        if (login == "michal" && password == "behemoth")
        {

        }
        else
        {
            std::cout << "Wrong login or password! Try Again!";
        }
    }

    return 0;
}