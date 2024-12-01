#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "DiamondTrap.hpp"

int	main (void)
{
	DiamondTrap Mich("Michel Blanc");

	Mich.attack("Casper");
	Mich.takeDamage(10);
	Mich.whoAmI();
}