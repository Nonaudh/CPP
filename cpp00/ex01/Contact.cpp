#include "directory.hpp"

Contact::Contact(void)
{
	return ;
}

Contact::~Contact(void)
{
	 return ;
}

void	Contact::set_first_name(std::string line)
{
	this->first_name = line;
	return ;
}

void	Contact::set_last_name(std::string line)
{
	this->last_name = line;
	return ;
}

void	Contact::set_nickname(std::string line)
{
	this->nickname = line;
	return ;
}

void	Contact::set_phone_number(std::string line)
{
	this->phone_number = line;
	return ;
}

void	Contact::set_darkest_secret(std::string line)
{
	this->darkest_secret = line;
	return ;
}

std::string Contact::get_first_name(void)
{
	return (this->first_name);
}

std::string Contact::get_last_name(void)
{
	return (this->last_name);
}

std::string Contact::get_nickname(void)
{
	return (this->nickname);
}

std::string Contact::get_phone_number(void)
{
	return (this->phone_number);
}

std::string Contact::get_darkest_secret(void)
{
	return (this->darkest_secret);
}
