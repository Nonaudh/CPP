#include "Zombie.hpp"

void	Zombie::randomChump(std::string name)
{
	Zombie Zomb(name);

	Zomb.announce();
	return ;
}
