#ifndef HUMANB_H
# define HUMANB_H
# include <string>
# include "Weapon.hpp"

class HumanB 
{
private:
	Weapon* _weapon;
	std::string _name;

public:	
	HumanB(std::string name);
	~HumanB(void);
	void attack(void);
	void setWeapon(Weapon &new_weapon);
	std::string getWeapon(void);
};

#endif