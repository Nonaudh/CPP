#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

# include <string>
# include <iostream>
# include "ScavTrap.hpp"
# include "FragTrap.hpp"
# include "ClapTrap.hpp"

class   DiamondTrap : public ScavTrap, public FragTrap
{
	public:
		DiamondTrap(void);
		DiamondTrap(DiamondTrap &ref);
		DiamondTrap(std::string name);
		~DiamondTrap(void);
		DiamondTrap& operator=(DiamondTrap &ref);

		void	attack(const std::string& target);
		void	whoAmI(void);

	private:
		std::string _name;
};

# endif