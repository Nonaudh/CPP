#ifndef HUMANA_H
# define HUMANA_H

#include "main.hpp"

class	HumanA
{
	public:
		HumanA(std::string name, Weapon &weapon);
		~HumanA(void);
		void	attack(void);

	private:
		std::string	name;
		Weapon 		&weapon;
};

# endif