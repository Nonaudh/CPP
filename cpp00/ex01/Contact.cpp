#include "Directory.hpp"

Contact::Contact(void)
{
	std::cout << "Constructor called" << std::endl;
	return ;
}

Contact::~Contact(void)
{
	 std::cout << "Destructor called" << std::endl;
	 return ;
}

void	Contact::set_name(std::string line)
{
	this->first_name = line;
}

std::string Contact::get_name(void)
{
	return (this->first_name);
}
