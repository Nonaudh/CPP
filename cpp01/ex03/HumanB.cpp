#include "main.hpp"

HumanB::HumanB(std::string name) : name(name), weapon(NULL)
{
	;
}

HumanB::~HumanB(void)
{
	;
}

void	HumanB::setWeapon(Weapon &weapon)
{
	this->weapon = &weapon;
	return ;
}

void	HumanB::attack(void)
{
	if (this->weapon)
		std::cout << this->name << " attacks with their " << this->weapon->getType() << std::endl;
	else
		std::cout << this->name << " attacks with their bare hands" << std::endl;
}