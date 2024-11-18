#include "Zombie.hpp"

Zombie::Zombie(void)
{
	;
}

Zombie::~Zombie(void)
{
	;
}

void	Zombie::set_name(std::string name)
{
	this->name = name;
	return ;
}

void	Zombie::announce()
{
	std::cout << this->name << ": BraiiiiiiinnnzzzZ..." << std::endl;
	return ;
}
