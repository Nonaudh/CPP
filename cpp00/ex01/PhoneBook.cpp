#include "Directory.hpp"

PhoneBook::PhoneBook(void)
{
	std::cout << "Constructor called" << std::endl;
	return ;
}

PhoneBook::~PhoneBook(void)
{
	 std::cout << "Destructor called" << std::endl;
	 return ;
}

void	PhoneBook::set_contact(std::string line)
{
	this->contact[0].set_name(line);
	return ;
}

void	PhoneBook::print_contact(void)
{
	std::cout << this->contact[0].get_name() << std::endl;
	return ;
}
