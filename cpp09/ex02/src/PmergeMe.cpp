#include "PmergeMe.hpp"

PmergeMe::PmergeMe(void)
{}

PmergeMe::PmergeMe(PmergeMe& ref)
{
	(void)ref;
}

PmergeMe&	PmergeMe::operator=(PmergeMe& ref)
{
	(void)ref;
	return (*this);
}

PmergeMe::~PmergeMe(void)
{}

const char	*NegativeValueException::what(void) const throw()
{
	return ("Error : Negative Value");
}
