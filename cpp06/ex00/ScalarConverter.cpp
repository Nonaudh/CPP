#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter(void)
{

}

ScalarConverter::ScalarConverter(ScalarConverter& ref)
{
	*this = ref;
}

ScalarConverter& ScalarConverter::operator=(ScalarConverter& ref)
{
	(void)ref;
	return (*this);
}

ScalarConverter::~ScalarConverter(void)
{

}

void	ScalarConverter::convert(std::string str)
{
	e_type type;

	type = detect_type(str);

	switch (type)
	{
		case INT:
			print_int(str);
			break;
		case CHAR:
			print_char(str);
			break;
		case PSEUDO:
			print_pseudo(str);
			break;
		case FLOAT:
			print_float(str);
			break;
		case DOUBLE:
			print_double(str);
			break;
		case INVALID:
			std::cout << "INVALID" << std::endl;
			break;
	}
}

