#include <iostream>
#include <thread>

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
    int loginAttempts = 0;
    bool shouldContinueRunning = true;

    std::string login, password;

    std::cout << "Welcome!" << std::endl;

    while (shouldContinueRunning && loginAttempts < 3)
    {
        std::cout << "Login: ";
        std::cin >> login;
        std::cout << "Password: ";
        std::cin >> password;

        if (login == "michal" && password == "behemoth")
        {
            std::cout << "Hello Michal! Your secret data are safe here." << std::endl;
            shouldContinueRunning = false;
        }
        else
        {
            loginAttempts++;
            if (loginAttempts != 3)
            {
                std::cout << "Wrong login or password! Try Again!" << std::endl;
            }
            else
            {
                std::cout << "You are not allowed to use this program!" << std::endl;
                std::cout << "This program is going to quit in 5 sec!" << std::endl;
                std::this_thread::sleep_for(std::chrono::seconds(5));
            }
        }
    }

    return 0;
}