#include "DiamondTrap.hpp"
#include "ScavTrap.hpp"
#include "ClapTrap.hpp"

void	DiamondTrap::attack(const std::string& target)
{
	ScavTrap::attack(target);
}

void	DiamondTrap::whoAmI(void)
{
	std::cout << "My name is " << this->_name << ", and my ClapTrap name is " << ClapTrap::_name << std::endl;
}
