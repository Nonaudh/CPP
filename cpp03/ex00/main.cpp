#include "ClapTrap.hpp"

int	main (void)
{
	ClapTrap Jose("Jose Bove");
	ClapTrap Pedro("Pedro");

	std::cout << "Jose have " << Jose.get_hit_point() << " health points" << std::endl;
	std::cout << "Pedro have " << Pedro.get_hit_point() << " health points" << std::endl << std::endl;
	Jose.attack("Pedro");
	Pedro.takeDamage(4);
	std::cout << "Jose have " << Jose.get_hit_point() << " health points" << std::endl;
	std::cout << "Pedro have " << Pedro.get_hit_point() << " health points" << std::endl << std::endl;
	Jose.beRepaired(10);
	Pedro.beRepaired(10);
	std::cout << "Jose have " << Jose.get_hit_point() << " health points" << std::endl;
	std::cout << "Pedro have " << Pedro.get_hit_point() << " health points" << std::endl << std::endl;
	for (int i = 0; i < 10; ++i)
		Jose.beRepaired(10);
	std::cout << "Jose have " << Jose.get_hit_point() << " health points" << std::endl << std::endl;
}