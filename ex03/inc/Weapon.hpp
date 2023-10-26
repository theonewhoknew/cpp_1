#ifndef WEAPON_H
# define WEAPON_H
# include <string>

class Weapon 
{
private:
	std::string	_type;
public:	
	Weapon(std::string type);
	const std::string &getType(void);
	void setType(const std::string &new_type);
};

#endif