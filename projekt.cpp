#include <iostream>
#include <cctype>
#include <cstdlib>

// Function to test if a character is a digit
void intTest()
{
    while (true)
    {
        char ch{};
        char cont{};
        std::cout << "Enter a character: ";
        std::cin >> ch;
        bool isDigit = std::isdigit(ch);
        std::cout << "Is '" << ch << "' a digit? " << (isDigit ? "Yes" : "No") << std::endl;
        std::cout << "Continue?: ";
        std::cin >> ch;

        if (ch == 't')
        {
            continue;
        }
        else
        {
            break;
        }
    }
}

// Calculator function
int calculator()
{
    std::cout << "Awesome CALCULATOR\u00AE \n \n";
    while (true)
    {
        int firstNumber{}, secondNumber{}; // Changed to int
        char operation{};
        int result{};
        char continueCalc{};

        std::cout << "Enter the first number: ";
        std::cin >> firstNumber;
        std::cout << "Enter the second number: ";
        std::cin >> secondNumber;

        std::cout << "Which operation to perform? (+, -, *, /): ";
        std::cin >> operation;

        if (operation == '+')
            result = firstNumber + secondNumber;
        else if (operation == '-')
            result = firstNumber - secondNumber;
        else if (operation == '*')
            result = firstNumber * secondNumber;
        else if (operation == '/')
        {
            if (secondNumber == 0)
            {
                std::cout << "Do not divide by zero!\n";
                continue;
            }
            result = firstNumber / secondNumber;
        }
        else
        {
            std::cout << "Unknown operation!\n";
            continue;
        }

        std::cout << "Result: " << result << "\n\n";
        std::cout << "Do you want to continue? (Y/N) ";
        std::cin >> continueCalc;

        if (continueCalc == 'N' || continueCalc == 'n')
        {
            std::cout << "GOODBYE\n\n";
            break;
        }
        std::cout << "\033[2J\033[1;1H";
    }
    return 0;
}

int main()
{
    calculator();
    return 0;
}