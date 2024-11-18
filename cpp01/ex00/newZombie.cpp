#include "Zombie.hpp"

Zombie *Zombie::newZombie(std::string name)
{
	Zombie	*Zomb = NULL;

	Zomb = new Zombie(name);
	return (Zomb);
}
