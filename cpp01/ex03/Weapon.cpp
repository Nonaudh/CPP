#include "main.hpp"

Weapon::Weapon(void)
{
	;
}

Weapon::Weapon(std::string type)
{
	this->type = type;
}

Weapon::~Weapon(void)
{
	;
}

const std::string	&Weapon::getType(void)
{
	return (this->type);
}

void	Weapon::setType(std::string type2)
{
	this->type = type2;
	return ;
}