#include <iostream>
#include <cctype>
#include <cstdlib>

void intTest()
{
    while (true)
    {
        char ch{};
        char cnt{};
        std::cout << "Wpisz znak: ";
        std::cin >> ch;
        bool isDigit = std::isdigit(ch);
        std::cout << "Czy '" << ch << "' jest cyfrą? " << (isDigit ? "Tak" : "Nie") << std::endl;
        std::cout << "Kontynuować?: ";
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

int kalkulator()
{
    std::cout << "Wypasiony KALKULATOR\u00AE \n \n";
    while (true)
    {
        int a{}, b{}; // Zmiana na int
        char c{};
        int wynik{};
        char kontynuacja{};

        std::cout << "Wpisz pierwszą liczbę: ";
        std::cin >> a;
        std::cout << "Wpisz drugą liczbę: ";
        std::cin >> b;

        std::cout << "Jakie działanie wykonać? (+, -, *, /): ";
        std::cin >> c;

        if (c == '+')
            wynik = a + b;
        else if (c == '-')
            wynik = a - b;
        else if (c == '*')
            wynik = a * b;
        else if (c == '/')
        {
            if (b == 0)
            {
                std::cout << "Nie dziel przez zero!\n";
                continue;
            }
            wynik = a / b;
        }
        else
        {
            std::cout << "Nieznane działanie!\n";
            continue;
        }

        std::cout << "Wynik: " << wynik << "\n\n";
        std::cout << "Chcesz kontynuować?: (T/N) ";
        std::cin >> kontynuacja;

        if (kontynuacja == 'N' || kontynuacja == 'n')
        {
            std::cout << "NAURA\n\n";
            break;
        }
        std::cout << "\033[2J\033[1;1H";
    }
    return 0;
}



int main()
{
    kalkulator();
    return 0;
}   