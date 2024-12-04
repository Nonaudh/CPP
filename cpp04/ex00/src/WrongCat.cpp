#include "WrongCat.hpp"

WrongCat::WrongCat(void) : WrongAnimal()
{
	std::cout << "Default WrongCat Contructor called" << std::endl;
	this->_type = "WrongCat";
}

WrongCat::WrongCat(WrongCat& ref) : WrongAnimal()
{
	std::cout << "Copy WrongCat Contructor called" << std::endl;
	*this = ref;
}

WrongCat::~WrongCat(void)
{
	std::cout << "Default WrongCat Destructor called" << std::endl;
}

WrongCat&	WrongCat::operator=(WrongCat& ref)
{
	if (this != &ref)
		this->_type = ref._type;
	return (*this);
}

void	WrongCat::makeSound(void) const
{
	std::cout << "Wrong Miaou Miaou !" << std::endl;
}
