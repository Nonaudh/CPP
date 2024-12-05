#include "WrongDog.hpp"

WrongDog::WrongDog(void) : WrongAnimal()
{
	std::cout << "Default WrongDog Contructor called" << std::endl;
	this->_type = "WrongDog";
}

WrongDog::WrongDog(WrongDog& ref) : WrongAnimal()
{
	std::cout << "Copy WrongDog Contructor called" << std::endl;
	*this = ref;
}

WrongDog::~WrongDog(void)
{
	std::cout << "Default WrongDog Destructor called" << std::endl;
}

WrongDog&	WrongDog::operator=(WrongDog& ref)
{
	if (this != &ref)
		this->_type = ref._type;
	return (*this);
}

void	WrongDog::makeSound(void) const
{
	std::cout << "Fouw Fouw !" << std::endl;
}
