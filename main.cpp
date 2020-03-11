#include <iostream>
#include <stdio.h>
#include <cstdlib>
#include <conio.h>
#include <windows.h>
#include <iomanip>

std::string login, password;
float x,y;
char pick, choose, fibo;
double long fib[100000];
int n;
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
        if (login == "michal" && password == "behemoth")
        {
            std::cout << "That's correct! Welcome!";

            getchar(); getchar();
            system("cls");

            menu();

            std::cout << std::endl << "Select option: ";
            std::cin >> pick;

            system("cls");

            switch (pick)
            {
                case '1':
                    {
                    for (;;)
                    {
                        std::cout << "First number: ";
                        std::cin >> x;

                        std::cout << std::endl << "Second number: ";
                        std::cin >> y;

                        std::cout << std::endl;
                        std::cout << "Calculator" << std::endl;
                        std::cout << "------------------" << std::endl;
                        std::cout << "1. Addition" << std::endl;
                        std::cout << "2. Subtraction" << std::endl;
                        std::cout << "3. Multiplication" << std::endl;
                        std::cout << "4. Dividing" << std::endl;
                        std::cout << "5. Back to menu" << std::endl;

                        std::cout << std::endl;
                        choose = getch();

                        switch (choose)
                        {
                            case '1':
                            {
                            std::cout << "Sum = " << x + y;
                            }
                            break;
                            case '2':
                            {
                            std::cout << "Difference = " << x - y;
                            }
                            break;
                            case '3':
                            {
                            std::cout << "Ratio = " << x * y;
                            }
                            break;
                            case '4':
                            {
                            if (y == 0) std::cout << "Don't do that!";
                            else std::cout << "Quotient = " << x / y;
                            }
                            break;
                            case '5':
                            {
                            getchar(); getchar();
                            system("cls");
                            menu();
                            }
                            break;

                            default:
                            std::cout << "There is no option like that!";
                            switch (choose);

                            break;
                }
                getchar(); getchar();
                system("cls");
                break;
            }

                    }
                case '2':
                    {
                    for (;;)
                    {
                        std::cout << "1. Fibonacci's number" << std::endl;
                        std::cout << "2. Back to menu" << std::endl;

                        fibo = getch();

                        switch (fibo)
                        {
                            case '1':
                                {
                                std::cout << "Fibonacci number's: ";
                                std::cin >> n;

                                fib[0] = 1;
                                fib[1] = 1;

                                for (int i = 2; i < n; i++)
                                {
                                    fib[i] = fib[i - 1] + fib[i - 2];
                                }

                                std::setprecision(10000);
                                std::cout << "Fibonacci number" << n << ": " << fib[n - 1];
                            }
                                break;
                            case '2': {
                                getchar();
                                getchar();
                                system("cls");
                                menu();
                            }
                                break;

                            default:
                                std::cout << "There is no option like that!";
                                switch (fibo);

                                break;
                        }
                        getchar();
                        getchar();
                        system("cls");
                        break;
                    }
                }
                    getchar();
                    getchar();
                    system("cls");


            }
        } else std::cout << "Wrong login or password! Try Again!";
        getchar();
        getchar();
        system("cls");
        main();


    return 0;
}