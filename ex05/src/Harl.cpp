#include "../inc/Harl.hpp"
#include <iostream>

Harl::Harl(void)
{
	std::cout << "(Harl created) Why did you have to wake me up?" << std::endl;
}

Harl::~Harl(void)
{
	std::cout << "(Harl destroyed) Sorry I have bothered you with my friendship!" << std::endl; 
}

void Harl::debug(void)
{	
	std::cout << "[ DEBUG ]" << std::endl; 
	std::cout << "There's a little bit of code in your spaghetti" << std::endl;
}

void Harl::info(void)
{	
	std::cout << "[ INFO ]" << std::endl; 
	std::cout << "50 trillions bytes weren't freed. Diagnosis: You are incompetent." << std::endl;
}

void Harl::warning(void)
{	
	std::cout << "[ WARNING ]" << std::endl; 
	std::cout << "Are you sure you want to commit that?" << std::endl;
}

void Harl::error(void)
{	
	std::cout << "[ ERROR ]" << std::endl; 
	std::cout << "The compiler just got up and left." << std::endl;
}

void Harl::complain(std::string level)
{
	void (Harl::*ptr[4]) (void) = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
	std::string levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};

	for(int i = 0; i < 4; i++)
	{
		if (levels[i] == level)
		{
			(this->*ptr[i])();
			break;
		}
	}
}