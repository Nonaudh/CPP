#include "AAnimal.hpp"

AAnimal::AAnimal(void) : _type("Air")
{
	std::cout << "Default AAnimal Contructor called" << std::endl;
}

AAnimal::AAnimal(AAnimal& ref)
{
	std::cout << "Copy AAnimal Contructor called" << std::endl;
	*this = ref;
}

AAnimal::~AAnimal(void)
{
	std::cout << "Default AAnimal Destructor called" << std::endl;
}

AAnimal&	AAnimal::operator=(AAnimal& ref)
{
	if (this != &ref)
		this->_type = ref._type;
	return (*this);
}

std::string	AAnimal::getType(void) const
{
	return (this->_type);
}
