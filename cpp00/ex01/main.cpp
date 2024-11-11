#include "directory.hpp"

int	main(void)
{
	PhoneBook PhoneBook;
	std::string line;

	std::cout << "Command available : ADD | SEARCH | EXIT" << std::endl;
	while (1)
	{
		std::getline(std::cin, line);
		if (!line.compare("ADD"))
			PhoneBook.new_contact();
		else if (!line.compare("SEARCH"))
			PhoneBook.display_contact();
		else if (!line.compare("EXIT"))
			break;
		else
		{
			std::cout << "Unknown command" << std::endl;
			std::cout << "Command available : ADD | SEARCH | EXIT" << std::endl;
		}	
	}
	return (0);
}
