#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(void) : _type("Air")
{
	std::cout << "Default WrongAnimal Contructor called" << std::endl;
}

WrongAnimal::WrongAnimal(WrongAnimal& ref)
{
	std::cout << "Copy WrongAnimal Contructor called" << std::endl;
	*this = ref;
}

WrongAnimal::~WrongAnimal(void)
{
	std::cout << "Default WrongAnimal Destructor called" << std::endl;
}

WrongAnimal&	WrongAnimal::operator=(WrongAnimal& ref)
{
	if (this != &ref)
		this->_type = ref._type;
	return (*this);
}

std::string	WrongAnimal::getType(void) const
{
	return (this->_type);
}

void	WrongAnimal::makeSound(void) const
{
	std::cout << "I think there is a problem" << std::endl;
}
