#include "Span.hpp"


Span::Span(void) : _N(1)
{}

Span::Span(unsigned int N) : _N(N)
{}

Span::Span(const Span& ref)
{
	this->_N = ref._N;
	this->_v = ref._v;
}

Span&	Span::operator=(const Span& ref)
{
	if (this != &ref)
	{
		this->_N = ref._N;
		this->_v = ref._v;
	}
	return (*this);
}

Span::~Span(void)
{}


void	Span::addNumber(int nb)
{
	if (this->_N > this->_v.size())
		this->_v.push_back(nb);
	else
		throw SpanIsFull();
}

void	Span::addNumber(std::vector<int>::iterator start, std::vector<int>::iterator end)
{
	for (std::vector<int>::iterator it = start; it != end; ++it)
		this->addNumber(*it);
}

int		Span::shortestSpan(void)
{
	std::vector<int>	tmp;
	int					min;

	if (this->_v.size() == 1 || !this->_v.size())
		throw NotEnoughNumber();
	tmp = this->_v;
	std::sort(tmp.begin(), tmp.end());
	min = *(tmp.end() - 1) - *tmp.begin();
	for (std::vector<int>::iterator it = tmp.begin(); it != tmp.end() - 1; ++it)
	{
		if (*(it + 1) - *it < min)
			min = *(it + 1) - *it;
	}
	return (min);
}

int		Span::longestSpan(void)
{
	std::vector<int>	tmp;

	if (this->_v.size() == 1 || !this->_v.size())
		throw NotEnoughNumber();
	tmp = this->_v;
	std::sort(tmp.begin(), tmp.end());
	return (*(tmp.end() - 1) - *tmp.begin());
}

std::vector<int>&	Span::get_v(void)
{
	return (this->_v);
}

const char	*Span::SpanIsFull::what(void) const throw()
{
	return ("Span is full");
}

const char	*Span::NotEnoughNumber::what(void) const throw()
{
	return ("Not enough number");
}
