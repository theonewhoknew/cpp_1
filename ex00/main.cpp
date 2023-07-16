#include "Zombie.hpp"
#include <iostream>

int main(void)
{
	Zombie *Paul;

	Paul = newZombie("Paul");
	Paul->announce();
	delete Paul;
	randomChump("John");
}