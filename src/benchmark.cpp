#include "benchmark.h"
#include "convertToBase10.h"
#include "convertToBaseN.h"
#include <iostream>
#include <chrono>
#include <cmath>

void convertFirstBaseNNumbersToBase10(int max, int baseN)
{	
	for(int i = 0; i <= max; ++i)
	{
		std::cout << "\nNumber in base " << baseN << ": " << convertFromBase10ToBaseN(i, baseN) << " vs. ";
		std::cout << "Number in base 10 " << i;
	}
}
void benchmark()
{
	using Time = std::chrono::high_resolution_clock;
	Time::time_point t1 = Time::now();
	convertFirstBaseNNumbersToBase10(10000, 16);
	std::cout << "\n\n" << convertFromBase10ToBaseN(49374, 16) << " is cool!";
	Time::time_point t2 = Time::now();
	
	auto duration = std::chrono::duration_cast<std::chrono::nanoseconds>(t2-t1).count();
	std::cout <<"\n\nDuration: " <<duration * std::pow(10, -9);
}