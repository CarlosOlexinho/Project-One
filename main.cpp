#include <iostream>
#include <thread>

int mainMenu()
{
    int userChoice;

    std::cout << std::endl;
    std::cout << std::endl;
    std::cout << "MAIN MENU" << std::endl;
    std::cout << "------------------" << std::endl;
    std::cout << "1. Calculator" << std::endl;
    std::cout << "2. Fibonacci number" << std::endl;
    std::cout << "3. Golden number" << std::endl;
    std::cout << "4. ICBM" << std::endl;
    std::cout << "5. Exit" << std::endl;
    std::cout << "Your choice: ";

    std::cin >> userChoice;
    return userChoice;
};

int calcMenu()
{
    int userChoice;

    std::cout << std::endl;
    std::cout << std::endl;
    std::cout << "CALC MENU" << std::endl;
    std::cout << "------------------" << std::endl;
    std::cout << "1. Adding" << std::endl;
    std::cout << "2. Subtracting" << std::endl;
    std::cout << "3. Multiplication" << std::endl;
    std::cout << "4. Division" << std::endl;
    std::cout << "5. Exit" << std::endl;
    std::cout << "Your choice: ";

    std::cin >> userChoice;
    return userChoice;
};

void calculatorLogic(int operationType)
{
    int firstNumber, secondNumber, operationResult = 0;
    std::cout << "Please give two numbers: ";
    std::cin >> firstNumber >> secondNumber;

    switch(operationType)
    {
        case 1: operationResult = firstNumber + secondNumber; break;
        case 2: operationResult = firstNumber - secondNumber; break;
        case 3: operationResult = firstNumber * secondNumber; break;
        case 4: operationResult = firstNumber / secondNumber; break;
    }

    std::cout << "Operation result is: " << operationResult << std::endl;
}

int main()
{
    int  loginAttempts         = 0;
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
            while (shouldContinueRunning)
            {
                int choice = mainMenu();

                switch (choice)
                {
                    case 1:
                    {
                        int userCalcOperation = calcMenu();
                        if(choice < 5)
                        {
                            calculatorLogic(userCalcOperation);
                            std::this_thread::sleep_for(std::chrono::seconds(2));
                        }
                        else
                            std::cout << "Wrong option!" << std::endl;

                    }
                        break;
                        // case 2: {} break;
                        // case 3: {} break;
                        // case 4: {} break;
                    case 5:
                    {
                        shouldContinueRunning = false;
                    }
                        break;
                    default:
                        break;
                }
            }
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

    std::cout << "\n\nProgram shutdown successful.\nYou have been logged out.\n\n\t\t\tThank you for your cooperation!" << std::endl;

    return 0;
}