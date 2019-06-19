
#include "menu.h"
#include "convertToBase10.h"
#include "convertToBaseN.h"
#include <iostream>
#include <locale>

    void Menu::runProgram()
    {
        do
        {
            printOptions();
            int userOption = getUserOption();
            switch(userOption)
            {
                case 1: 
                    runBase10ToBaseN();
                break;
                case 2:
                    runBaseNToBase10();
                break;
                case 3:
                    runBaseAToBaseB();
                break;
                default:
                    std::cout << std::endl << "Invalid option!";
                break;

            }
        }
        while((std::tolower(promptToContinue(), std::locale()) == 'y'));
    }
    void Menu::printOptions()
    {
        std::cout << "\nHere is what the program can do: " << "\n";
        std::cout << "\n\tConvert base 10 to base N program: 1\n";
        std::cout << "\tConvert base N to base 10 program: 2\n";
        std::cout << "\tConvert base A to base B program: 3\n"; 
    }
    int Menu::getUserOption()
    {
        std::cout << std::endl << "Enter program number: ";
        int number;
        std::cin >> number;
        return number;
    }

    void Menu::runBase10ToBaseN() //Program 1: Convert base 10 to base N.
    {
        std::cout << std::endl <<"Enter base 10 number: ";
        int base10;
        std::cin >> base10;

        std::cout << std::endl <<"Enter the base that will be converted to: ";
        int baseN;
        std::cin >> baseN;
    
        std::cout << "\n\n" << base10 << " in base " << baseN << " is " << convertFromBase10ToBaseN(base10, baseN);
    }
    void Menu::runBaseNToBase10() //Program 2: Convert base N to base 10 program
    {
        std::cout << std::endl << "Enter base N: ";
        int baseN;
        std::cin >> baseN;

        std::cout << std::endl << "Enter the base N number: ";
        std::string baseNNumber;
        std::cin >> baseNNumber;

        std::cout << "\n\n" << baseNNumber << " in base 10 is " << convertFromBaseNToBase10(baseN, baseNNumber);
    }
    void Menu::runBaseAToBaseB() //Program 3: Convert base A to base B program
    {
        std::cout << std::endl << "Enter first base: ";
        int baseN1;
        std::cin >> baseN1;

        std::cout << std::endl << "Enter first base number: ";
        std::string baseN1Number;
        std::cin >> baseN1Number;

        int firstBaseInBase10 = convertFromBaseNToBase10(baseN1, baseN1Number);

        std::cout << std::endl << "Enter second base: ";
        int baseN2;
        std::cin >> baseN2;

        std::cout << "\n\n" << baseN1Number << " in base "<< baseN1 << " is " << 
            convertFromBase10ToBaseN(firstBaseInBase10, baseN2) << " in base "  << baseN2;
    }

    char Menu::promptToContinue()
    {
        std::cout << "\n\nDo you want to continue?";
        std::cout << "\n\tYes - Y";
        std::cout << "\n\tNo - Any other character";
        
        std::cout << std::endl << "Your choice: ";
        char character;
        std::cin >> character;

        return character;
    }