#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int	main (void)
{
	ScavTrap Tmp("Michel blanc");
	ScavTrap Mich = Tmp;

	Mich.guardGate();
	Mich.beRepaired(100);
	Mich.takeDamage(100);
	Mich.takeDamage(100);
}