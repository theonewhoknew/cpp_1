#include "../inc/Weapon.hpp"

Weapon::Weapon(std::string type)
{
	Weapon::setType(type);
}

const std::string &Weapon::getType(void)
{
	return (this->_type);
}

void Weapon::setType(const std::string &new_type)
{
	this->_type = new_type;
}