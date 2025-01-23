#ifndef SCALARCONVERTER_HPP
# define SCALARCONVERTER_HPP

# include <string>
# include <iostream>
# include <cctype>
# include <climits>
# include <cstdlib>
# include <cmath>
# include <ios>

enum	e_type
{
	CHAR,
	INT,
	FLOAT,
	DOUBLE,
	PSEUDO,
	INVALID,
};

class	ScalarConverter
{
	private :
		ScalarConverter(void);
		ScalarConverter(ScalarConverter& ref);
		ScalarConverter& operator=(ScalarConverter& ref);
		~ScalarConverter(void);

	public :
		static void	convert(std::string str);
};

e_type	detect_type(std::string str);
void	print_int(std::string str);
void	print_char(std::string str);
void	print_pseudo(std::string str);
void	print_number(std::string str);

# endif