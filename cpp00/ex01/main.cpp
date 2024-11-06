#include "Directory.hpp"

int	main(void)
{
	PhoneBook PB;
	std::string line;

	std::getline(std::cin, line);
	PB.set_contact(line);
	PB.print_contact();
	return (0);
}
