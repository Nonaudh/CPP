#include "Animal.hpp"

Animal::Animal(void) : _type("Air")
{
	std::cout << "Default Animal Contructor called" << std::endl;
}

Animal::Animal(Animal& ref)
{
	std::cout << "Copy Animal Contructor called" << std::endl;
	*this = ref;
}

Animal::~Animal(void)
{
	std::cout << "Default Animal Destructor called" << std::endl;
}

Animal&	Animal::operator=(Animal& ref)
{
	if (this != &ref)
		this->_type = ref._type;
	return (*this);
}

std::string	Animal::getType(void) const
{
	return (this->_type);
}

void	Animal::makeSound(void) const
{
	std::cout << "Hmm Hmm.. Hellow there" << std::endl;
}
