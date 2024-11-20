#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <string>
#include <iostream>

class   Zombie
{
	public:
		Zombie(void);
		~Zombie(void);
		void	set_name(std::string name);
		void	announce();

	private:
		std::string	name;
	
};

Zombie	*zombieHorde(int N, std::string name);

#endif