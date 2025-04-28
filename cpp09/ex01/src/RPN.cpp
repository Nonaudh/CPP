#include "RPN.hpp"

RPN::RPN(void)
{}

RPN::RPN(RPN& ref)
{
	(void)ref;
}

RPN&	RPN::operator=(RPN& ref)
{
	(void)ref;
	return (*this);
}

RPN::~RPN(void)
{}

const char	*RPN::BadInputException::what() const throw()
{
	return ("bad input");
}

int	istoken(char &c)
{
	return (c == '+' || c == '-' ||
			c == '*' || c == '/');
}

void	RPN::calculate(char& c)
{
	if (this->_s.size() < 2)
		throw BadInputException();
	int	nb2 = this->_s.top();
	this->_s.pop();
	int	nb1 = this->_s.top();
	this->_s.pop();

	switch (c)
	{
		case '+':
			this->_s.push(nb1 + nb2);
			break;
		case '-':
			this->_s.push(nb1 - nb2);
			break;
		case '*':
			this->_s.push(nb1 * nb2);
			break;
		case '/':
			if (nb2 == 0)
				throw std::runtime_error("error : SIGFPE");
			this->_s.push(nb1 / nb2);
			break;
		default:
			break;
	}
}

void	RPN::ReversePolish(std::string str)
{
	std::string	nb = "";

	for (std::string::iterator it = str.begin(); it != str.end(); ++it)
	{
		if (std::isdigit(*it))
			nb += *it;

		else if (*it == ' ' || *it == '\t')
		{
			if (!nb.empty())
			{
				this->_s.push(atoi(nb.c_str()));	
				nb.clear();
			}
		}
		else if (istoken(*it))
		{
			if (!nb.empty())
			{
				this->_s.push(atoi(nb.c_str()));	
				nb.clear();
			}
			calculate(*it);
		}
		else
			throw BadInputException();
	}
	if (!nb.empty() || this->_s.size() != 1)
		throw BadInputException();
	std::cout << this->_s.top() << std::endl;
}