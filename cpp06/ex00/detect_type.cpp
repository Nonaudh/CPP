#include "ScalarConverter.hpp"

int	is_char(std::string str)
{
	std::size_t len = str.length();

	if ((len == 1 && isalpha(str[0]))
		|| (len == 3 && str[0] == '\'' && isalpha(str[1]) && str[2] == '\''))
		return (1);
	return (0);
}

int	is_int(std::string str)
{
	int i = 0;

	if (str[i] == '-' || str[i] == '+')
		i++;
	while (str[i] && isdigit(str[i]))
		i++;
	if (str[i] || (i == 1 && (str[0] == '-' || str[0] == '+')))
		return (0);
	return (1);
}

int	is_pseudo(std::string str)
{
	return (str == "nan" || str == "+inf" || str == "-inf"
		|| str == "nanf" || str == "+inff" || str == "-inff");
}

int	is_float(std::string str)
{
	int	dot = 0;
	int	f = 0;
	int i = 0;
	int	digit = 0;

	if (str[i] == '-' || str[i] == '+')
		i++;
	while (str[i] && (isdigit(str[i]) || (dot && !f && str[i] == 'f') || (!dot && str[i] == '.')))
	{
		if (isdigit(str[i]))
			digit = 1;
		if (str[i] == 'f')
			f = 1;
		if (str[i] == '.')
			dot = 1;
		i++;
	}
	if (str[i] || !dot || !f  || !digit)
		return (0);
	return (1);
}

int	is_double(std::string str)
{
	int i = 0;
	int	dot = 0;
	int digit = 0;

	if (str[i] == '-' || str[i] == '+')
		i++;
	while (str[i] && (isdigit(str[i]) || (!dot && str[i] == '.')))
	{
		if (isdigit(str[i]))
			digit = 1;
		if (str[i] == '.')
			dot = 1;
		i++;
	}
	if (str[i] || !dot || !digit)
		return (0);
	return (1);
}

e_type	detect_type(std::string str)
{
	if (is_char(str))
		return (CHAR);
	if (is_int(str))
		return (INT);
	if (is_pseudo(str))
		return (PSEUDO);
	if (is_float(str))
		return (FLOAT);
	if (is_double(str))
		return (DOUBLE);
	return (INVALID);
}
