#ifndef HUMANB_HPP
# define HUMANB_HPP

#include "main.hpp"

class   HumanB
{
	public:
		HumanB(std::string name);
		~HumanB(void);
		void	setWeapon(Weapon &weapon);
		void	attack(void);

	private:
		std::string	name;
		Weapon 		*weapon;
};

# endif
