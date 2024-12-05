#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "DiamondTrap.hpp"

int	main (void)
{
	FragTrap Jose("Jose Bove");
	DiamondTrap Pedro("Pedro");

	std::cout << "Jose have " << Jose.get_hit_point() << " health points" << std::endl;
	std::cout << "Pedro have " << Pedro.get_hit_point() << " health points" << std::endl << std::endl;
	Jose.attack("Pedro");
	Pedro.attack("Jose");
	Pedro.takeDamage(4);
	Jose.takeDamage(6);
	std::cout << "Jose have " << Jose.get_hit_point() << " health points" << std::endl;
	std::cout << "Pedro have " << Pedro.get_hit_point() << " health points" << std::endl << std::endl;
	Jose.beRepaired(10);
	Pedro.beRepaired(10);
	std::cout << "Jose have " << Jose.get_hit_point() << " health points" << std::endl;
	std::cout << "Pedro have " << Pedro.get_hit_point() << " health points" << std::endl << std::endl;
	for (int i = 0; i < 10; ++i)
		Jose.beRepaired(10);
	std::cout << "Jose have " << Jose.get_hit_point() << " health points" << std::endl << std::endl;
	Jose.highFivesGuys();
	Pedro.whoAmI();
	Pedro.highFivesGuys();
	Pedro.guardGate();
	std::cout << std::endl;
}