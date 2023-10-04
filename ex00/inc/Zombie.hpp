#ifndef ZOMBIE_H
# define ZOMBIE_H
# include <string>

class Zombie
{

private:
	
	std::string _name;

public:

	Zombie(void); 
	~Zombie(void);
	void announce(void);
	std::string getName(void);
	void setName(std::string name);

};

Zombie* newZombie(std::string name);
void randomChump(std::string name);

#endif