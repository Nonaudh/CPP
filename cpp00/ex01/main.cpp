#include "Directory.hpp"

int	main(void)
{
	PhoneBook PB;
	std::string line;

	while (1)
	{
		std::getline(std::cin, line);
		if (!line.compare("ADD"))
			PB.new_contact();
		else if (!line.compare("SEARCH"))
			PB.display_contact();
		else if (!line.compare("EXIT"))
			break;
		else
			std::cout << "Unknow command" << std::endl;
	}
	return (0);
}
