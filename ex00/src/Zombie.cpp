#include "../inc/Zombie.hpp"
#include <string>
#include <iostream>

Zombie::Zombie(void)
{

}

Zombie::~Zombie(void)
{
	std::cout << this->getName() << ":" << "Diiiiieeeeeeeeeedd..." << std::endl;
}

void Zombie::announce(void)
{
	std::cout << this->getName() << ":" << " BraiiiiiiinnnzzzZ..." << std::endl;
}

std::string Zombie::getName(void)
{
	return (this->_name);
}

void Zombie::setName(std::string name)
{
	this->_name = name;
}