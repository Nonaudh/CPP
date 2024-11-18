#ifndef HUMANB_H
# define HUMANB_H

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