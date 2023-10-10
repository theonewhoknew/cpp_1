#include "../inc/Harl.hpp"
#include <string>
#include <iostream>

int get_number(std::string command)
{	
	std::string levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};

	for (std::string::iterator it = command.begin(); it != command.end(); ++it)
	{
		if (islower(*it))
			*it = toupper(*it);
	}
	for (int i = 0; i < 4; i++)
	{	
		
		if (levels[i] == command)
			return (i);
	}
	return (-1);
}

int main(int argc, char **argv)
{
	Harl instance;
	int n;

	if (argc != 2)
	{
		std::cout << "[Probably complaining about insignificant problems]" << std::endl;
		return (EXIT_SUCCESS);
	}
	n = get_number(std::string(argv[1]));
	switch (n)
	{
		case 0:
			instance.complain("DEBUG");
		case 1:
			instance.complain("INFO");
		case 2:
			instance.complain("WARNING");
		case 3:
			instance.complain("ERROR");
			break;
		default:
			std::cout << "[Probably complaining about insignificant problems]" << std::endl;
	}
	return (EXIT_SUCCESS);
}