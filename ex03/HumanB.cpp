#include "HumanB.hpp"
#include <iostream>

HumanB::HumanB(std::string name): _name(name) 
{	
	std::cout << name << " was created with no weapon." << std::endl;
	_weapon = NULL;
}

HumanB::~HumanB()
{
	std::cout << this->_name << " went to rest!" << std::endl;
}

void HumanB::attack(void)
{
	std::cout << this->_name << " attacks with their " << this->getWeapon() << std::endl; 
}

void HumanB::setWeapon(Weapon &new_weapon)
{
	this->_weapon = &new_weapon;
}

std::string HumanB::getWeapon(void)
{
	std::string str;
	str = this->_weapon->getType();
	return (str);
}
