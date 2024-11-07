#include "Directory.hpp"

PhoneBook::PhoneBook(void) : current_number(0), nb_of_contact(0)
{
	std::cout << "PhoneBook Constructor" << std::endl;
	return ;
}

PhoneBook::~PhoneBook(void)
{
	 std::cout << "PhoneBook Destructor" << std::endl;
	 return ;
}

void	PhoneBook::new_contact(void)
{
	std::string line;

	if (current_number == 8)
		current_number = 0;
	std::cout << "Enter First Name" << std::endl;
	std::getline(std::cin, line);
	if (line.empty())
	{
		std::cout << "Can’t have empty fields" << std::endl;
		return ;
	}
	this->contact[current_number].set_first_name(line);
	std::cout << "Enter Last Name" << std::endl;
	std::getline(std::cin, line);
	if (line.empty())
	{
		std::cout << "Can’t have empty fields" << std::endl;
		return ;
	}
	this->contact[current_number].set_last_name(line);
	std::cout << "Enter Nickname" << std::endl;
	std::getline(std::cin, line);
	if (line.empty())
	{
		std::cout << "Can’t have empty fields" << std::endl;
		return ;
	}
	this->contact[current_number].set_nickname(line);
	std::cout << "Enter Phone Number" << std::endl;
	std::getline(std::cin, line);
	if (line.empty())
	{
		std::cout << "Can’t have empty fields" << std::endl;
		return ;
	}
	this->contact[current_number].set_phone_number(line);
	std::cout << "Enter Darkest Secret" << std::endl;
	std::getline(std::cin, line);
	if (line.empty())
	{
		std::cout << "Can’t have empty fields" << std::endl;
		return ;
	}
	this->contact[current_number].set_darkest_secret(line);
	if (nb_of_contact != 8)
		nb_of_contact++;
	current_number++;
}

void	PhoneBook::display_contact(void)
{
	std::string	str;
	int			index;

	if (this->nb_of_contact == 0)
	{
		std::cout << "No contact information" << std::endl;
		return ;
	}
	std::cout << std::setw(10) << "Index" << " | ";
	std::cout << std::setw(10) << "First Name" << " | ";
	std::cout << std::setw(10) << "Last Name" << " | ";
	std::cout << std::setw(10) << "Nickname" << std::endl;
	for (int i = 0; i < this->nb_of_contact; i++)
	{
		std::cout << std::setw(10) << i << " | ";
		str = this->contact[i].get_first_name();
		if (str.length() > 9)
			str = str.substr(0, 9) + ".";
		std::cout <<  std::setw(10) << str << " | ";
		str = this->contact[i].get_last_name();
		if (str.length() > 9)
			str = str.substr(0, 9) + ".";
		std::cout <<  std::setw(10) << str << " | ";
		str = this->contact[i].get_nickname();
		if (str.length() > 9)
			str = str.substr(0, 9) + ".";
		std::cout <<  std::setw(10) << str << std::endl;
	}
	std::cout << "Enter the index of an existing Contact" << std::endl;
	std::getline(std::cin, str);
	index = atoi(str.c_str());
	if ((index == 0 && str[0] != '0') || index < 0 || index > 7 || index >= this->nb_of_contact)
	{
		std::cout << "Invalid input" << std::endl;
		return ;
	}
	std::cout << "First Name : " << this->contact[index].get_first_name() << std::endl;
	std::cout << "Last_name : " << this->contact[index].get_last_name() << std::endl;
	std::cout << "Nickname : " << this->contact[index].get_nickname() << std::endl;
	std::cout << "Phone Number : " << this->contact[index].get_phone_number() << std::endl;
	std::cout << "Darkest Secret : " << this->contact[index].get_darkest_secret() << std::endl;
}
