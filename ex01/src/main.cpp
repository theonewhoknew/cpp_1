#include "../inc/Zombie.hpp"
#include <iostream>

int main(void)
{	
	Zombie *zombies;
	int n = 42;

	zombies = zombieHorde(n, "John");
	for (int i = 0; i < n; i++)
	{
		zombies[i].announce();
	}
	delete [] zombies;
	return (0);
}