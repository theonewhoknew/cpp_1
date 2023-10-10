#include <iostream>
#include <string>
#include <fstream>
#include "../inc/replace.hpp"

static void	replace_str(const std::string &occurrence, const std::string &replace, std::ifstream &f1, std::ofstream &f2)
{	
	std::string	line;
	size_t pos;

	while (getline(f1, line))
	{
		pos = line.find(occurrence);	
		while (pos != std::string::npos)
		{	
			line = line.erase(pos, occurrence.length());
			line = line.insert(pos, replace);
			pos = line.find(occurrence);
		}
		f2 << line << std::endl;
	}
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
	std::string occurence(argv[2]);
	std::string replace(argv[3]);
	std::string outfile_name;

	infile.open(argv[1]);
	if (!infile.is_open())
	{
		std::cerr << "Infile could not be opened or found." << std::endl;
		return (OPEN_ERROR);
	}
	outfile_name = std::string(argv[1]) + std::string(".replace");
	outfile.open(outfile_name);
	if (!outfile.is_open())
	{	
		std::cerr << "Outfile could not be opened or created." << std::endl;
		return (OPEN_ERROR);
	}
	replace_str(occurence, replace, infile, outfile);
	infile.close();
	outfile.close();
	return (EXIT_SUCCESS);
}