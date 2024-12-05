#include "Dog.hpp"
#include "Brain.hpp"

Dog::Dog(void) : AAnimal()
{
	std::cout << "Default Dog Contructor called" << std::endl;
	this->_type = "Dog";
	this->_brain = new Brain();
}

Dog::Dog(Dog& ref) : AAnimal(ref)
{
	std::cout << "Copy Dog Contructor called" << std::endl;
	this->_type = ref._type;
	this->_brain = new Brain();
	*this->_brain = *ref._brain;
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
		*this->_brain = *ref._brain;
	}
	return (*this);
}

void	Dog::makeSound(void) const
{
	std::cout << "Wouf Wouf !" << std::endl;
}
