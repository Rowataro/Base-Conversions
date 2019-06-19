#include "convertToBase10.h"
#include <iostream>
#include <cctype>
int valueInBase10(char numberInBaseN)
{
    if(numberInBaseN >= '0' && numberInBaseN <= '9')
    {
        return (int)numberInBaseN - '0';
    }
    else
    {
        return (int)numberInBaseN - 'A' + 10; //Displaces base letters to effectively make them A=10, B=11, C=12, ...
    }
    
}

int convertFromBaseNToBase10(int baseN, std::string number)
{
    int base10Result = 0; 
    int power = 1;

    for(auto &c : number)
    {
        c = std::toupper(c);
    }

    for(int i = number.size() - 1; i >= 0; --i)
    {
        if(valueInBase10(number[i]) >= baseN )
        {
            std::cout << "Number with base "<< baseN << " is invalid because ";
            return -1;
        }
        base10Result += valueInBase10(number[i])*power;
        power *= baseN;
    }
    
    return base10Result;
}