#include <iostream>
#include <cctype>
#include <cstdlib>

// Calculator function
int calculator()
{
    // Display calculator title
    std::cout << "Awesome CALCULATOR\u00AE \n \n";
    while (true)
    {
        int firstNumber{}, secondNumber{}; // Variables for user input numbers
        char operation{};                  // Variable for operation (+, -, *, /)
        int result{};                      // Variable to store calculation result
        char continueCalc{};               // Variable to check if user wants to continue

        // Prompt user for the first number
        std::cout << "Enter the first number: ";
        std::cin >> firstNumber;
        // Prompt user for the second number
        std::cout << "Enter the second number: ";
        std::cin >> secondNumber;

        // Ask user for the operation
        std::cout << "Which operation to perform? (+, -, *, /): ";
        std::cin >> operation;

        // Perform calculation based on operation
        if (operation == '+')
            result = firstNumber + secondNumber;
        else if (operation == '-')
            result = firstNumber - secondNumber;
        else if (operation == '*')
            result = firstNumber * secondNumber;
        else if (operation == '/')
        {
            // Check for division by zero
            if (secondNumber == 0)
            {
                std::cout << "Do not divide by zero!\n";
                continue; // Skip to next iteration
            }
            result = firstNumber / secondNumber;
        }
        else
        {
            // Handle unknown operation
            std::cout << "Unknown operation!\n";
            continue; // Skip to next iteration
        }

        // Display the result
        std::cout << "Result: " << result << "\n\n";
        // Ask if user wants to continue
        std::cout << "Do you want to continue? (Y/N) ";
        std::cin >> continueCalc;

        // Exit loop if user chooses not to continue
        if (continueCalc == 'N' || continueCalc == 'n')
        {
            std::cout << "GOODBYE\n\n";
            break;
        }
        // Clear the console (ANSI escape code)
        std::cout << "\033[2J\033[1;1H";
    }
    return 0;
}

int main()
{
    calculator(); // Call calculator function
    return 0;
}