#include "Cat.hpp"
#include "Brain.hpp"

Cat::Cat(void) : Animal()
{
	std::cout << "Default Cat Contructor called" << std::endl;
	this->_type = "Cat";
	this->_brain = new Brain();
}

Cat::Cat(Cat& ref) : Animal()
{
	std::cout << "Copy Cat Contructor called" << std::endl;
	*this = ref;
}

Cat::~Cat(void)
{
	std::cout << "Default Cat Destructor called" << std::endl;
	delete (this->_brain);
}

Cat&	Cat::operator=(Cat& ref)
{
	if (this != &ref)
	{
		this->_type = ref._type;
		this->_brain = ref._brain;
	}
	return (*this);
}

void	Cat::makeSound(void) const
{
	std::cout << "Miaou Miaou !" << std::endl;
}
