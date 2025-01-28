#ifndef RPN_H
# define RPN_H

# include <iostream>
# include <string>
# include <stack>
# include <cctype>
# include <cstdlib>
# include <exception>


class	RPN
{
	private :
		std::stack<int>	_s;

	public :
		RPN(void);
		RPN(RPN& ref);
		RPN&	operator=(RPN& ref);
		~RPN(void);

		void	ReversePolish(std::string str);
		void	calculate(char& c);

		class	BadInputException : public std::exception
		{
			public :
				const char	*what() const throw();
		};
};

#endif