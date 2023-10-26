#include "../inc/HumanB.hpp"
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
	if (_weapon)
		std::cout << this->_name << " attacks with their " << this->_weapon->getType() << std::endl;
	else
		std::cout << this->_name << " has no weapon to attack with!" << std::endl;
}

void HumanB::setWeapon(Weapon &new_weapon)
{
	this->_weapon = &new_weapon;
}
