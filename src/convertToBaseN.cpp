#include "convertToBaseN.h"

char convertToCharactersAccordingToBaseSystem(unsigned int number)
{
	if(number >= 0 && number <= 9)
	{
		return (char)(number + '0'); //Adding '0' ensures the digit is turned into its equivalent in ASCII 
	}
	else
	{
		return (char)(number - 10 + 'A'); //Subtracting 10 ensures that the number properly increments from 'A' 
										  //assuming that in base 11 and above 'A' = 10, 'B' = 11, 'C' = 12,...
	}
}
std::string reverse(const std::string &inputString)
{
	std::string tempString= "";
	for(int i = inputString.size() - 1; i >= 0; --i)
	{
		tempString += inputString[i];
	}
	return tempString;
}
std::string convertFromBase10ToBaseN(unsigned int base10Number, int baseN)
{
	std::string reversedNumberInBaseN = "";

	while(base10Number > 0)
	{
		reversedNumberInBaseN += convertToCharactersAccordingToBaseSystem(base10Number%baseN);
		base10Number /= baseN;
	}

	return reverse(reversedNumberInBaseN);
}