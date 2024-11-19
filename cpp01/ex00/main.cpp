#include "Zombie.hpp"

int	main(void)
{
	Zombie	*Zomb = NULL;

	Zomb = newZombie("Pedro");
	Zomb->announce();
	randomChump("Aragorn");
	delete (Zomb);
	return (0);
}