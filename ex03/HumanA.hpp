#ifndef HUMANA_H
# define HUMANA_H
# include <string>
# include "Weapon.hpp"

class HumanA 
{
private:

	std::string _name;
	Weapon& _weapon;
	
public:	

	HumanA(std::string name, Weapon& weapon);
	~HumanA(void);
	std::string getWeapon(void);
	void attack(void);
};

#endif