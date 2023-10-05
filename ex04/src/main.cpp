#include <iostream>
#include <string>
#include <fstream>
#include "../inc/replace.hpp"

std::string replace_name(std::string file, std::string s1, std::string s2)
{
	size_t	pos;
	size_t	len;

	pos = file.find(s1);
	if (pos == (size_t) - 1)
	{
		std::cerr << "No occurrence found in filename." << std::endl;
		return ("");
	}
	len = s1.length();
	file.erase(pos, len);
	file.insert(pos, s2);
	return (file);
}

int main(int argc, char **argv)
{
	if (argc != 4)
	{	
		std::cerr << "Three argument required." << std::endl;
		return (ARG_ERROR);
	}
	std::ifstream infile;
	std::ofstream outfile;
	std::string file;
	std::string line;

	outfile.open(file.c_str());
	if (!outfile.is_open())
	{	
		std::cerr << "Outfile could not be opened or created." << std::endl;
		return (OPEN_ERROR);
	}
	infile.open(argv[1]);
	if (!infile.is_open())
	{
		std::cerr << "Infile could not be opened or found." << std::endl;
		return (OPEN_ERROR);
	}
	file = replace_name(argv[1], argv[2], argv[3]);
	if (file.empty())
		return (REP_ERROR);
	while (infile.good())
	{	
		std::getline(infile, line);
		outfile << line;
	}		
	infile.close();
	outfile.close();
	return (EXIT_SUCCESS);
}