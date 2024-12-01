#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
	public:
		ScavTrap(void);
		ScavTrap(ScavTrap& ref);
		ScavTrap(std::string name);
		~ScavTrap(void);
		ScavTrap&	operator=(ScavTrap& ref);

		void	attack(const std::string& target);
		void	guardGate(void);
};

# endif