#include "FragTrap.hpp"

void	FragTrap::attack(const std::string& target)
{
	if (this->_energy_point)
	{
		std::cout << this->_name << " did a boring FragTrap attack on " << target << ", causing " << this->_attack_damage << " points of damage !" << std::endl;
		this->_energy_point--;
	}
	else
		std::cout << this->_name << " is too tired to FragTrap attack" << std::endl;
}

void	FragTrap::highFivesGuys(void)
{
	std::cout << this->_name << " positively ask for an high fives" << std::endl;
}
