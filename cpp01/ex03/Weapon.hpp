#ifndef WEAPON_H
# define WEAPON_H

#include "main.hpp"

class	Weapon
{
	public:
		Weapon(void);
		Weapon(std::string type);
		~Weapon(void);
		const std::string	&getType(void);
		void				setType(std::string type2);

	private:
		std::string	type;

};

# endif