#include "Dog.hpp"
#include "Brain.hpp"

Dog::Dog(void) : Animal()
{
	std::cout << "Default Dog Contructor called" << std::endl;
	this->_type = "Dog";
	this->_brain = new Brain();
}

Dog::Dog(Dog& ref) : Animal()
{
	std::cout << "Copy Dog Contructor called" << std::endl;
	*this = ref;
}

Dog::~Dog(void)
{
	std::cout << "Default Dog Destructor called" << std::endl;
	delete (this->_brain);
}

Dog&	Dog::operator=(Dog& ref)
{
	if (this != &ref)
	{
		this->_type = ref._type;
		this->_brain = ref._brain;
	}
	return (*this);
}

void	Dog::makeSound(void) const
{
	std::cout << "Wouf Wouf !" << std::endl;
}
