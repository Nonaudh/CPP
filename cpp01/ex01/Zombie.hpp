#ifndef ZOMBIE_H
# define ZOMBIE_H

#include <string>
#include <iostream>

class   Zombie
{
	public:
		Zombie(void);
		~Zombie(void);
		Zombie	*zombieHorde(int N, std::string name);
		void	set_name(std::string name);
		void	announce();

	private:
		std::string	name;
	
};

#endif