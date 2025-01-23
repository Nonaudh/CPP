#include "ScalarConverter.hpp"

void	print_int(std::string str)
{
	long	nb = atol(str.c_str());

	std::cout << "char: ";
	if (nb < 0 || nb > 127)
		std::cout << "impossible" << std::endl;
	else if (!isprint(nb))
		std::cout << "Non displayable" << std::endl;
	else
		std::cout << static_cast<char>(nb) << std::endl;
	
	std::cout << "int: ";
	if (nb < INT_MIN || nb > INT_MAX)
		std::cout << "impossible" << std::endl;
	else
		std::cout << static_cast<int>(nb) << std::endl;

	std::cout << "float: ";
	std::cout << static_cast<float>(nb) << ".0f" << std::endl;

	std::cout << "double: ";
	std::cout << static_cast<double>(nb) << ".0" << std::endl;
}

void	print_char(std::string str)
{
	std::size_t	i = str.length() - 1;
	if (i == 2)
		i = 1;

	std::cout << "char: " << str[i] << std::endl;
	std::cout << "int: " << static_cast<int>(str[i]) << std::endl;
	std::cout << "float: " << static_cast<float>(str[i]) << ".0f" << std::endl;
	std::cout << "double: " << static_cast<double>(str[i]) << ".0" << std::endl;
}

void	print_pseudo(std::string str)
{
	if (str == "nan" || str == "nanf")
	{
		std::cout << "char: " << "impossible" << std::endl;
		std::cout << "int: " << "impossible" << std::endl;
		std::cout << "float: " << "nanf" << std::endl;
		std::cout << "double: " << "nan" << std::endl;
	}
	if (str == "+inf" || str == "+inff")
	{
		std::cout << "char: " << "impossible" << std::endl;
		std::cout << "int: " << "impossible" << std::endl;
		std::cout << "float: " << "inff" << std::endl;
		std::cout << "double: " << "inf" << std::endl;
	}
	if (str == "-inf" || str == "-inff")
	{
		std::cout << "char: " << "impossible" << std::endl;
		std::cout << "int: " << "impossible" << std::endl;
		std::cout << "float: " << "-inff" << std::endl;
		std::cout << "double: " << "-inf" << std::endl;
	}
}

void	print_number(std::string str)
{
	double nb = atof(str.c_str());
	
	std::cout << "char: ";
	if (nb < 0 || nb > 127)
		std::cout << "impossible" << std::endl;
	else if (!isprint(nb))
		std::cout << "Non displayable" << std::endl;
	else
		std::cout << static_cast<char>(nb) << std::endl;

	std::cout << "int: ";
	if (static_cast<long>(nb) < INT_MIN || static_cast<long>(nb) > INT_MAX)
		std::cout << "impossible" << std::endl;
	else
		std::cout << static_cast<int>(nb) << std::endl;

	std::cout.precision(1);
	std::cout << std::fixed << "float: " << static_cast<float>(nb);
	std::cout << "f" << std::endl;
	std::cout << "double: " << static_cast<double>(nb) ;
	std::cout << std::endl;
}
