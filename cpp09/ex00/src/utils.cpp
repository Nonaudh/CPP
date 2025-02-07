#include "BitcoinExchange.hpp"

bool	isSpaceOrTab(char c)
{
	return (c == ' ' || c == '\t');
}

int	bad_line(std::string line)
{
	if (std::find_if(line.begin(), line.end(), IsInvalid) == line.end())
		return (0);
	return (1);
}

int	bad_price(double price)
{	
	if (price < 0)
	{
		std::cerr << "Error: not a positive number." << std::endl;
		return (1);
	}	
	if (price > INT_MAX)
	{
		std::cerr << "Error: too large number." << std::endl;
		return (1);
	}
	return (0);
}

bool	IsInvalid(char c)
{
	return (!isdigit(c) && c != '-');
}
