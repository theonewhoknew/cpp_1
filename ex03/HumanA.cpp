#include "HumanA.hpp"
#include <iostream>

HumanA::HumanA(std::string name, Weapon& weapon): _name(name), _weapon(weapon)
{	
	std::cout << name << " was created armed with a " << this->getWeapon() << std::endl;
}

HumanA::~HumanA()
{
	std::cout << this->_name << " went to rest!" << std::endl;
}

void HumanA::attack(void)
{
	std::cout << this->_name << " attacks with their " << this->_weapon.getType() << std::endl; 
}

std::string HumanA::getWeapon(void)
{
	return (this->_weapon.getType());
}
