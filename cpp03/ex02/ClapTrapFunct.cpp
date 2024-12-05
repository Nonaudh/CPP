#include "ClapTrap.hpp"

std::size_t	ClapTrap::get_hit_point(void) const
{
	return (this->_hit_point);
}

void	ClapTrap::attack(const std::string& target)
{
	if (this->_energy_point)
	{
		std::cout << this->_name << " attacks " << target << ", causing " << this->_attack_damage << " points of damage !" << std::endl;
		this->_energy_point--;
	}
	else
		std::cout << this->_name << " is too tired to do something" << std::endl;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	std::cout << this->_name << " got hit and loose " << amount << " health points" << std::endl;
	this->_hit_point -= amount;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (this->_energy_point)
	{
		std::cout << this->_name << " is repaired and get " << amount << " health points back" << std::endl;
		this->_hit_point += amount;
		this->_energy_point--;
	}
	else
		std::cout << this->_name << " is too tired to do something" << std::endl;
}
