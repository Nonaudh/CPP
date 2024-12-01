#include "ClapTrap.hpp"

int	main (void)
{
	ClapTrap Jose("José Bové");

	for (int i = 0; i < 15; ++i)
		Jose.attack("Casper");
	Jose.takeDamage(150);
}