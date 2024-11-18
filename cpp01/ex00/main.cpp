#include "Zombie.hpp"

int	main(void)
{
	Zombie	*Zomb = NULL;

	Zomb = Zomb->newZombie("Pedro");
	Zomb->announce();
	Zomb->randomChump("Aragorn");
	delete (Zomb);
	return (0);
}