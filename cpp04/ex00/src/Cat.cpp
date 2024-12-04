#include "Cat.hpp"

Cat::Cat(void) : Animal()
{
	std::cout << "Default Cat Contructor called" << std::endl;
	this->_type = "Cat";
}

Cat::Cat(Cat& ref) : Animal()
{
	std::cout << "Copy Cat Contructor called" << std::endl;
	*this = ref;
}

Cat::~Cat(void)
{
	std::cout << "Default Cat Destructor called" << std::endl;
}

Cat&	Cat::operator=(Cat& ref)
{
	if (this != &ref)
		this->_type = ref._type;
	return (*this);
}

void	Cat::makeSound(void) const
{
	std::cout << "Miaou Miaou !" << std::endl;
}
