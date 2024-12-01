#include "ScavTrap.hpp"

void	ScavTrap::attack(const std::string& target)
{
	if (this->_energy_point)
	{
		std::cout << this->_name << " did an insane ScavTrap2000 attack on " << target << ", causing " << this->_attack_damage << " points of damage !" << std::endl;
		this->_energy_point--;
	}
	else
		std::cout << this->_name << " is too tired to ScavTrap2000" << std::endl;
}

void	ScavTrap::guardGate(void)
{
    std::cout << this->_name << " is now in Gate keeper mode" << std::endl;
}
