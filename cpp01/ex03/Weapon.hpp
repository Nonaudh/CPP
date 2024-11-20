#ifndef WEAPON_HPP
# define WEAPON_HPP

#include "main.hpp"

class	Weapon
{
	public:
		Weapon(std::string type);
		~Weapon(void);
		const std::string	&getType(void) const;
		void				setType(const std::string type);

	private:
		std::string	type;
};

# endif